#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb116.h"
namespace ANONYMOUS{

Node* Node::create(int  val_, Node*  next_, bool  taken_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->val =  val_;
  rv->next =  next_;
  rv->taken =  taken_;
  return rv;
}
void testSK(int i, int& _out) {
  Node*  n=NULL;
  n = Node::create(0, NULL, 0);
  n->val = i;
  _out = n->val;
  return;
}
void test(int i, int& _out) {
  _out = i;
  return;
}

}
