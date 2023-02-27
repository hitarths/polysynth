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
  (define x1 (list-ref lst 0))
  (define x2 (list-ref lst 1))
  (define y1 (list-ref lst 2))
  (define y2 (list-ref lst 3))
  (define y3 (list-ref lst 4))
  (equal? x1 (+ (* y1 x2)  y2 y3))
)

(define (post_cond lst)
  true
)

(define (syn_fun1 y2)
  (+ (* m1 y2) c1) 
)

(define syn_constant c2)
#| (define (syn_fun2 su t)
  (+ (* m2 t) (* m4 su) c2) 
) |#


(define (call_loop lst )#| lst = x r a |#
  (define x1 (list-ref lst 0))
  (define x2 (list-ref lst 1))
  (define y1 (list-ref lst 2))
  (define y2 (list-ref lst 3))
  (define y3 (list-ref lst 4))
 
 #| (list (* p 0.5) (syn_fun2 p q) (syn_fun1 p q r) a)|#
  #|(list (+ a 1) (+ 2 t) (+ su t 2) n)|#

  (if (equal? x2 (+ y2 1)) (list x1 x2 (+ y1 1) c2 (- y3 1)) (list x1 x2 y1 (syn_fun1 y2) (- y3 1))
)
  )


(define-symbolic x1 real?)
(define-symbolic x2 real?)
(define-symbolic y1 real?)
(define-symbolic y2 real?)
(define-symbolic y3 real?)

(define (arch x1 x2 y1 y2 y3)
  (assume (and (>= x1 0) (>= x2 0)))
  (assert (loop_inv (list x1 x2 0 0 x1)))
  (assert (implies (and (>= y3 0) (loop_inv (list x1 x2 y1 y2 y3))) (loop_inv (call_loop (list x1 x2 y1 y2 y3))))) 
  )


(define start (current-inexact-milliseconds))

(define sol
  (synthesize
   #:forall (list x1 x2 y1 y2 y3)
   #:guarantee (arch x1 x2 y1 y2 y3)))

(define end (current-inexact-milliseconds))
(print (- end start))