#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb156.h"
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
void test(bool x, bool& _out) {
  Queue*  q=Queue::create(NULL, NULL);
  q->head = Node::create(0, NULL);
  q->head->next = Node::create(0, NULL);
  q->head->next->next = Node::create(0, NULL);
  q->tail = q->head->next->next;
  Node*  n_s3=q->head;
  assert ((n_s3) != (NULL));;
  Node*  _out_s1=n_s3->next;
  _out = (q->head->next) == (_out_s1);
  return;
}
void one(bool x, bool& _out) {
  _out = 1;
  return;
}

}
