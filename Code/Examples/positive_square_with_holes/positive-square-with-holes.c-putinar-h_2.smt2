(set-option :produce-models true); benchmark generated from python API
(set-info :status unknown)
(declare-fun l_0_0_7 () Real)
(declare-fun l_0_0_1 () Real)
(declare-fun l_0_0_8 () Real)
(declare-fun l_0_0_2 () Real)
(declare-fun _a_1_ () Real)
(declare-fun l_0_0_9 () Real)
(declare-fun l_0_0_3 () Real)
(declare-fun _a_0_ () Real)
(declare-fun l_0_0_10 () Real)
(declare-fun l_0_0_4 () Real)
(declare-fun l_0_0_5 () Real)
(declare-fun l_0_0_11 () Real)
(declare-fun l_0_0_6 () Real)
(declare-fun l_0_0_12 () Real)
(assert
 (let ((?x25 (+ (- (* (* (- 100.0) l_0_0_1) l_0_0_1) (* l_0_0_7 l_0_0_7)) 1.0)))
 (= ?x25 0.0)))
(assert
 (let ((?x63 (- (- _a_1_ (* (* 200.0 l_0_0_1) l_0_0_2)) (* (* 2.0 l_0_0_7) l_0_0_8))))
 (= (- ?x63 5.0) 0.0)))
(assert
 (let ((?x94 (* l_0_0_9 l_0_0_9)))
 (let ((?x92 (* l_0_0_8 l_0_0_8)))
 (let ((?x91 (- (- _a_0_ (* (* 100.0 l_0_0_2) l_0_0_2)) (* (* 100.0 l_0_0_3) l_0_0_3))))
 (= (- (- ?x91 ?x92) ?x94) 0.0)))))
(assert
 (let ((?x119 (- (* (* 2.0 l_0_0_1) l_0_0_2) (* (* 200.0 l_0_0_1) l_0_0_4))))
 (= (- ?x119 (* (* 2.0 l_0_0_10) l_0_0_7)) 0.0)))
(assert
 (let ((?x103 (* l_0_0_3 l_0_0_3)))
 (let ((?x97 (* l_0_0_2 l_0_0_2)))
 (let ((?x142 (- (* (* (- 2.0) l_0_0_10) l_0_0_8) (* (* 2.0 l_0_0_11) l_0_0_9))))
 (let ((?x149 (- (+ (- ?x142 (* (* 200.0 l_0_0_2) l_0_0_4)) ?x97) (* (* 200.0 l_0_0_3) l_0_0_5))))
 (= (+ ?x149 ?x103) 0.0))))))
(assert
 (let ((?x179 (* l_0_0_12 l_0_0_12)))
 (let ((?x183 (+ (- (- (* (- l_0_0_10) l_0_0_10) (* l_0_0_11 l_0_0_11)) ?x179) (* (* 2.0 l_0_0_2) l_0_0_4))))
 (let ((?x189 (- (+ ?x183 (* (* 2.0 l_0_0_3) l_0_0_5)) (* (* 100.0 l_0_0_4) l_0_0_4))))
 (let ((?x195 (- (- ?x189 (* (* 100.0 l_0_0_5) l_0_0_5)) (* (* 100.0 l_0_0_6) l_0_0_6))))
 (= ?x195 0.0))))))
(assert
 (let ((?x46 (* l_0_0_1 l_0_0_1)))
 (= ?x46 0.0)))
(assert
 (= (* (* 2.0 l_0_0_1) l_0_0_4) 0.0))
(assert
 (let ((?x221 (* l_0_0_6 l_0_0_6)))
 (= (+ (+ (* l_0_0_4 l_0_0_4) (* l_0_0_5 l_0_0_5)) ?x221) 0.0)))
(assert
 (>= l_0_0_1 0.0))
(assert
 (>= l_0_0_3 0.0))
(assert
 (>= l_0_0_6 0.0))
(assert
 (>= l_0_0_7 0.0))
(assert
 (>= l_0_0_9 0.0))
(assert
 (>= l_0_0_12 0.0))
(check-sat)
(get-model)