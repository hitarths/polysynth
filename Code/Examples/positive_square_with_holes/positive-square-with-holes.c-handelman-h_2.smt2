(set-option :produce-models true); benchmark generated from python API
(set-info :status unknown)
(declare-fun l_1_0_9 () Real)
(declare-fun l_1_0_10 () Real)
(declare-fun _a_1_ () Real)
(declare-fun l_1_0_8 () Real)
(declare-fun l_1_0_7 () Real)
(declare-fun l_1_0_6 () Real)
(declare-fun l_1_0_5 () Real)
(declare-fun l_1_0_4 () Real)
(declare-fun l_1_0_3 () Real)
(declare-fun l_1_0_2 () Real)
(declare-fun l_1_0_11 () Real)
(declare-fun l_1_0_1 () Real)
(declare-fun _a_0_ () Real)
(declare-fun l_1_0_13 () Real)
(declare-fun l_1_0_12 () Real)
(declare-fun l_1_0_14 () Real)
(assert
 (= (- 1.0 (* l_1_0_9 l_1_0_9)) 0.0))
(assert
 (= (- (- _a_1_ (* (* 2.0 l_1_0_10) l_1_0_9)) 5.0) 0.0))
(assert
 (let ((?x141 (* 10000.0 l_1_0_6)))
 (let ((?x14 (* 100.0 l_1_0_5)))
 (let ((?x196 (* 100.0 l_1_0_3)))
 (let ((?x193 (* l_1_0_11 l_1_0_11)))
 (let ((?x194 (- (- (- _a_0_ (* 100.0 l_1_0_1)) (* l_1_0_10 l_1_0_10)) ?x193)))
 (let ((?x52 (- (- (- (- (- (- ?x194 l_1_0_2) ?x196) l_1_0_4) ?x14) ?x141) l_1_0_7)))
 (= (- ?x52 l_1_0_8) 0.0))))))))
(assert
 (let ((?x157 (* 200.0 l_1_0_6)))
 (let ((?x27 (- (- l_1_0_1 (* (* 2.0 l_1_0_10) l_1_0_12)) (* (* 2.0 l_1_0_11) l_1_0_13))))
 (= (+ (+ (+ ?x27 l_1_0_3) l_1_0_5) ?x157) 0.0))))
(assert
 (let ((?x128 (* l_1_0_14 l_1_0_14)))
 (let ((?x98 (- (- (- (* (- l_1_0_12) l_1_0_12) (* l_1_0_13 l_1_0_13)) ?x128) l_1_0_6)))
 (= ?x98 0.0))))
(assert
 (= (* (* (- 2.0) l_1_0_12) l_1_0_9) 0.0))
(assert
 (>= l_1_0_1 0.0))
(assert
 (>= l_1_0_2 0.0))
(assert
 (>= l_1_0_3 0.0))
(assert
 (>= l_1_0_4 0.0))
(assert
 (>= l_1_0_5 0.0))
(assert
 (>= l_1_0_6 0.0))
(assert
 (>= l_1_0_7 0.0))
(assert
 (>= l_1_0_8 0.0))
(assert
 (>= l_1_0_9 0.0))
(assert
 (>= l_1_0_11 0.0))
(assert
 (>= l_1_0_14 0.0))
(check-sat)
(get-model)