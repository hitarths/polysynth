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
  (define y (list-ref lst 1))
  (define t (list-ref lst 2))
  (define n (list-ref lst 3))
  (and (equal? n (+ (* x x x)  (* 3 t) y)))
  )

(define (post_cond lst)
  true
 )

(define (syn_fun1 x y)
  (+ (* m1 y) (* m2 x) c1) 
)

#| (define (syn_fun2 su t)
  (+ (* m2 t) (* m4 su) c2) 
) |#


(define (call_loop lst )#| lst = x r a |#
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define t (list-ref lst 2))
  (define n (list-ref lst 3))
 
 #| (list (* p 0.5) (syn_fun2 p q) (syn_fun1 p q r) a)|#
  #|(list (+ a 1) (+ 2 t) (+ su t 2) n)|#

  (if (equal? t (* x x)) (list (+ x 1) (syn_fun1 x y) 0 n) (list x (- y 3) (+ t 1) n))
)
(define-symbolic x real?)
(define-symbolic y real?)
(define-symbolic t real?)
(define-symbolic n real?)

(define (arch x y t n)
  (assume (and (>= n 0)))
  (assert (loop_inv (list 0 n 0 n)))
  (assert (implies (and (>= y 0) (loop_inv (list x y t n))) (loop_inv (call_loop (list x y t n)))))
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x y t n)
   #:guarantee (arch x y t n)))

(define end (current-inexact-milliseconds))
(print (- end start))