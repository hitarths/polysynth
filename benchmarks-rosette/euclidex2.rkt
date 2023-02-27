#lang rosette
(require rosette/lib/synthax)

(define-symbolic m1 real?)
(define-symbolic m2 real?)
(define-symbolic c1 real?)

(define-symbolic m3 real?)
(define-symbolic m4 real?)
(define-symbolic c2 real?)

(define-symbolic m5 real?)
(define-symbolic m6 real?)
(define-symbolic m7 real?)
(define-symbolic m8 real?)

(define-symbolic c3 real?)
(define-symbolic c4 real?)

(define (loop_inv lst)
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define a (list-ref lst 2))
  (define b (list-ref lst 3))
  (define p (list-ref lst 4))
  (define q (list-ref lst 5))
  (define r (list-ref lst 6))
  (define s (list-ref lst 7))
  (and (equal? a (+ (* y r) (* p x))) (equal? b (+ (* x q) (* y s))))
)

(define (post_cond lst)
  true
)

(define (syn_fun1 a b)
  (+ (* m1 a) (* m2 b) c1) 
)
(define (syn_fun2 p q)
  (+ (* m3 p) (* m4 q) c2) 
)
(define (syn_fun3 a b)
  (+ (* m5 a) (* m6 b) c3) 
)
(define (syn_fun4 r s)
  (+ (* m7 r) (* m8 s) c4) 
)

(define syn_constant c2)
#| (define (syn_fun2 su t)
  (+ (* m2 t) (* m4 su) c2) 
) |#


(define (call_loop lst )#| lst = x r a |#
  (define x (list-ref lst 0))
  (define y (list-ref lst 1))
  (define a (list-ref lst 2))
  (define b (list-ref lst 3))
  (define p (list-ref lst 4))
  (define q (list-ref lst 5))
  (define r (list-ref lst 6))
  (define s (list-ref lst 7))
 #| (list (* p 0.5) (syn_fun2 p q) (syn_fun1 p q r) a)|#
  #|(list (+ a 1) (+ 2 t) (+ su t 2) n)|#

  (if (>= a b) (list x y (syn_fun1 a b) b (syn_fun2 p q) q (- r s) s) (list x y a (syn_fun3 a b) p (- q p) r (syn_fun4 r s)))
)


(define-symbolic x real?)
(define-symbolic y real?)
(define-symbolic a real?)
(define-symbolic b real?)
(define-symbolic p real?)
(define-symbolic q real?)
(define-symbolic r real?)
(define-symbolic s real?)

(define (arch x y a b p q r s)
  (assume (and (>= x 0) (>= y 0)))
  (assert (loop_inv (list x y x y 1 0 0 1)))
  (assert (implies (and (loop_inv (list x y a b p q r s))) (loop_inv (call_loop (list x y a b p q r s))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x y a b p q r s)
   #:guarantee (arch x y a b p q r s)))

(define end (current-inexact-milliseconds))
(print (- end start))