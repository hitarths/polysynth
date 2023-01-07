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


(define (loop_inv_1 lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  (and (equal? x (+ (* q y) r))
       (>= r 0))
  )

(define (loop_inv_2 lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  
  (and (equal? dd (* y d))
       (equal? x (+ (* q y ) r))
       (>= r 0)
       (>= r (* y d)))
 )

(define (post_cond lst)
  true
 )

(define (syn_fun1 dd)
  (+ (* m1 dd) c1) 
)

(define (syn_fun2 q d)
  (+ (* m2 q) (* m4 d) c2) 
)


(define (path_1 lst )#| lst = x r a |#
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  (list x y 0 x d dd)
)

(define (path_2 lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  (list x y q r 1 y)
)


(define (path_3 lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  (list x y q r (* 2 d) (syn_fun1 dd))
)


(define (path_4 lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define q (list-ref lst 2))
  (define r (list-ref lst 3))
  (define d (list-ref lst 4))
  (define dd (list-ref lst 5))
  (list x y (syn_fun2 q d) (- r dd) d dd)
)



(define-symbolic x real?)
(define-symbolic y real?)
(define-symbolic q real?)
(define-symbolic r real?)
(define-symbolic d real?)
(define-symbolic dd real?)

(define (arch x y q r d dd )
  (assume (and (>= x 0)
               (>= y 1)))
  (assert (loop_inv_1 (path_1 (list x y q r d dd))))
  
  (assert (implies (and (>= r y) (loop_inv_1 (list x y q r d dd))) (loop_inv_2 (path_2 (list x y q r d dd)))))
  
  (assert (implies (and (>= r (* 2 dd)) (loop_inv_2 (list x y q r d dd)))
                   (loop_inv_2 (path_3 (list x y q r d dd))))
          )

  (assert (implies (and (<= r (* 2 dd)) (loop_inv_2 (list x y q r d dd))) (loop_inv_1 (path_4 (list x y q r d dd)))))
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x y q r d dd)
   #:guarantee (arch x y q r d dd)))

(define end (current-inexact-milliseconds))
(print (- end start))