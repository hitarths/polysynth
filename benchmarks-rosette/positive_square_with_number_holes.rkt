#lang rosette
(require rosette/lib/synthax)
(define-symbolic _a_0_ real?)
(define-symbolic n_0 real?)
(define-symbolic x_0 real?)
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list n_0 x_0)
   #:guarantee (and (implies (and (>= (+ 100.000000000000 (* -1 x_0)) 0)) (and (>= (+ _a_0_ n_0**2 (* -5.00000000000000 n_0)) 0))))
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))
