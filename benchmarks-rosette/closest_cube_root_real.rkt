#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)

(define-symbolic m3 real?)
(define-symbolic m4 real?)
(define-symbolic c2 real?)

(define (loop_inv lst)
  (define x (list-ref lst 0))
  (define s (list-ref lst 1))
  (define r (list-ref lst 2))
  (define a (list-ref lst 3))
  (and (>= x 0) (equal? (+ (* -12 r r) (* 4 s )) 1 )
      (equal? (+ (* 4 r r r) (* -6 r r) (* 3 r) (* 4 x) (* -4 a)) 1)
  ))

(define (syn_fun1 x s)
  (+ (* m1 x) (* m2 s) c1) 
)

(define (syn_fun2 s r)
  (+ (* m3 s) (* m4 r) c2) 
)

(define (call_loop lst )#| lst = x s r a |#
  (define x (list-ref lst 0))
  (define s (list-ref lst 1))
  (define r (list-ref lst 2))
  (define a (list-ref lst 3))
  (list (syn_fun1 x s) (syn_fun2 s r) (+ r 1) a)
 #| (list (- x s) (+ 3 s (* 6 r)) (+ r 1) a) |#
  
)

(define-symbolic x real?)
(define-symbolic s real?)
(define-symbolic r real?)
(define-symbolic a real?)

(define (arch x s r a )
  (assume (>= a 0))
  (assert (loop_inv (list a 3.25 1 a)))
  (assert (implies (and (>= x s) (loop_inv (list x s r a))) (loop_inv (call_loop (list x s r a)))))
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list x s r a)
   #:guarantee (arch x s r a)))

(define end (current-inexact-milliseconds))

(print (- end start))
