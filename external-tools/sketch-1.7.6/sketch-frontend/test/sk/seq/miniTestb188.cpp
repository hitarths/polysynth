#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb188.h"
namespace ANONYMOUS{

P* P::create(P*  dummy_){
  void* temp= malloc( sizeof(P)  ); 
  P* rv = new (temp)P();
  rv->dummy =  dummy_;
  return rv;
}
void main_fun(bool& _out) {
  void * _tt0[3] = {NULL, NULL, NULL};
  P**  pa= new P* [3]; CopyArr<P* >(pa,_tt0, 3, 3);
  void * _tt1[1] = {NULL};
  P**  pa2= new P* [3]; CopyArr<P* >(pa2,_tt1, 3, 1);
  P**  pa3= new P* [3]; CopyArr<P* >(pa3,NULL, 3);
  assert ((((NULL) == ((pa[0]))) && ((NULL) == ((pa[1])))) && ((NULL) == ((pa[2]))));;
  assert ((((NULL) == ((pa2[0]))) && ((NULL) == ((pa2[1])))) && ((NULL) == ((pa2[2]))));;
  assert ((((NULL) == ((pa3[0]))) && ((NULL) == ((pa3[1])))) && ((NULL) == ((pa3[2]))));;
  _out = 1;
  delete[] pa;
  delete[] pa2;
  delete[] pa3;
  return;
}
void T(bool& _out) {
  _out = 1;
  return;
}

}
