#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)
(define-symbolic m3 real?)


(define (syn_fun1 x)
  (+ (* m1 x) (* m2 x x) (* m3 x x x) c1) 
)


(define-symbolic x real?)

(define (arch x )
  (assert (implies (and (<= x 0)) (<= (- (syn_fun1 x) (+ (* x x x) x)) 5)))
  (assert (implies (and (>= x 0))  (<= (- (syn_fun1 x) (+ (* x x x))) 5)))
 )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x )
   #:guarantee (arch x)))

(define end (current-inexact-milliseconds))

(print (- end start))

#|
118.55517578125
> sol
(model
 [m1 -0.5]
 [m2 -0.5]
 [c1 0.5]
 [m3 1.0])
>
|#