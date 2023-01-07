#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb467.h"
namespace ANONYMOUS{

void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int*  t1_s1= new int [n]; CopyArr<int >(t1_s1,0, n);
  qq(n, t1_s1);
  int*  t1_s3= new int [n]; CopyArr<int >(t1_s3,0, n);
  cp(n, t1_s1, t1_s3);
  int*  t2_s5= new int [n]; CopyArr<int >(t2_s5,0, n);
  cp(n, t1_s3, t2_s5);
  int*  t2_s7= new int [n + 1]; CopyArr<int >(t2_s7,0, n + 1);
  add(n, t2_s5, t2_s7);
  assert (((t2_s7[n])) == (2));;
  delete[] t1_s1;
  delete[] t1_s3;
  delete[] t2_s5;
  delete[] t2_s7;
}
void qq(int n, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = 1;
  }
  return;
}
void cp(int n, int* in/* len = n */, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = (in[i]) + 1;
  }
  return;
}
void add(int n, int* in/* len = n */, int* _out/* len = n + 1 */) {
  CopyArr<int >(_out,0, n + 1);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = (in[i]);
  }
  (_out[n]) = 2;
  return;
}

}
