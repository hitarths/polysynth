#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb197.h"
namespace ANONYMOUS{

node* node::create(node*  n_){
  void* temp= malloc( sizeof(node)  ); 
  node* rv = new (temp)node();
  rv->n =  n_;
  return rv;
}
void main_fun(int n0) {
  node*  n=NULL;
  n = node::create(NULL);
  node*  a=n;
  n->n = node::create(NULL);
  n->n->n = NULL;
  bool  __sa0=(n->n) != (NULL);
  while (__sa0) {
    assert ((n) != (NULL));;
    n = n->n;
    __sa0 = (n->n) != (NULL);
  }
  assert ((n) != (a));;
  n = a;
  bool  __sa1=(a->n) != (NULL);
  while (__sa1) {
    assert ((n) != (NULL));;
    n = n->n;
    __sa1 = (n->n) != (NULL);
  }
  assert ((n) != (a));;
  n = a;
  bool  __sa2=(a->n) != (NULL);
  int  i=0;
  while (__sa2) {
    assert ((n) != (NULL));;
    n = n->n;
    i = i + 1;
    __sa2 = (n->n) != (NULL);
  }
  assert ((n) != (a));;
  assert ((i) == (1));;
}
void VOID(int n) {}

}
