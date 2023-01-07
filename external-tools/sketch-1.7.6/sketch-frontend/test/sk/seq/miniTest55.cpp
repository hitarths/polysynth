#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest55.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt0[3] = {0, 0, 0};
  bool*  tmp= new bool [3]; CopyArr<bool >(tmp,_tt0, 3, 3);
  bool _tt1[5] = {1, 0, 1, 1, 1};
  bool*  two= new bool [5]; CopyArr<bool >(two,_tt1, 5, 5);
  CopyArr<bool >((tmp+ 1),(two+ 0), 2, 2);
  bool * _tt2= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt2, 3, in, 3, tmp, 3), 3, 3);
  delete[] tmp;
  delete[] two;
  delete[] _tt2;
  return;
}
void miniTest(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt3[3] = {0, 1, 0};
  bool*  tmp= new bool [3]; CopyArr<bool >(tmp,_tt3, 3, 3);
  bool * _tt4= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt4, 3, in, 3, tmp, 3), 3, 3);
  delete[] tmp;
  delete[] _tt4;
  return;
}

}
