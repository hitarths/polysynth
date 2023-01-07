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
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define y (list-ref lst 3))
  (define u (list-ref lst 4))
  (define v (list-ref lst 5))
  
  (equal? (+ (* x u) (* y v)) (* a b))
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


(define (path_1 lst )
  (define a (list-ref lst 0))
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define y (list-ref lst 3))
  (define u (list-ref lst 4))
  (define v (list-ref lst 5))
  (list a b a b b 0)
)

(define (path_2 lst)
  (define a (list-ref lst 0))
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define y (list-ref lst 3))
  (define u (list-ref lst 4))
  (define v (list-ref lst 5))
  (list a b (syn_fun1 x y) y u (+ v u))
)


(define (path_3 lst)
  (define a (list-ref lst 0))
  (define b (list-ref lst 1))
  (define x (list-ref lst 2))
  (define y (list-ref lst 3))
  (define u (list-ref lst 4))
  (define v (list-ref lst 5))
  (list a b x (- y x) (syn_fun2 u v) v)
)

(define-symbolic a real?)
(define-symbolic b real?)
(define-symbolic x real?)
(define-symbolic y real?)
(define-symbolic u real?)
(define-symbolic v real?)

(define (arch a b x y u v)
  (assume (and (>= a 0)
               (>= b 0)
          ))
  
  (assert (loop_inv (path_1 (list a b x y u v))))
  
  (assert (implies (and (loop_inv (list a b x y u v))) (loop_inv (path_2 (list a b x y u v )))))

  (assert (implies (and (loop_inv (list a b x y u v))) (loop_inv (path_3 (list a b x y u v )))))
  
)


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list a b x y u v )
   #:guarantee (arch a b x y u v)))

(define end (current-inexact-milliseconds))
(print (- end start))