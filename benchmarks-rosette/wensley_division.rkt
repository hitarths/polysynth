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
  (define P (list-ref lst 0))
  (define Q (list-ref lst 1))
  (define E (list-ref lst 2))
  (define a (list-ref lst 3))
  (define b (list-ref lst 4))
  (define d (list-ref lst 5))
  (define y (list-ref lst 6))
  
  (and (equal? a (* Q y))
       (equal? b (* Q d 0.5))
       (<= (- P (* d Q)) (* y Q))
       (<= (* y Q) P)
       (>= Q 0)
  )
)

(define (post_cond lst)
  true
)

(define (syn_fun1 b)
  (+ (* m1 b) c1)
)

(define (syn_fun2 a b)
  (+ (* m2 a) (* m3 b) c2)
)

(define (syn_fun3 y d)
  (+ (* m4 y) (* m5 d) c3)
)
(define (call_loop lst )
  (define P (list-ref lst 0))
  (define Q (list-ref lst 1))
  (define E (list-ref lst 2))
  (define a (list-ref lst 3))
  (define b (list-ref lst 4))
  (define d (list-ref lst 5))
  (define y (list-ref lst 6))
  
  (if (<= P (+ a b)) (list P Q E a (syn_fun1 b) (* d 0.5) y)
                     (list P Q E (syn_fun2 a b) (* b 0.5) (* d 0.5) (syn_fun3 y d))
  )
  )


(define-symbolic P real?)
(define-symbolic Q real?)
(define-symbolic E real?)
(define-symbolic a real?)
(define-symbolic b real?)
(define-symbolic d real?)
(define-symbolic y real?)

(define (arch P Q E a b d y)
  (assume (and (>= Q P)
               (>= P 0)
               (>= E 0)
               )
  )
  (assert (loop_inv (list P Q E 0 (* 0.5 Q) 1 0)))
  (assert (implies (and (loop_inv (list P Q E a b d y))) (loop_inv (call_loop (list P Q E a b d y))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list  P Q E a b d y)
   #:guarantee (arch P Q E a b d y)))

(define end (current-inexact-milliseconds))
(print (- end start))