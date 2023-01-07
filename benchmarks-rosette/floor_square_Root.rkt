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
  (define a (list-ref lst 0))
  (define t (list-ref lst 1))
  (define su (list-ref lst 2))
  (define n (list-ref lst 3))
  (and (<= (* a a) n)
       (equal? t (+ (* 2 a ) 1))
       (equal? su (* (+ a 1) (+ a 1))))
  )

(define (post_cond lst)
  (define a (list-ref lst 0))
  (define t (list-ref lst 1))
  (define su (list-ref lst 2))
  (define n (list-ref lst 3))
  (and (<= (* a a ) n))
 )

(define (syn_fun1 t)
  (+ (* m1 t) c1) 
)

(define (syn_fun2 su t)
  (+ (* m2 t) (* m4 su) c2) 
)


(define (call_loop lst )#| lst = x r a |#
  (define a (list-ref lst 0))
  (define t (list-ref lst 1))
  (define su (list-ref lst 2))
  (define n (list-ref lst 3))
 
 #| (list (* p 0.5) (syn_fun2 p q) (syn_fun1 p q r) a)|#
  #|(list (+ a 1) (+ 2 t) (+ su t 2) n)|#
    (list (+ a 1) (syn_fun1 t) (syn_fun2 su t) n)
 
)
(define-symbolic a real?)
(define-symbolic t real?)
(define-symbolic su real?)
(define-symbolic n real?)
(define-symbolic err real?)

(define (arch a t su n )
  (assume (and (>= n 0)))
  (assert (loop_inv (list 0 1 1 n)))
  (assert (implies (and (<= su n) (loop_inv (list a t su n))) (loop_inv (call_loop (list a t su n)))))
  (assert (implies (and (> su n) (loop_inv (list a t su n))) (post_cond (list a t su n))))
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list a t su n)
   #:guarantee (arch a t su n)))

(define end (current-inexact-milliseconds))
(print (- end start))