#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb193.h"
namespace ANONYMOUS{

Set* Set::create(Node*  head_, Node*  tail_){
  void* temp= malloc( sizeof(Set)  ); 
  Set* rv = new (temp)Set();
  rv->head =  head_;
  rv->tail =  tail_;
  return rv;
}
Node* Node::create(int  key_, Node*  next_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->key =  key_;
  rv->next =  next_;
  return rv;
}
void main_fun(int s) {
  Set*  S_s1=Set::create(NULL, NULL);
  Node*  next=NULL;
  Node*  _out_s3=Node::create(0, NULL);
  _out_s3->key = 10;
  _out_s3->next = next;
  S_s1->tail = _out_s3;
  Node*  next_0=S_s1->tail;
  Node*  _out_s5=Node::create(0, NULL);
  _out_s5->key = -1;
  _out_s5->next = next_0;
  S_s1->head = _out_s5;
  assert ((S_s1->head->key) == (-1));;
}
void VOID(int s) {}

}
