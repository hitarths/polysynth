(set-option :produce-models true); benchmark generated from python API
(set-info :status unknown)
(declare-fun l_1_0_14 () Real)
(declare-fun l_1_0_13 () Real)
(declare-fun l_1_0_12 () Real)
(declare-fun l_1_0_11 () Real)
(declare-fun l_1_0_10 () Real)
(declare-fun l_1_0_8 () Real)
(declare-fun l_1_0_7 () Real)
(declare-fun l_1_0_6 () Real)
(declare-fun l_1_0_5 () Real)
(declare-fun l_1_0_4 () Real)
(declare-fun l_1_0_3 () Real)
(declare-fun l_1_0_2 () Real)
(declare-fun l_1_0_1 () Real)
(declare-fun _a_0_ () Real)
(declare-fun l_1_0_9 () Real)
(assert
 (let ((?x12 (* l_1_0_14 l_1_0_14)))
 (let ((?x11 (+ (- (- (* (- l_1_0_12) l_1_0_12) (* l_1_0_13 l_1_0_13)) ?x12) 1.0)))
 (= ?x11 0.0))))
(assert
 (let ((?x149 (- (* (* (- 2.0) l_1_0_10) l_1_0_12) (* (* 2.0 l_1_0_11) l_1_0_13))))
 (= (- ?x149 5.0) 0.0)))
(assert
 (let ((?x93 (* 10000.0 l_1_0_6)))
 (let ((?x89 (* 100.0 l_1_0_4)))
 (let ((?x85 (* 100.0 l_1_0_3)))
 (let ((?x140 (* l_1_0_11 l_1_0_11)))
 (let ((?x141 (- (- (- _a_0_ (* 100.0 l_1_0_1)) (* l_1_0_10 l_1_0_10)) ?x140)))
 (let ((?x95 (- (- (- (- (- (- ?x141 l_1_0_2) ?x85) ?x89) l_1_0_5) ?x93) l_1_0_7)))
 (= (- ?x95 l_1_0_8) 0.0))))))))
(assert
 (let ((?x153 (* 200.0 l_1_0_6)))
 (let ((?x62 (+ (+ (- l_1_0_1 (* (* 2.0 l_1_0_10) l_1_0_9)) l_1_0_3) l_1_0_4)))
 (= (+ ?x62 ?x153) 0.0))))
(assert
 (= (- (- l_1_0_6) (* l_1_0_9 l_1_0_9)) 0.0))
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