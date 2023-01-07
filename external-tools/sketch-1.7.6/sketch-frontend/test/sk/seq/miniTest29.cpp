#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest29.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt0[2] = {0, 0};
  bool*  one= new bool [2]; CopyArr<bool >(one,_tt0, 2, 2);
  (one[0]) = 1;
  bool * _tt1= new bool [3]; 
  bool * _tt2= new bool [3]; CopyArr<bool >(_tt2,in, 3, 3); 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt1, 3, shL(_tt2, 3, 1), 3, one, 2), 3, 3);
  delete[] one;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void miniTest(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt3[2] = {0, 0};
  bool*  one= new bool [2]; CopyArr<bool >(one,_tt3, 2, 2);
  (one[0]) = 1;
  bool * _tt4= new bool [3]; 
  bool * _tt5= new bool [3]; CopyArr<bool >(_tt5,in, 3, 3); 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt4, 3, shL(_tt5, 3, 1), 3, one, 2), 3, 3);
  delete[] one;
  delete[] _tt4;
  delete[] _tt5;
  return;
}

}
