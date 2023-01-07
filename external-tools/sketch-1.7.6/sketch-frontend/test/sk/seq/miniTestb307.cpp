#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb307.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 16 */, bool* _out/* len = 16 */) {
  bool _tt0[16] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
  bool*  __sa0= new bool [16]; CopyArr<bool >(__sa0,_tt0, 16, 16);
  bool * _tt1= new bool [16]; 
  bool * _tt2= new bool [16]; 
  bool * _tt3= new bool [16]; CopyArr<bool >(_tt3,in, 16, 16); 
  bool * _tt4= new bool [16]; 
  bool * _tt5= new bool [16]; CopyArr<bool >(_tt5,in, 16, 16); 
  bool* _tt6= new bool [16]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt1, 16, bitwise(logical_and<bool>(), _tt2, 16, shL(_tt3, 16, 1), 16, __sa0, 16), 16, bitwise(logical_and<bool>(), _tt4, 16, shR(_tt5, 16, 1), 16, bitneg(_tt6, 16, __sa0, 16), 16), 16), 16, 16);
  bool _tt7[16] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
  bool*  __sa0_0= new bool [16]; CopyArr<bool >(__sa0_0,_tt7, 16, 16);
  bool * _tt8= new bool [16]; 
  bool * _tt9= new bool [16]; 
  bool * _tt10= new bool [16]; CopyArr<bool >(_tt10,_out, 16, 16); 
  bool * _tt11= new bool [16]; 
  bool * _tt12= new bool [16]; CopyArr<bool >(_tt12,_out, 16, 16); 
  bool* _tt13= new bool [16]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt8, 16, bitwise(logical_and<bool>(), _tt9, 16, shL(_tt10, 16, 2), 16, __sa0_0, 16), 16, bitwise(logical_and<bool>(), _tt11, 16, shR(_tt12, 16, 2), 16, bitneg(_tt13, 16, __sa0_0, 16), 16), 16), 16, 16);
  bool _tt14[16] = {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1};
  bool*  __sa0_1= new bool [16]; CopyArr<bool >(__sa0_1,_tt14, 16, 16);
  bool * _tt15= new bool [16]; 
  bool * _tt16= new bool [16]; 
  bool * _tt17= new bool [16]; CopyArr<bool >(_tt17,_out, 16, 16); 
  bool * _tt18= new bool [16]; 
  bool * _tt19= new bool [16]; CopyArr<bool >(_tt19,_out, 16, 16); 
  bool* _tt20= new bool [16]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt15, 16, bitwise(logical_and<bool>(), _tt16, 16, shL(_tt17, 16, 4), 16, __sa0_1, 16), 16, bitwise(logical_and<bool>(), _tt18, 16, shR(_tt19, 16, 4), 16, bitneg(_tt20, 16, __sa0_1, 16), 16), 16), 16, 16);
  bool _tt21[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
  bool*  __sa0_2= new bool [16]; CopyArr<bool >(__sa0_2,_tt21, 16, 16);
  bool * _tt22= new bool [16]; 
  bool * _tt23= new bool [16]; 
  bool * _tt24= new bool [16]; CopyArr<bool >(_tt24,_out, 16, 16); 
  bool * _tt25= new bool [16]; 
  bool * _tt26= new bool [16]; CopyArr<bool >(_tt26,_out, 16, 16); 
  bool* _tt27= new bool [16]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt22, 16, bitwise(logical_and<bool>(), _tt23, 16, shL(_tt24, 16, 8), 16, __sa0_2, 16), 16, bitwise(logical_and<bool>(), _tt25, 16, shR(_tt26, 16, 8), 16, bitneg(_tt27, 16, __sa0_2, 16), 16), 16), 16, 16);
  delete[] __sa0;
  delete[] _tt1;
  delete[] _tt2;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  delete[] _tt6;
  delete[] __sa0_0;
  delete[] _tt8;
  delete[] _tt9;
  delete[] _tt10;
  delete[] _tt11;
  delete[] _tt12;
  delete[] _tt13;
  delete[] __sa0_1;
  delete[] _tt15;
  delete[] _tt16;
  delete[] _tt17;
  delete[] _tt18;
  delete[] _tt19;
  delete[] _tt20;
  delete[] __sa0_2;
  delete[] _tt22;
  delete[] _tt23;
  delete[] _tt24;
  delete[] _tt25;
  delete[] _tt26;
  delete[] _tt27;
  return;
}
void reverse(bool* in/* len = 16 */, bool* _out/* len = 16 */) {
  CopyArr<bool >(_out,0, 16);
  for (int  i=0;(i) < (16);i = i + 1){
    (_out[i]) = (in[15 - i]);
  }
  return;
}

}
