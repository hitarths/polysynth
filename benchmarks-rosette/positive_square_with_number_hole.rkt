#lang rosette
(require rosette/lib/synthax)

(define-symbolic h real?)

(define (positive n)
(assert (>= (+ (* (- n 5) n) (* n h)) 0))
)

(define-symbolic n real?)

(define start (current-inexact-milliseconds))


(define sol
  (synthesize
   #:forall n
   #:guarantee (positive n)))

(define end (current-inexact-milliseconds))

(print (- end start))
