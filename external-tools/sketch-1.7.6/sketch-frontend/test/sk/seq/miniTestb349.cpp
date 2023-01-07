#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb349.h"
namespace ANONYMOUS{

template<typename T_0, typename T_1>
Vec* Vec::create(int  n_, T_0* data_, int data_len, T_1* mvecs_, int mvecs_len){
  int tlen_data = 20; 
  int tlen_mvecs = 20; 
  void* temp= malloc( sizeof(Vec)   + sizeof(int )*tlen_data + sizeof(Vec* )*tlen_mvecs); 
  Vec* rv = new (temp)Vec();
  rv->n =  n_;
  rv->data= (int* ) (((char*)&(rv->mvecs))   + sizeof(Vec* )*tlen_mvecs); 
  CopyArr(rv->data, data_, tlen_data, data_len ); 
  CopyArr(rv->mvecs, mvecs_, tlen_mvecs, mvecs_len ); 
  return rv;
}
void main__Wrapper(int n, int* d/* len = n */) {
  _main(n, d);
}
void main__WrapperNospec(int n, int* d/* len = n */) {}
void test2__Wrapper(int n) {
  test2(n);
}
void test2__WrapperNospec(int n) {}
void _main(int n, int* d/* len = n */) {
  Vec*  v=Vec::create(0, (int*)NULL, 0, (Vec**)NULL, 0);
  v->n = n;
  CopyArr<int >(v->data,d, 20, n);
  int*  x_s39= new int [n]; CopyArr<int >(x_s39,(v->data+ 0), n, n);
  doSten(n, x_s39);
  CopyArr<int >((v->data+ 0),x_s39, n, n);
  for (int  i=0;(i) < (20);i = i + 1){
    if ((i) < (n)) {
      assert (((v->data[i])) == (25));;
    } else {
      assert (((v->data[i])) == (0));;
    }
  }
  delete[] x_s39;
}
void test2(int n) {
  if ((n) < (1)) {
    return;
  }
  Vec**  nVecs= new Vec* [n]; CopyArr<Vec* >(nVecs,NULL, n);
  initialize(n, nVecs);
  for (int  i=0;(i) < (n);i = i + 1){
    CopyArr<Vec* >((nVecs[i])->mvecs,nVecs, 20, n);
  }
  for (int  i_0=0;(i_0) < (20);i_0 = i_0 + 1){
    if ((i_0) < (n)) {
      assert ((((nVecs[i_0])->mvecs[i_0])) != (NULL));;
      assert ((((nVecs[i_0])->mvecs[i_0])) == ((nVecs[i_0])));;
    } else {
      assert ((((nVecs[0])->mvecs[i_0])) == (NULL));;
    }
  }
  delete[] nVecs;
}
void doSten(int n, int* x/* len = n */) {
  for (int  i=0;(i) < (n);i = i + 1){
    (x[i - 0]) = 25;
  }
}
void initialize(int n, Vec** nVecs/* len = n */) {
  for (int  i=0;(i) < (n);i = i + 1){
    (nVecs[i]) = Vec::create(0, (int*)NULL, 0, (Vec**)NULL, 0);
  }
}

}
