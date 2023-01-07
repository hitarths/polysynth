#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest23.h"
namespace ANONYMOUS{

void miniTestSK(bool* x/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt0[3] = {0, 1, 0};
  bool*  __sa0= new bool [3]; CopyArr<bool >(__sa0,_tt0, 3, 3);
  bool _tt1[3] = {1, 1, 0};
  bool*  __sa1= new bool [3]; CopyArr<bool >(__sa1,_tt1, 3, 3);
  bool * _tt2= new bool [3]; 
  bool * _tt3= new bool [3]; 
  bool * _tt4= new bool [3]; 
  bool * _tt5= new bool [3]; 
  bool * _tt6= new bool [3]; CopyArr<bool >(_tt6,x, 3, 3); 
  bool * _tt7= new bool [3]; 
  bool * _tt8= new bool [3]; CopyArr<bool >(_tt8,x, 3, 3); 
  bool* _tt9= new bool [3]; 
  bool * _tt10= new bool [3]; 
  bool* _tt11= new bool [3]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt2, 3, bitwise(logical_and<bool>(), _tt3, 3, bitwise(logical_or<bool>(), _tt4, 3, bitwise(logical_and<bool>(), _tt5, 3, shL(_tt6, 3, 1), 3, __sa0, 3), 3, bitwise(logical_and<bool>(), _tt7, 3, shR(_tt8, 3, 1), 3, bitneg(_tt9, 3, __sa0, 3), 3), 3), 3, __sa1, 3), 3, bitwise(logical_and<bool>(), _tt10, 3, x, 3, bitneg(_tt11, 3, __sa1, 3), 3), 3), 3, 3);
  delete[] __sa0;
  delete[] __sa1;
  delete[] _tt2;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  delete[] _tt6;
  delete[] _tt7;
  delete[] _tt8;
  delete[] _tt9;
  delete[] _tt10;
  delete[] _tt11;
  return;
}
void miniTest(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  int _tt12[3] = {2, 1, 3};
  int*  p= new int [3]; CopyArr<int >(p,_tt12, 3, 3);
  CopyArr<bool >(_out,0, 3);
  for (int  i=0;(i) < (3);i = i + 1){
    (_out[i]) = (in[(p[i]) - 1]);
  }
  delete[] p;
  return;
}

}
