#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic c1 real?)

(define-symbolic m2 real?)
(define-symbolic c2 real?)

(define (z_is_positive x y)
(assume (>= x 0))
  (define z (if (>= y 0) (+ x y) (+ (+ x y) (+ (* m1 y) c1))))
(assert (>= z 0))
)

(define-symbolic x real?)
(define-symbolic y real?)

(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x y)
   #:guarantee (z_is_positive x y)))

(define end (current-inexact-milliseconds))

(print (- end start))
