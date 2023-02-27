#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic c1 real?)

(define-symbolic m2 real?)
(define-symbolic c2 real?)

(define (syn_fun m fl)
  (* (+ (* m1 m) c1) (+ (* m2 fl) c2)))
   
(define (arch m )
  (assume (>= m 0))
(define x (if (<= m 200) (syn_fun m 1) (syn_fun m 0)))
(define e (if (<= m 200) (- m (* x 200)) 0))
(assert (and (equal? e 0) (>= x 0) (<= x 1) ))
 )


(define-symbolic x real?)
(define-symbolic y real?)

(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall x
   #:guarantee (arch x)))

(define end (current-inexact-milliseconds))

(print (- end start))

#| (model
 [m1 -1.0]
 [c1 0.0]
 [m2 -0.004999523162841797]
 [c2 -4.76837158203125e-7])
|#