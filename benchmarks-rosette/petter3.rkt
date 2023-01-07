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
  (define n (list-ref lst 0))
  (define N (list-ref lst 1))
  (define s (list-ref lst 2))
  (and (equal? s (* 0.25 n n (+ n 1) (+ n 1)))
       (<= n (+ N 1)))
)

(define (post_cond lst)
  true
)

(define (syn_fun1 n)
  (+ (* m1 n n n) (* m2 n n) (* m3 n) c1)
)

(define (call_loop lst )
  (define n (list-ref lst 0))
  (define N (list-ref lst 1))
  (define s (list-ref lst 2))

  (list (+ n 1) N (+ s (syn_fun1 n)))
  )


(define-symbolic n real?)
(define-symbolic N real?)
(define-symbolic s real?)

(define (arch n N s)
  (assume (and (>= N 0)))
  (assert (loop_inv (list 0 N 0)))
  (assert (implies (and (loop_inv (list n N s))) (loop_inv (call_loop (list n N s))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list n N s)
   #:guarantee (arch n N s)))

(define end (current-inexact-milliseconds))
(print (- end start))