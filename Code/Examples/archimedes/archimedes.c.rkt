#lang rosette
(require rosette/lib/synthax)
(define-symbolic _a_0_ real?)
(define-symbolic _a_1_ real?)
(define-symbolic _a_2_ real?)
(define-symbolic _a_3_ real?)
(define-symbolic x_0 real?)
(define-symbolic m_0 real?)
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list x_0 m_0)
   #:guarantee (and (implies (and (>= x_0 0) (>= m_0 0) (>= (+ 200.000000000000 (* -1 m_0)) 0)) (and (>= (+ (* m_0 (+ 1 (* -200.000000000000 _a_1_ _a_2_) (* -200.000000000000 _a_1_ _a_3_))) (* -200.000000000000 _a_0_ _a_2_) (* -200.000000000000 _a_0_ _a_3_)) 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ 200.000000000000 (* -1 m_0)) 0)) (and (>= (+ (* m_0 (+ -1 (* 200.000000000000 _a_1_ _a_2_) (* 200.000000000000 _a_1_ _a_3_))) (* 200.000000000000 _a_0_ _a_2_) (* 200.000000000000 _a_0_ _a_3_)) 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ 200.000000000000 (* -1 m_0)) 0)) (and (>= (+ (* _a_0_ _a_3_) (* m_0 (+ (* _a_1_ _a_3_) (* 1.00000000000000 _a_1_ _a_2_))) (* 1.00000000000000 _a_0_ _a_2_)) 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ 200.000000000000 (* -1 m_0)) 0)) (and (>= (+ 1.00000000000000 (* m_0 (+ (* -1 _a_1_ _a_3_) (* -1.00000000000000 _a_1_ _a_2_))) (* -1 _a_0_ _a_3_) (* -1.00000000000000 _a_0_ _a_2_)) 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ -200.000000000000 m_0) 0)) (and (>= 0.0 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ -200.000000000000 m_0) 0)) (and (>= 0.0 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ -200.000000000000 m_0) 0)) (and (>= (+ (* _a_0_ _a_3_) (* _a_1_ _a_3_ m_0)) 0)))
(implies (and (>= x_0 0) (>= m_0 0) (>= (+ -200.000000000000 m_0) 0)) (and (>= (+ 1.00000000000000 (* -1 _a_0_ _a_3_) (* -1 _a_1_ _a_3_ m_0)) 0))))
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))
