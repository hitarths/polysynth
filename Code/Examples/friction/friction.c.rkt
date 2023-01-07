#lang rosette
(require rosette/lib/synthax)
(define-symbolic _a_0_ real?)
(define-symbolic _a_1_ real?)
(define-symbolic t_0 real?)
(define-symbolic nuk_0 real?)
(define-symbolic nus_0 real?)
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list t_0 nuk_0 nus_0)
   #:guarantee (and (implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= 0.242 0)) (and (>= (+ -20.0000000000000 (* 3.21440000000000 (_a_0_ + 1.0*_a_1_)**2)) 0)))
(implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= 0.242 0)) (and (>= (+ 20.0000000000000 (* -3.21440000000000 (_a_0_ + 1.0*_a_1_)**2)) 0)))
(implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= 0.242 0)) (and (>= (+ _a_0_ (* 1.00000000000000 _a_1_)) 0)))
(implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= -0.242 0)) (and (>= 0.0 0)))
(implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= -0.242 0)) (and (>= 0.0 0)))
(implies (and (>= t_0 0) (>= (+ nus_0 (* -1 nuk_0)) 0) (>= -0.242 0)) (and (>= _a_0_ 0))))
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))
