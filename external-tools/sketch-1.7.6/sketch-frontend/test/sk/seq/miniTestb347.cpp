#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb347.h"
namespace ANONYMOUS{

void karatsuba(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */) {
  if (((N % 2)) != (0)) {
    int*  _out_s8= new int [2 * N]; CopyArr<int >(_out_s8,0, 2 * N);
    mult(N, x, y, _out_s8);
    CopyArr<int >(_out,_out_s8, 2 * N, 2 * N);
    delete[] _out_s8;
    return;
  }
  int  No2=N / 2;
  int*  x1= new int [No2]; CopyArr<int >(x1,0, No2);
  int*  x2= new int [No2]; CopyArr<int >(x2,0, No2);
  int*  y1= new int [No2]; CopyArr<int >(y1,0, No2);
  int*  y2= new int [No2]; CopyArr<int >(y2,0, No2);
  int*  a= new int [N]; CopyArr<int >(a,0, N);
  int*  b= new int [N]; CopyArr<int >(b,0, N);
  int*  c= new int [N]; CopyArr<int >(c,0, N);
  CopyArr<int >(x1,(x+ 0), No2, No2);
  CopyArr<int >(x2,(x+ No2), No2, No2);
  CopyArr<int >(y1,(y+ 0), No2, No2);
  CopyArr<int >(y2,(y+ No2), No2, No2);
  int*  a_s10= new int [2 * No2]; CopyArr<int >(a_s10,0, 2 * No2);
  karatsuba(No2, x1, y1, a_s10);
  CopyArr<int >(a,a_s10, N, 2 * No2);
  int*  b_s12= new int [2 * No2]; CopyArr<int >(b_s12,0, 2 * No2);
  karatsuba(No2, x2, y2, b_s12);
  CopyArr<int >(b,b_s12, N, 2 * No2);
  int*  c_s14= new int [No2]; CopyArr<int >(c_s14,0, No2);
  int*  out_s48= new int [No2]; CopyArr<int >(out_s48,0, No2);
  minus(No2, y1, out_s48);
  int*  out_s50= new int [No2]; CopyArr<int >(out_s50,0, No2);
  plus(No2, c_s14, out_s48, out_s50);
  CopyArr<int >(c_s14,out_s50, No2, No2);
  int*  out_s55= new int [No2]; CopyArr<int >(out_s55,0, No2);
  plus(No2, c_s14, y2, out_s55);
  CopyArr<int >(c_s14,out_s55, No2, No2);
  int*  c_s16= new int [No2]; CopyArr<int >(c_s16,0, No2);
  int*  out_s38= new int [No2]; CopyArr<int >(out_s38,0, No2);
  minus(No2, x1, out_s38);
  int*  out_s40= new int [No2]; CopyArr<int >(out_s40,0, No2);
  plus(No2, c_s16, out_s38, out_s40);
  CopyArr<int >(c_s16,out_s40, No2, No2);
  int*  out_s45= new int [No2]; CopyArr<int >(out_s45,0, No2);
  plus(No2, c_s16, x2, out_s45);
  CopyArr<int >(c_s16,out_s45, No2, No2);
  int*  c_s18= new int [2 * No2]; CopyArr<int >(c_s18,0, 2 * No2);
  karatsuba(No2, c_s14, c_s16, c_s18);
  CopyArr<int >(c,c_s18, N, 2 * No2);
  int*  out= new int [2 * N]; CopyArr<int >(out,a, 2 * N, N);
  int*  out_s20= new int [2 * N]; CopyArr<int >(out_s20,0, 2 * N);
  int * _tt0= new int [2 * N]; 
  CopyArr<int>(_tt0,b, 2 * N, N);
  shiftVect(2 * N, _tt0, N, out_s20);
  int*  out_s22= new int [2 * N]; CopyArr<int >(out_s22,0, 2 * N);
  plus(2 * N, out, out_s20, out_s22);
  int*  out_s27= new int [2 * N]; CopyArr<int >(out_s27,0, 2 * N);
  int * _tt1= new int [2 * N]; 
  CopyArr<int>(_tt1,b, 2 * N, N);
  shiftVect(2 * N, _tt1, No2, out_s27);
  int*  out_s29= new int [2 * N]; CopyArr<int >(out_s29,0, 2 * N);
  plus(2 * N, out_s22, out_s27, out_s29);
  int*  out_s25= new int [N]; CopyArr<int >(out_s25,0, N);
  minus(N, c, out_s25);
  int*  out_s27_0= new int [2 * N]; CopyArr<int >(out_s27_0,0, 2 * N);
  int * _tt2= new int [2 * N]; 
  CopyArr<int>(_tt2,out_s25, 2 * N, N);
  shiftVect(2 * N, _tt2, No2, out_s27_0);
  int*  out_s29_0= new int [2 * N]; CopyArr<int >(out_s29_0,0, 2 * N);
  plus(2 * N, out_s29, out_s27_0, out_s29_0);
  int*  out_s27_1= new int [2 * N]; CopyArr<int >(out_s27_1,0, 2 * N);
  int * _tt3= new int [2 * N]; 
  CopyArr<int>(_tt3,a, 2 * N, N);
  shiftVect(2 * N, _tt3, No2, out_s27_1);
  int*  out_s29_1= new int [2 * N]; CopyArr<int >(out_s29_1,0, 2 * N);
  plus(2 * N, out_s29_0, out_s27_1, out_s29_1);
  int*  out_s31= new int [2 * N]; CopyArr<int >(out_s31,0, 2 * N);
  normalize(2 * N, out_s29_1, out_s31);
  CopyArr<int >(_out,out_s31, 2 * N, 2 * N);
  delete[] x1;
  delete[] x2;
  delete[] y1;
  delete[] y2;
  delete[] a;
  delete[] b;
  delete[] c;
  delete[] a_s10;
  delete[] b_s12;
  delete[] c_s14;
  delete[] out_s48;
  delete[] out_s50;
  delete[] out_s55;
  delete[] c_s16;
  delete[] out_s38;
  delete[] out_s40;
  delete[] out_s45;
  delete[] c_s18;
  delete[] out;
  delete[] out_s20;
  delete[] _tt0;
  delete[] out_s22;
  delete[] out_s27;
  delete[] _tt1;
  delete[] out_s29;
  delete[] out_s25;
  delete[] out_s27_0;
  delete[] _tt2;
  delete[] out_s29_0;
  delete[] out_s27_1;
  delete[] _tt3;
  delete[] out_s29_1;
  delete[] out_s31;
  return;
}
void mult(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */) {
  CopyArr<int >(_out,0, 2 * N);
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < (N);j = j + 1){
      int  tmp=(y[i]) * (x[j]);
      tmp = (_out[(j + i)]) + tmp;
      (_out[j + i]) = tmp % 4;
      (_out[(j + i) + 1]) = (_out[((j + i) + 1)]) + (tmp / 4);
    }
  }
  return;
}
void minus(int N, int* t/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (_out[i]) = -((t[i]));
  }
  return;
}
void plus(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    int  tmp=((x[i]) + (y[i])) + (_out[i]);
    (_out[i]) = tmp % 4;
    if ((i) < ((N - 1))) {
      (_out[i + 1]) = tmp / 4;
    }
  }
  return;
}
void shiftVect(int N, int* in/* len = N */, int s, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    if ((i) >= (s)) {
      (_out[i]) = (in[i - s]);
    }
  }
  return;
}
void normalize(int N, int* in/* len = N */, int* _out/* len = N */) {
  int  end=N - 1;
  CopyArr<int >(_out,in, N, N);
  bool  found=0;
  int  s=0;
  for (int  i=0;(i) < (N);i = i + 1){
    if (!(found) && (((in[(end - i)])) != (0))) {
      int  s_s33=0;
      sgn((in[end - i]), s_s33);
      s = s_s33;
      found = 1;
    }
  }
  for (int  i_0=0;(i_0) < ((N - 1));i_0 = i_0 + 1){
    int  _out_s35=0;
    sgn((_out[i_0]), _out_s35);
    if ((_out_s35) != (s)) {
      int  t=0;
      t = (4 * s) + (_out[i_0]);
      (_out[i_0]) = t;
      (_out[i_0 + 1]) = (_out[(i_0 + 1)]) - s;
    }
  }
  return;
}
void sgn(int i, int& _out) {
  _out = ((i) >= (0) ? ((int) (1)) : -1);
  return;
}

}
