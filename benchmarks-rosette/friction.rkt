#lang rosette
(require rosette/lib/synthax)
(require rosette/solver/smt/z3)
(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)
(define-symbolic m3 real?)


(define (syn_fun1 move)
  (+ c1 (* m1 move)))

(define-symbolic t real?)

(define-symbolic  x real?)
(define (arch x )
  (assert (equal? 0 (- (* t t 9.8 0.5) (* 9.8 0.2 0.86) 20)))
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall x
   #:guarantee (arch x ))
 )

(define end (current-inexact-milliseconds))

(print (- end start))
