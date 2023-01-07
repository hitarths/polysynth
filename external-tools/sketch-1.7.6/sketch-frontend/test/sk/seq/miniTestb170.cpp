#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb170.h"
namespace ANONYMOUS{

Node* Node::create(int  val_, int  next_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->val =  val_;
  rv->next =  next_;
  return rv;
}
void test(int i, int& _out) {
  Node*  n=NULL;
  n = Node::create(0, 0);
  n->val = i;
  _out = i;
  return;
}
void rest(int i, int& _out) {
  _out = i;
  return;
}

}
