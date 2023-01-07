#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)

(define-symbolic m3 real?)
(define-symbolic m4 real?)
(define-symbolic c2 real?)

(define-symbolic m5 real?)
(define-symbolic m6 real?)
(define-symbolic m7 real?)
(define-symbolic m8 real?)

(define-symbolic c3 real?)
(define-symbolic c4 real?)

(define (loop_inv lst)
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))
  (and (>= N 1) (equal? (* 4 (+ N r)) (+ (* u u) (- (* v v)) (- (* 2 u)) (* 2 v))))
)

(define (post_cond lst)
  true
)

(define (syn_fun1 r u)
  (+ (* m1 r) (* m2 u) c1) 
)
(define (syn_fun2 v)
  (+ (* m3 v) c2) 
)

(define (call_loop lst )
  (define N (list-ref lst 0))
  (define R (list-ref lst 1))
  (define u (list-ref lst 2))
  (define v (list-ref lst 3))
  (define r (list-ref lst 4))

  (if (>= r 0) (list N R u (syn_fun2 v) (- r v))
               (list N R (+ u 2) v (syn_fun1 r u)))
      )


(define-symbolic N real?)
(define-symbolic R real?)
(define-symbolic u real?)
(define-symbolic v real?)
(define-symbolic r real?)

(define (arch N R u v r)
  (assume (and (>= N 1)
               (<= (* (- R 1) (- R 1))  (- N 1))
               (<= N (* R R))
               ))
  (assert (loop_inv (list N R (+ (* 2 R) 1) 1 (- (* R R) N)) ))
  (assert (implies (and (loop_inv (list N R u v r))) (loop_inv (call_loop (list N R u v r))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list N R u v r)
   #:guarantee (arch N R u v r)))

(define end (current-inexact-milliseconds))
(print (- end start))