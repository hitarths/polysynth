#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb460.h"
namespace ANONYMOUS{

Queue* Queue::create(Node*  head_, Node*  tail_){
  void* temp= malloc( sizeof(Queue)  ); 
  Queue* rv = new (temp)Queue();
  rv->head =  head_;
  rv->tail =  tail_;
  return rv;
}
Node* Node::create(int  val_, Node*  next_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->val =  val_;
  rv->next =  next_;
  return rv;
}
void rest(int* in/* len = 5 */, bool* ctrl/* len = 5 */, int* _out/* len = 5 */) {
  CopyArr<int >(_out,0, 5);
  Queue*  q=Queue::create(NULL, NULL);
  q->head = NULL;
  q->tail = NULL;
  for (int  i=0;(i) < (5);i = i + 1){
    if ((ctrl[i])) {
      int  _out_s6=0;
      enqueue(q, (in[i]), _out_s6);
      (_out[i]) = -1;
    } else {
      if ((q->head) != (NULL)) {
        int  _out_s8=0;
        dequeue(q, _out_s8);
        (_out[i]) = _out_s8;
      } else {
        (_out[i]) = -1;
      }
    }
  }
  return;
}
void test(int* in/* len = 5 */, bool* ctrl/* len = 5 */, int* _out/* len = 5 */) {
  CopyArr<int >(_out,0, 5);
  int*  tmp= new int [5]; CopyArr<int >(tmp,0, 5);
  int  tail=0;
  int  head=0;
  for (int  i=0;(i) < (5);i = i + 1){
    if ((ctrl[i])) {
      (tmp[tail]) = (in[i]);
      tail = tail + 1;
      (_out[i]) = -1;
    } else {
      if ((head) != (tail)) {
        (_out[i]) = (tmp[head]);
        head = head + 1;
      } else {
        (_out[i]) = -1;
      }
    }
  }
  delete[] tmp;
  return;
}
void enqueue(Queue* q, int i, int& _out) {
  Node*  n=NULL;
  n = Node::create(0, NULL);
  n->val = i;
  n->next = NULL;
  Node*  n1_s12=NULL;
  Node*  n2_s14=q->tail;
  if ((n1_s12) != (n2_s14)) {
    q->tail->next = n;
  }
  Node*  n1_s12_0=q->head;
  Node*  n2_s14_0=q->tail;
  if ((n1_s12_0) == (n2_s14_0)) {
    q->tail = n;
  }
  Node*  n1_s12_1=q->head;
  Node*  n2_s14_1=NULL;
  if ((n1_s12_1) == (n2_s14_1)) {
    q->head = n;
  }
  _out = 1;
  return;
}
void dequeue(Queue* q, int& _out) {
  Node*  n=q->head;
  assert ((q->head) != (NULL));;
  if ((q->head->next) == (NULL)) {
    assert ((q->head) == (q->tail));;
    q->head = NULL;
    q->tail = NULL;
  } else {
    q->head = q->head->next;
  }
  _out = n->val;
  return;
}

}
