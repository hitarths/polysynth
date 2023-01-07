(set-option :produce-models true); benchmark generated from python API
(set-info :status unknown)
(declare-fun l_0_0_7 () Real)
(declare-fun l_0_0_1 () Real)
(declare-fun _a_1_ () Real)
(declare-fun l_0_0_6 () Real)
(declare-fun l_0_0_5 () Real)
(declare-fun _a_0_ () Real)
(declare-fun l_0_0_9 () Real)
(declare-fun l_0_0_8 () Real)
(declare-fun l_0_0_4 () Real)
(declare-fun l_0_0_3 () Real)
(declare-fun l_0_0_2 () Real)
(declare-fun _a_2_ () Real)
(declare-fun _a_3_ () Real)
(declare-fun l_0_1_7 () Real)
(declare-fun l_0_1_1 () Real)
(declare-fun l_0_1_6 () Real)
(declare-fun l_0_1_5 () Real)
(declare-fun l_0_1_9 () Real)
(declare-fun l_0_1_8 () Real)
(declare-fun l_0_1_4 () Real)
(declare-fun l_0_1_3 () Real)
(declare-fun l_0_1_2 () Real)
(assert
 (let ((?x32 (* l_0_0_7 l_0_0_7)))
 (let ((?x35 (+ (- (- (- _a_1_) (* (* 1.0 l_0_0_1) l_0_0_1)) ?x32) 5.0)))
 (= ?x35 0.0))))
(assert
 (let ((?x71 (+ (+ (+ (- _a_0_) (* l_0_0_5 l_0_0_5)) (* l_0_0_6 l_0_0_6)) 1.0)))
 (= ?x71 0.0)))
(assert
 (let ((?x91 (* l_0_0_9 l_0_0_9)))
 (let ((?x89 (* l_0_0_8 l_0_0_8)))
 (let ((?x84 (- (- (- _a_2_) (* (* 1.0 l_0_0_2) l_0_0_2)) (* (* 1.0 l_0_0_3) l_0_0_3))))
 (= (- (- (+ ?x84 (* (* 2.0 l_0_0_4) l_0_0_5)) ?x89) ?x91) 0.0)))))
(assert
 (let ((?x119 (* l_0_0_4 l_0_0_4)))
 (let ((?x123 (- (+ (- (- _a_3_) (* (* 2.0 l_0_0_1) l_0_0_2)) ?x119) (* (* 2.0 l_0_0_7) l_0_0_8))))
 (= ?x123 0.0))))
(assert
 (>= l_0_0_1 0.0))
(assert
 (>= l_0_0_3 0.0))
(assert
 (>= l_0_0_4 0.0))
(assert
 (>= l_0_0_6 0.0))
(assert
 (>= l_0_0_7 0.0))
(assert
 (>= l_0_0_9 0.0))
(assert
 (let ((?x151 (* l_0_1_7 l_0_1_7)))
 (let ((?x153 (+ (- (- (- _a_1_) (* (* 1.0 l_0_1_1) l_0_1_1)) ?x151) 5.0)))
 (= ?x153 0.0))))
(assert
 (let ((?x167 (+ (- (- (- _a_0_) (* l_0_1_5 l_0_1_5)) (* l_0_1_6 l_0_1_6)) 1.0)))
 (= ?x167 0.0)))
(assert
 (let ((?x187 (* l_0_1_9 l_0_1_9)))
 (let ((?x185 (* l_0_1_8 l_0_1_8)))
 (let ((?x181 (- (- (- _a_2_) (* (* 1.0 l_0_1_2) l_0_1_2)) (* (* 1.0 l_0_1_3) l_0_1_3))))
 (= (- (- (- ?x181 (* (* 2.0 l_0_1_4) l_0_1_5)) ?x185) ?x187) 0.0)))))
(assert
 (let ((?x214 (* l_0_1_4 l_0_1_4)))
 (let ((?x218 (- (- (- (- _a_3_) (* (* 2.0 l_0_1_1) l_0_1_2)) ?x214) (* (* 2.0 l_0_1_7) l_0_1_8))))
 (= (+ ?x218 1.0) 0.0))))
(assert
 (>= l_0_1_1 0.0))
(assert
 (>= l_0_1_3 0.0))
(assert
 (>= l_0_1_4 0.0))
(assert
 (>= l_0_1_6 0.0))
(assert
 (>= l_0_1_7 0.0))
(assert
 (>= l_0_1_9 0.0))
(check-sat)
(get-model)