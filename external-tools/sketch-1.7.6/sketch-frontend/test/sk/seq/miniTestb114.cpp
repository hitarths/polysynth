#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb114.h"
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
void rest(int in, int& _out) {
  Queue*  q_s1=NULL;
  newQueue(q_s1);
  Node*  _out_s3=NULL;
  newNode(5, _out_s3);
  q_s1->head = _out_s3;
  _out = q_s1->head->val + in;
  return;
}
void test(int in, int& _out) {
  Queue*  q_s5=NULL;
  newQueue(q_s5);
  Node*  _out_s7=NULL;
  newNode(5, _out_s7);
  q_s5->head = _out_s7;
  _out = q_s5->head->val + in;
  return;
}
void newQueue(Queue*& _out) {
  _out = Queue::create(NULL, NULL);
  _out->head = NULL;
  _out->tail = NULL;
  return;
}
void newNode(int i, Node*& _out) {
  _out = Node::create(0, NULL);
  _out->val = i;
  _out->next = NULL;
  return;
}

}
