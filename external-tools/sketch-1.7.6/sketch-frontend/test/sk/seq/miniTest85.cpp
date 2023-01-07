#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest85.h"
namespace ANONYMOUS{

void testsk(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool*  tmp= new bool [3]; CopyArr<bool >(tmp,0, 3);
  int  j=0;
  for (int  i=0;(i) < (1);i = i + 1){
    j = j + 1;
  }
  (tmp[j]) = 1;
  j = j + 1;
  (tmp[j]) = 1;
  bool * _tt0= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt0, 3, in, 3, tmp, 3), 3, 3);
  delete[] tmp;
  delete[] _tt0;
  return;
}
void test(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt1[3] = {0, 1, 1};
  bool*  tmp= new bool [3]; CopyArr<bool >(tmp,_tt1, 3, 3);
  bool * _tt2= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt2, 3, in, 3, tmp, 3), 3, 3);
  delete[] tmp;
  delete[] _tt2;
  return;
}

}
