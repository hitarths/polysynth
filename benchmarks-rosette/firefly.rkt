#lang rosette
(require rosette/lib/synthax)
(define-symbolic _a_0_ real?)
(define-symbolic _a_1_ real?)
(define-symbolic _a_2_ real?)
(define-symbolic _a_3_ real?)
(define-symbolic _a_4_ real?)
(define-symbolic _a_5_ real?)
(define-symbolic _a_6_ real?)
(define-symbolic _a_7_ real?)
(define-symbolic _a_8_ real?)
(define-symbolic _a_9_ real?)
(define-symbolic _a_10_ real?)
(define-symbolic _a_11_ real?)
(define-symbolic _a_12_ real?)
(define-symbolic _a_13_ real?)
(define-symbolic _a_14_ real?)
(define-symbolic _a_15_ real?)
(define-symbolic _a_16_ real?)
(define-symbolic _a_17_ real?)
(define-symbolic _a_18_ real?)
(define-symbolic _a_19_ real?)
(define-symbolic _a_20_ real?)
(define-symbolic _a_21_ real?)
(define-symbolic _a_22_ real?)
(define-symbolic _a_23_ real?)
(define-symbolic _a_24_ real?)
(define-symbolic _a_25_ real?)
(define-symbolic _a_26_ real?)
(define-symbolic _a_27_ real?)
(define-symbolic _a_28_ real?)
(define-symbolic _a_29_ real?)
(define-symbolic _a_30_ real?)
(define-symbolic _a_31_ real?)
(define-symbolic _a_32_ real?)
(define-symbolic _a_33_ real?)
(define-symbolic _a_34_ real?)
(define-symbolic invalid_0 real?)
(define-symbolic dirty_0 real?)
(define-symbolic shared_0 real?)
(define-symbolic total_0 real?)
(define-symbolic exclusive_0 real?)
(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list shared_0 invalid_0 exclusive_0 dirty_0 total_0)
   #:guarantee (and (implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0.0 0)))
(implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0.0 0)))
(implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0.0 0)))
(implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= invalid_0 0)))
(implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0 0)))
(implies (and (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= -1.0 0)) (and (>= exclusive_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= -1.0 0)) (and (>= dirty_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= -1.0 0)) (and (>= shared_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= -1.0 0)) (and (>= invalid_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ _a_0_ (* -1.00000000000000 _a_3_) (* _a_1_ dirty_0) (* _a_2_ shared_0) (* _a_3_ invalid_0) (* _a_4_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= dirty_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= shared_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ -1.00000000000000 invalid_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ 1.00000000000000 total_0 (* -1 _a_0_) (* 1.00000000000000 _a_3_) (* dirty_0 (+ -1 (* -1 _a_1_))) (* invalid_0 (+ -1 (* -1 _a_3_))) (* shared_0 (+ -1 (* -1 _a_2_))) (* -1 _a_4_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (* -1 dirty_0) 0) (>= dirty_0 0) (>= (* -1 shared_0) 0) (>= shared_0 0) (>= (* -1 exclusive_0) 0) (>= exclusive_0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ -1.00000000000000 _a_0_ (* -1 total_0) (* -1.00000000000000 _a_3_) (* _a_4_ exclusive_0) (* dirty_0 (+ 1 _a_1_)) (* invalid_0 (+ 1 _a_3_)) (* shared_0 (+ 1 _a_2_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= exclusive_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= (+ -1.00000000000000 dirty_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= (+ _a_5_ (* -1.00000000000000 _a_6_) (* -1.00000000000000 _a_8_) (* _a_6_ dirty_0) (* _a_7_ shared_0) (* _a_8_ invalid_0) (* _a_9_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= (+ -1.00000000000000 invalid_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= (+ 2.00000000000000 total_0 (* -1 _a_5_) (* 1.00000000000000 _a_6_) (* 1.00000000000000 _a_8_) (* dirty_0 (+ -1 (* -1 _a_6_))) (* exclusive_0 (+ -1 (* -1 _a_9_))) (* invalid_0 (+ -1 (* -1 _a_8_))) (* -1 _a_7_ shared_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 dirty_0) 0)) (and (>= (+ -2.00000000000000 _a_5_ (* -1 total_0) (* -1.00000000000000 _a_6_) (* -1.00000000000000 _a_8_) (* _a_7_ shared_0) (* dirty_0 (+ 1 _a_6_)) (* exclusive_0 (+ 1 _a_9_)) (* invalid_0 (+ 1 _a_8_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= 0.0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= dirty_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ _a_10_ (* -1.00000000000000 _a_13_) (* _a_11_ dirty_0) (* _a_12_ shared_0) (* _a_13_ invalid_0) (* _a_14_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ -1.00000000000000 invalid_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ 1.00000000000000 total_0 (* -1 _a_10_) (* 1.00000000000000 _a_13_) (* dirty_0 (+ -1 (* -1 _a_11_))) (* invalid_0 (+ -1 (* -1 _a_13_))) (* -1 _a_12_ shared_0) (* -1 _a_14_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ -1.00000000000000 _a_10_ (* -1 total_0) (* -1.00000000000000 _a_13_) (* _a_12_ shared_0) (* _a_14_ exclusive_0) (* dirty_0 (+ 1 _a_11_)) (* invalid_0 (+ 1 _a_13_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= 0.0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= dirty_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ _a_15_ (* -1.00000000000000 _a_18_) (* _a_16_ dirty_0) (* _a_17_ shared_0) (* _a_18_ invalid_0) (* _a_19_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ -1.00000000000000 invalid_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ 1.00000000000000 total_0 (* -1 _a_15_) (* 1.00000000000000 _a_18_) (* dirty_0 (+ -1 (* -1 _a_16_))) (* invalid_0 (+ -1 (* -1 _a_18_))) (* -1 _a_17_ shared_0) (* -1 _a_19_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ -1.00000000000000 _a_15_ (* -1 total_0) (* -1.00000000000000 _a_18_) (* _a_17_ shared_0) (* _a_19_ exclusive_0) (* dirty_0 (+ 1 _a_16_)) (* invalid_0 (+ 1 _a_18_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ _a_20_ (* _a_21_ dirty_0) (* _a_22_ shared_0) (* _a_23_ invalid_0) (* _a_24_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ 1.00000000000000 dirty_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= shared_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= invalid_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ -1.00000000000000 total_0 (* -1 _a_20_) (* dirty_0 (+ -1 (* -1 _a_21_))) (* invalid_0 (+ -1 (* -1 _a_23_))) (* shared_0 (+ -1 (* -1 _a_22_))) (* -1 _a_24_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 exclusive_0) 0)) (and (>= (+ 1.00000000000000 _a_20_ (* -1 total_0) (* _a_24_ exclusive_0) (* dirty_0 (+ 1 _a_21_)) (* invalid_0 (+ 1 _a_23_)) (* shared_0 (+ 1 _a_22_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ _a_25_ (* -1.00000000000000 _a_27_) (* _a_26_ dirty_0) (* _a_27_ shared_0) (* _a_28_ invalid_0) (* _a_29_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= dirty_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ -1.00000000000000 shared_0) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= invalid_0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ 1.00000000000000 total_0 (* -1 _a_25_) (* 1.00000000000000 _a_27_) (* dirty_0 (+ -1 (* -1 _a_26_))) (* invalid_0 (+ -1 (* -1 _a_28_))) (* shared_0 (+ -1 (* -1 _a_27_))) (* -1 _a_29_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ 1.00000000000000 (* -1 shared_0)) 0) (>= (+ -1.00000000000000 shared_0) 0)) (and (>= (+ -1.00000000000000 _a_25_ (* -1 total_0) (* -1.00000000000000 _a_27_) (* _a_29_ exclusive_0) (* dirty_0 (+ 1 _a_26_)) (* invalid_0 (+ 1 _a_28_)) (* shared_0 (+ 1 _a_27_))) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0.0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 1.0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= 0.0 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ _a_30_ (* _a_31_ dirty_0) (* _a_32_ shared_0) (* _a_33_ invalid_0) (* _a_34_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ -1.00000000000000 total_0 (* -1 _a_30_) (* -1 _a_31_ dirty_0) (* -1 _a_32_ shared_0) (* -1 _a_33_ invalid_0) (* -1 _a_34_ exclusive_0)) 0)))
(implies (and (>= exclusive_0 0) (>= dirty_0 0) (>= shared_0 0) (>= invalid_0 0) (>= (+ total_0 (* -1 dirty_0) (* -1 exclusive_0) (* -1 invalid_0) (* -1 shared_0)) 0) (>= (+ dirty_0 exclusive_0 invalid_0 shared_0 (* -1 total_0)) 0) (>= 1.0 0) (>= (+ -1.00000000000000 invalid_0) 0)) (and (>= (+ 1.00000000000000 _a_30_ (* -1 total_0) (* _a_31_ dirty_0) (* _a_32_ shared_0) (* _a_33_ invalid_0) (* _a_34_ exclusive_0)) 0))))
   )
  )
(define end (current-inexact-milliseconds))
(print (- end start))