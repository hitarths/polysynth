#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)

(define-symbolic m3 real?)
(define-symbolic m4 real?)
(define-symbolic c2 real?)

(define-symbolic m5 real?)
(define-symbolic c3 real?)


(define (loop_inv lst)
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))
  
  (and (equal? (* 4 (+ N r)) (+ (* u u) (- (* v v)) (- (* 2 u)) (* 2 v)))
       (>= N 1))
  )


(define (post_cond lst)
  true
 )

(define (syn_fun1 v)
  (+ (* m1 v) c1) 
)

(define (syn_fun2 r u)
  (+ (* m2 r) (* m3 u) c2) 
)


(define (path_1 lst )
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))
  (list N R (+ (* 2 R) 1) 1 (- (* R R) N))
)

(define (path_2 lst)
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))
  (list N R u (syn_fun1 v) (- r v))
)


(define (path_3 lst)
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))
  (list N R (+ u 2) v (syn_fun2 r u))
)

(define-symbolic N real?)
(define-symbolic R real?)
(define-symbolic u real?)
(define-symbolic v real?)
(define-symbolic r real?)

(define (arch N R u v r )
  (assume (and (>= N 1)
               (<= (* (- R 1) (- R 1)) (- N 1))
               (<= N (* R R))
          ))
  
  (assert (loop_inv (path_1 (list N R u v r ))))
  
  (assert (implies (and (>= r 0) (loop_inv (list N R u v r))) (loop_inv (path_2 (list N R u v r )))))

  (assert (implies (and (<= r 0) (loop_inv (list N R u v r))) (loop_inv (path_3 (list N R u v r )))))
  
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list N R u v r )
   #:guarantee (arch N R u v r)))

(define end (current-inexact-milliseconds))
(print (- end start))