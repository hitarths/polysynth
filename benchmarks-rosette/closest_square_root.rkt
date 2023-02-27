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
  (define x (list-ref lst 0))
  (define r (list-ref lst 1))
  (define a (list-ref lst 2))
  #|(and (>= x 0)
      (equal? (+ c1 (* m5 x) (* r r) (* -1 r)) a))|#
  (and (>= x 0)
      (equal? (+ c3 (* m5  x) (* r r) (* -1 r)) a))
  )

(define (post_cond lst)
  (define x (list-ref lst 0))
  (define r (list-ref lst 1))
  (define a (list-ref lst 2))
  (and (>= (- (* r r) r) (- a (* 2 r))) (<= (- (* r r) r) a))
 )

(define (syn_fun1 x r)
  (+ (* m1 x) (* m2 r) c1) 
)

(define (syn_fun2 s r)
  (+ (* m3 s) (* m4 r) c2) 
)

(define (call_loop lst )#| lst = x r a |#
  (define x (list-ref lst 0))
  (define r (list-ref lst 1))
  (define a (list-ref lst 2))
  (list (syn_fun1 x r) (+ r 1) a)
 #| (list (- x s) (+ 3 s (* 6 r)) (+ r 1) a) |#
  
)

(define-symbolic x real?)
(define-symbolic r real?)
(define-symbolic a real?)

(define (arch x r a )
  (assume (>= a 0))
  (assert (loop_inv (list (/ a 2) 0 a)))
  (assert (implies (and (>= x r) (loop_inv (list x r a))) (loop_inv (call_loop (list x r a)))))
  (assert (implies (and (< x r) (loop_inv (list x r a))) (post_cond (list x r a))))

 )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   
   #:forall (list x r a)
   #:guarantee (arch x r a)))

(define end (current-inexact-milliseconds))

(print (- end start))


#| 146.100830078125
> sol
(model
 [m1 1.0]
 [m2 -1.0]
 [c1 0.0]
 [m5 2.0]
 [c3 0.0])
>
|#