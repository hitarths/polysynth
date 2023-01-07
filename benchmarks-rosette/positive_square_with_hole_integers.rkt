#lang rosette
(require rosette/lib/synthax)


(define-symbolic h integer?)

(define (positive n)
(assert (>= (+ (* (- n 5) n) (* h n)) 0))
)

(define-symbolic n integer?)

(define start (current-inexact-milliseconds))
(define sol
  (synthesize
   #:forall n
   #:guarantee (positive n)))


(define end (current-inexact-milliseconds))

(print (- end start))