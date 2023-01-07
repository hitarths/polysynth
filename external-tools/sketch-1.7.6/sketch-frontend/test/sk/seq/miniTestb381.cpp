#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb381.h"
namespace ANONYMOUS{

List* List::create(int  i_, List*  l_){
  void* temp= malloc( sizeof(List)  ); 
  List* rv = new (temp)List();
  rv->i =  i_;
  rv->l =  l_;
  return rv;
}
void foo__Wrapper(int n) {
  foo(n);
}
void foo__WrapperNospec(int n) {}
void foo(int n) {
  List*  l_s1=NULL;
  recBuild(n, l_s1);
  List*  l=NULL;
  l = l_s1;
  for (int  i=n;(i) >= (0);i = i - 1){
    assert ((l->i) == (i));;
    l = l->l;
  }
}
void recBuild(int n, List*& _out) {
  List*  l=NULL;
  l = NULL;
  if ((n) > (0)) {
    List*  l_s3=NULL;
    recBuild(n - 1, l_s3);
    l = l_s3;
  }
  _out = List::create(0, NULL);
  _out->l = l;
  _out->i = n;
  return;
}

}
