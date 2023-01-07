#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest39.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {0, 0, 0, 1};
  bool*  mu= new bool [4]; CopyArr<bool >(mu,_tt0, 4, 4);
  (mu[0]) = 1;
  (mu[1]) = 1;
  (mu[2]) = 0;
  (mu[3]) = 0;
  bool * _tt1= new bool [4]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt1, 4, in, 4, mu, 4), 4, 4);
  delete[] mu;
  delete[] _tt1;
  return;
}
void miniTest(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt2[4] = {1, 1, 0, 0};
  bool*  mu= new bool [4]; CopyArr<bool >(mu,_tt2, 4, 4);
  bool * _tt3= new bool [4]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt3, 4, in, 4, mu, 4), 4, 4);
  delete[] mu;
  delete[] _tt3;
  return;
}

}
