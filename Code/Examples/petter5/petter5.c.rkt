#lang rosette
(require rosette/lib/synthax)
(define-symbolic _a_0_ real?)
(define-symbolic _a_1_ real?)
(define-symbolic _a_2_ real?)
(define-symbolic _a_3_ real?)
(define-symbolic _a_4_ real?)
(define-symbolic _a_5_ real?)
(define-symbolic N_0 real?)
(define-symbolic s_0 real?)
(define-symbolic n_0 real?)
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list n_0 N_0 s_0)
   #:guarantee (and (implies (and (>= N_0 0)) (and (>= 0 0)))
(implies (and (>= N_0 0)) (and (>= 0 0)))
(implies (and (>= N_0 0)) (and (>= (+ 1.00000000000000 N_0) 0)))
(implies (and (>= (+ n_0**6 (* -1 s_0)) 0) (>= (+ s_0 (* -1 n_0**6)) 0) (>= (+ 1.00000000000000 N_0 (* -1 n_0)) 0) (>= (+ n_0 (* -1 N_0)) 0)) (and (>= 1.0 0)))
(implies (and (>= (+ n_0**6 (* -1 s_0)) 0) (>= (+ s_0 (* -1 n_0**6)) 0) (>= (+ 1.00000000000000 N_0 (* -1 n_0)) 0) (>= (+ N_0 (* -1 n_0)) 0)) (and (>= (+ 1.00000000000000 n_0**6 (* -1 _a_1_) (* -1 s_0) (* n_0 (+ 6.00000000000000 (* -1 _a_3_))) (* n_0**2 (+ 15.0000000000000 (* -1 _a_4_))) (* n_0**3 (+ 20.0000000000000 (* -1 _a_2_))) (* n_0**4 (+ 15.0000000000000 (* -1 _a_5_))) (* n_0**5 (+ 6.00000000000000 (* -1 _a_0_)))) 0)))
(implies (and (>= (+ n_0**6 (* -1 s_0)) 0) (>= (+ s_0 (* -1 n_0**6)) 0) (>= (+ 1.00000000000000 N_0 (* -1 n_0)) 0) (>= (+ N_0 (* -1 n_0)) 0)) (and (>= (+ -1.00000000000000 _a_1_ s_0 (* -1 n_0**6) (* n_0 (+ -6.00000000000000 _a_3_)) (* n_0**2 (+ -15.0000000000000 _a_4_)) (* n_0**3 (+ -20.0000000000000 _a_2_)) (* n_0**4 (+ -15.0000000000000 _a_5_)) (* n_0**5 (+ -6.00000000000000 _a_0_))) 0)))
(implies (and (>= (+ n_0**6 (* -1 s_0)) 0) (>= (+ s_0 (* -1 n_0**6)) 0) (>= (+ 1.00000000000000 N_0 (* -1 n_0)) 0) (>= (+ N_0 (* -1 n_0)) 0)) (and (>= (+ N_0 (* -1 n_0)) 0))))
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))
