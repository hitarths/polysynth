#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb184.h"
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
void rest(int* in/* len = 6 */, bool* ctrl/* len = 6 */, int* _out/* len = 6 */) {
  CopyArr<int >(_out,0, 6);
  Queue*  q=Queue::create(NULL, NULL);
  q->head = NULL;
  q->tail = NULL;
  for (int  i=0;(i) < (6);i = i + 1){
    if ((ctrl[i])) {
      int  _out_s5=0;
      enqueue(q, (in[i]), _out_s5);
      (_out[i]) = -1;
    } else {
      if ((q->head) != (NULL)) {
        int  _out_s7=0;
        dequeue(q, _out_s7);
        (_out[i]) = _out_s7;
      } else {
        (_out[i]) = -1;
      }
    }
  }
  return;
}
void test(int* in/* len = 6 */, bool* ctrl/* len = 6 */, int* _out/* len = 6 */) {
  CopyArr<int >(_out,0, 6);
  int*  tmp= new int [6]; CopyArr<int >(tmp,0, 6);
  int  tail=0;
  int  head=0;
  for (int  i=0;(i) < (6);i = i + 1){
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
void prel(bool& _out) {
  Queue*  q=Queue::create(NULL, NULL);
  q->head = NULL;
  q->tail = NULL;
  int  _out_s15=0;
  enqueue(q, 5, _out_s15);
  assert ((q->head) != (NULL));;
  assert ((q->tail) == (q->head));;
  assert ((q->head->val) == (5));;
  _out = 1;
  return;
}
void ONE(bool& _out) {
  _out = 1;
  return;
}
void enqueue(Queue* q, int i, int& _out) {
  Node*  n=NULL;
  n = Node::create(0, NULL);
  n->val = i;
  n->next = NULL;
  Node*  n1_s11=NULL;
  Node*  n2_s13=q->tail;
  if ((n1_s11) != (n2_s13)) {
    q->tail->next = n;
  }
  Node*  n1_s11_0=q->head;
  Node*  n2_s13_0=q->head;
  if ((n1_s11_0) == (n2_s13_0)) {
    q->tail = n;
  }
  Node*  n1_s11_1=q->tail->next;
  Node*  n2_s13_1=q->head;
  if ((n1_s11_1) == (n2_s13_1)) {
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
