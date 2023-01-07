(set-option :produce-models true); benchmark generated from python API
(set-info :status unknown)
(declare-fun l_0_0_6 () Real)
(declare-fun l_0_0_5 () Real)
(declare-fun l_0_0_4 () Real)
(declare-fun l_0_0_12 () Real)
(declare-fun l_0_0_11 () Real)
(declare-fun l_0_0_10 () Real)
(declare-fun l_0_0_3 () Real)
(declare-fun l_0_0_2 () Real)
(declare-fun l_0_0_9 () Real)
(declare-fun l_0_0_8 () Real)
(declare-fun _a_0_ () Real)
(declare-fun l_0_0_7 () Real)
(declare-fun l_0_0_1 () Real)
(assert
 (let ((?x22 (* l_0_0_12 l_0_0_12)))
 (let ((?x27 (- (- (- (* (- l_0_0_10) l_0_0_10) (* l_0_0_11 l_0_0_11)) ?x22) (* (* 100.0 l_0_0_4) l_0_0_4))))
 (let ((?x33 (- (- ?x27 (* (* 100.0 l_0_0_5) l_0_0_5)) (* (* 100.0 l_0_0_6) l_0_0_6))))
 (= (+ ?x33 1.0) 0.0)))))
(assert
 (let ((?x93 (- (* (* (- 2.0) l_0_0_10) l_0_0_8) (* (* 2.0 l_0_0_11) l_0_0_9))))
 (let ((?x100 (- (- ?x93 (* (* 200.0 l_0_0_2) l_0_0_4)) (* (* 200.0 l_0_0_3) l_0_0_5))))
 (= (- ?x100 5.0) 0.0))))
(assert
 (let ((?x140 (* l_0_0_9 l_0_0_9)))
 (let ((?x138 (* l_0_0_8 l_0_0_8)))
 (let ((?x137 (- (- _a_0_ (* (* 100.0 l_0_0_2) l_0_0_2)) (* (* 100.0 l_0_0_3) l_0_0_3))))
 (= (- (- ?x137 ?x138) ?x140) 0.0)))))
(assert
 (let ((?x167 (* l_0_0_7 l_0_0_7)))
 (let ((?x166 (- (* (* 2.0 l_0_0_1) l_0_0_2) (* (* 100.0 l_0_0_1) l_0_0_1))))
 (= (- ?x166 ?x167) 0.0))))
(assert
 (let ((?x149 (* l_0_0_3 l_0_0_3)))
 (let ((?x187 (+ (+ (* (* (- 200.0) l_0_0_1) l_0_0_2) (* l_0_0_2 l_0_0_2)) ?x149)))
 (= (- ?x187 (* (* 2.0 l_0_0_7) l_0_0_8)) 0.0))))
(assert
 (let ((?x204 (- (* (* (- 200.0) l_0_0_1) l_0_0_4) (* (* 2.0 l_0_0_10) l_0_0_7))))
 (let ((?x210 (+ (+ ?x204 (* (* 2.0 l_0_0_2) l_0_0_4)) (* (* 2.0 l_0_0_3) l_0_0_5))))
 (= ?x210 0.0))))
(assert
 (let ((?x172 (* l_0_0_1 l_0_0_1)))
 (= ?x172 0.0)))
(assert
 (= (* (* 2.0 l_0_0_1) l_0_0_4) 0.0))
(assert
 (let ((?x79 (* l_0_0_6 l_0_0_6)))
 (= (+ (+ (* l_0_0_4 l_0_0_4) (* l_0_0_5 l_0_0_5)) ?x79) 0.0)))
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