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
  (define a (list-ref lst 0))
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define u (list-ref lst 3))
  (define v (list-ref lst 4))
  (define y (list-ref lst 5))
  
  (and (equal? 0 (+ (* u x) (* v y) (- (* 2 a b))))
  )
)

(define (post_cond lst)
  true
)

(define (syn_fun1 x y)
  (+ (* m1 x) (* m2 y) c1)
)

(define (syn_fun2 u v)
  (+ (* m3 u) (* m4 v) c2)
)

(define (call_loop lst )
  (define a (list-ref lst 0))
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define u (list-ref lst 3))
  (define v (list-ref lst 4))
  (define y (list-ref lst 5))
  
  (if (>= x y) (list a b (syn_fun1 x y) u (+ u v) y)
               (list a b x (syn_fun2 u v) v (- y x)))
  )


(define-symbolic a real?)
(define-symbolic b real?)
(define-symbolic x real?)
(define-symbolic u real?)
(define-symbolic v real?)
(define-symbolic y real?)

(define (arch a b x u v y)
  (assume (and (>= a b)
               (>= b 0)
               )
  )
  (assert (loop_inv (list a b a b a b)))
  (assert (implies (and (loop_inv (list  a b x u v y))) (loop_inv (call_loop (list a b x u v y))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list  a b x u v y)
   #:guarantee (arch  a b x u v y)))

(define end (current-inexact-milliseconds))
(print (- end start))