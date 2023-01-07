#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)

(define-symbolic m3 real?)
(define-symbolic m4 real?)
(define-symbolic c2 real?)

(define-symbolic m5 real?)
(define-symbolic c3 real?)

(define (loop_inv lst)
  (define p (list-ref lst 0))
  (define q (list-ref lst 1))
  (define r (list-ref lst 2))
  (define a (list-ref lst 3))
  (and (>= p 0) (>= r 0) (equal? (+ (* q q) (* 2 r p)) a))
  )

(define (post_cond lst err)
  (define p (list-ref lst 0))
  (define q (list-ref lst 1))
  (define r (list-ref lst 2))
  (define a (list-ref lst 3))
  (and (>= (* q q ) (- a err)) (<=  (* q q ) a))
 )

(define (syn_fun1 p q r)
  (+ (* m1 r) (* m2 p) (* m3 q) c1) 
)

(define (syn_fun2 p q)
  (+ p (* m4 q) c2) 
)

(define (syn_fun3 r)
  (+ (* m5 r) c3))

(define (call_loop lst )#| lst = x r a |#
  (define p (list-ref lst 0))
  (define q (list-ref lst 1))
  (define r (list-ref lst 2))
  (define a (list-ref lst 3))
  (if (>= (+ (* 2 r) (* -2 q) (* -1 p)) 0)
  (list (* p 0.5) (syn_fun2 p q) (syn_fun1 p q r) a)
  (list (* p 0.5) q (syn_fun3 r) a))
 #| (list (- x s) (+ 3 s (* 6 r)) (+ r 1) a) |#
 
)
(define-symbolic p real?)
(define-symbolic q real?)
(define-symbolic r real?)
(define-symbolic a real?)
(define-symbolic err real?)

(define (arch p q r a err )
  (assume (and (>= a 1) (>= err 0)))
  (assert (loop_inv (list 0.5 1 (- a 1) a)))
  (assert (implies (and (>= (* 2 p r) err) (loop_inv (list p q r a))) (loop_inv (call_loop (list p q r a)))))
  (assert (implies (and (<= (* 2 p r) err) (loop_inv (list p q r a))) (post_cond (list p q r a) err)))
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list p q r a err)
   #:guarantee (arch p q r a err)))

(define end (current-inexact-milliseconds))
(print (- end start))