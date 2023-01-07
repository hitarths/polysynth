#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb383.h"
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
void rest(int* in/* len = 3 */, bool* ctrl/* len = 3 */, int* _out/* len = 3 */) {
  CopyArr<int >(_out,0, 3);
  Queue*  q=Queue::create(NULL, NULL);
  q->head = NULL;
  q->tail = NULL;
  for (int  i=0;(i) < (3);i = i + 1){
    if ((ctrl[i])) {
      int  _out_s3=0;
      enqueue(q, (in[i]), _out_s3);
      (_out[i]) = -1;
    } else {
      if ((q->head) != (NULL)) {
        int  _out_s5=0;
        dequeue(q, _out_s5);
        (_out[i]) = _out_s5;
      } else {
        (_out[i]) = -1;
      }
    }
  }
  return;
}
void test(int* in/* len = 3 */, bool* ctrl/* len = 3 */, int* _out/* len = 3 */) {
  CopyArr<int >(_out,0, 3);
  int*  tmp= new int [3]; CopyArr<int >(tmp,0, 3);
  int  tail=0;
  int  head=0;
  for (int  i=0;(i) < (3);i = i + 1){
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
  if ((q->tail) == (NULL)) {
    q->head = n;
  }
  if ((q->tail) == (NULL)) {
    q->tail = n;
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
