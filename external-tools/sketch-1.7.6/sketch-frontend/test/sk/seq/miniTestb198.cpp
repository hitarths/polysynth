#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb198.h"
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
  n->n = node::create(NULL);
  n->n->n = NULL;
  node*  a=n->n;
  if ((a->n) == (NULL)) {
    return;
  }
  a = a->n;
  a = a->n;
  a = a->n;
  if ((a->n->n->n) != (NULL)) {
    return;
  }
}
void VOID(int n) {}

}
