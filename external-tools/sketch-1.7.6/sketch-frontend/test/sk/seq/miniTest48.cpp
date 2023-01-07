#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest48.h"
namespace ANONYMOUS{

void MergeSort(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {0, 0, 1, 1};
  bool*  __sa0= new bool [4]; CopyArr<bool >(__sa0,_tt0, 4, 4);
  bool * _tt1= new bool [4]; 
  bool * _tt2= new bool [4]; 
  bool * _tt3= new bool [4]; CopyArr<bool >(_tt3,input, 4, 4); 
  bool * _tt4= new bool [4]; 
  bool * _tt5= new bool [4]; CopyArr<bool >(_tt5,input, 4, 4); 
  bool* _tt6= new bool [4]; 
  bool*  output= new bool [4]; CopyArr<bool >(output,bitwise(logical_or<bool>(), _tt1, 4, bitwise(logical_and<bool>(), _tt2, 4, shL(_tt3, 4, 2), 4, __sa0, 4), 4, bitwise(logical_and<bool>(), _tt4, 4, shR(_tt5, 4, 2), 4, bitneg(_tt6, 4, __sa0, 4), 4), 4), 4, 4);
  assert ((((((output[0])) == ((input[2]))) && (((output[1])) == ((input[3])))) && (((output[2])) == ((input[0])))) && (((output[3])) == ((input[1]))));;
  bool _tt7[4] = {0, 0, 0, 0};
  bool*  _out_s2= new bool [4]; CopyArr<bool >(_out_s2,_tt7, 4, 4);
  sort(output, _out_s2);
  CopyArr<bool >(_out,_out_s2, 4, 4);
  delete[] __sa0;
  delete[] _tt1;
  delete[] _tt2;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  delete[] _tt6;
  delete[] output;
  delete[] _out_s2;
  return;
}
void sort(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  bool*  done= new bool [4]; CopyArr<bool >(done,0, 4);
  int  k=0;
  for (int  i=0;(i) < (4);i = i + 1){
    bool  cur=1;
    for (int  j=0;(j) < (4);j = j + 1){
      bool  x=(input[j]);
      bool  _pac_sc_s3_s5=!(x) || cur;
      bool  _pac_sc_s3=0;
      _pac_sc_s3 = _pac_sc_s3_s5;
      if (_pac_sc_s3_s5) {
        _pac_sc_s3 = !((done[j]));
      }
      if (_pac_sc_s3) {
        k = j;
        cur = (input[j]);
      }
    }
    (_out[i]) = cur;
    (done[k]) = 1;
  }
  delete[] done;
  return;
}

}
