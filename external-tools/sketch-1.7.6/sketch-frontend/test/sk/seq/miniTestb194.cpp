#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb194.h"
namespace ANONYMOUS{

node* node::create(int  val_, node*  next_){
  void* temp= malloc( sizeof(node)  ); 
  node* rv = new (temp)node();
  rv->val =  val_;
  rv->next =  next_;
  return rv;
}
void main_fun(int n_0) {
  int  n=n_0;
  if ((n_0) > (3)) {
    n = 3;
  }
  node*  x=node::create(0, NULL);
  x->val = 0;
  node*  t=x;
  for (int  i=0;(i) < (n);i = i + 1){
    t->next = node::create(0, NULL);
    t->next->val = i + 1;
    t = t->next;
  }
  if ((n) > (1)) {
    node*  t0=x->next;
    assert ((t0->val) == (1));;
  }
}
void VOID(int n) {}

}
