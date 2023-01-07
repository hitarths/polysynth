#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb225.h"
namespace ANONYMOUS{

void SLLsketch(bool* edges/* len = 2 * 2 */, bool& _out) {
  bool _tt0[2] = {0, 0};
  bool*  viaR_s1= new bool [2]; CopyArr<bool >(viaR_s1,_tt0, 2, 2);
  sPlus(edges, 0, viaR_s1);
  bool*  viaR= new bool [2]; CopyArr<bool >(viaR,0, 2);
  CopyArr<bool >(viaR,viaR_s1, 2, 2);
  (viaR[0]) = 1;
  for (int  i=0;(i) < (2);i = i + 1){
    if (!((viaR[i]))) {
      _out = 0;
  delete[] viaR_s1;
  delete[] viaR;
      return;
    }
  }
  _out = 1;
  delete[] viaR_s1;
  delete[] viaR;
  return;
}
void SLLspec(bool* edges/* len = 2 * 2 */, bool& _out) {
  bool _tt1[2] = {0, 0};
  bool*  viaR_s5= new bool [2]; CopyArr<bool >(viaR_s5,_tt1, 2, 2);
  sPlus(edges, 0, viaR_s5);
  bool*  viaR= new bool [2]; CopyArr<bool >(viaR,0, 2);
  CopyArr<bool >(viaR,viaR_s5, 2, 2);
  (viaR[0]) = 1;
  for (int  i=0;(i) < (2);i = i + 1){
    if (!((viaR[i]))) {
      _out = 0;
  delete[] viaR_s5;
  delete[] viaR;
      return;
    }
  }
  _out = 1;
  delete[] viaR_s5;
  delete[] viaR;
  return;
}
void sPlus(bool* rels/* len = 2 * 2 */, int x, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,0, 2);
  bool _tt2[2] = {0, 0};
  bool*  temp_s3= new bool [2]; CopyArr<bool >(temp_s3,_tt2, 2, 2);
  s(rels, x, temp_s3);
  bool * _tt3= new bool [2]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt3, 2, _out, 2, temp_s3, 2), 2, 2);
  delete[] temp_s3;
  delete[] _tt3;
  return;
}
void s(bool* rels/* len = 2 * 2 */, int x, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,0, 2);
  for (int  i=0;(i) < (2);i = i + 1){
    assert (((x) >= (0)) && ((x) < (2)));;
    assert (((i) >= (0)) && ((i) < (2)));;
    (_out[i]) = (rels[(2 * x) + i]);
  }
  return;
}

}
