#lang rosette
(require rosette/lib/synthax)

(define-symbolic m11 real?)
(define-symbolic m12 real?)
(define-symbolic m13 real?)
(define-symbolic m14 real?)
(define-symbolic m15 real?)
(define-symbolic c1 real?)

(define-symbolic m21 real?)
(define-symbolic m22 real?)
(define-symbolic m23 real?)
(define-symbolic m24 real?)
(define-symbolic m25 real?)
(define-symbolic c2 real?)

(define-symbolic m5 real?)
(define-symbolic c3 real?)


(define (loop_inv lst)
  (define n (list-ref lst 0))
  (define x (list-ref lst 1))
  (define y (list-ref lst 2))
  (define z (list-ref lst 3))
  (define s (list-ref lst 4))
  (and (equal? z (+ (* 6 n) 6))
       (equal? y (+ (* 3 n n) (* 3 n) 1))
       (equal? x (* n n n))
 )
  )

(define (syn_fun1 x y)
  (+ (* m11 x) (* m12 y) (* m13 x x) (* m14 y y) (* m15 x y) c1) 
)

(define (syn_fun2 y z)
  (+ (* m21 y) (* m22 z) (* m23 y y) (* m24 z z) (* m25 y z) c2) 
)
(define (syn_fun3 z)
  (+ (* m5 z) c3) 
)

(define (call_loop lst )#| lst = x r a |#
  (define n (list-ref lst 0))
  (define x (list-ref lst 1))
  (define y (list-ref lst 2))
  (define z (list-ref lst 3))
  (define s (list-ref lst 4))
  (if (equal? x (* n n n))
      (list (+ n 1) (syn_fun1 x y) (syn_fun2 y z) (syn_fun3 z) (+ s x))
      (list (+ n 1) (syn_fun1 x y) (syn_fun2 y z) (syn_fun3 z) s))
 #| (list (- x s) (+ 3 s (* 6 r)) (+ r 1) a) |#
  
)
(define-symbolic n real?)
(define-symbolic y real?)
(define-symbolic x real?)
(define-symbolic z real?)
(define-symbolic s real?)
(define-symbolic N real?)

(define (arch n x y z s N)
  (assert (loop_inv (list 0 0 1 6 0)))
  (assert (implies (and (<= n N) (loop_inv (list n x y z s))) (loop_inv (call_loop (list n x y z s)))))
  #|(assert (implies (and (< x r) (loop_inv (list x r a))) (post_cond (list x r a))))
|#
 )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list n x y z s N)
   #:guarantee (arch n x y z s N)))

(define end (current-inexact-milliseconds))

(print (- end start))
