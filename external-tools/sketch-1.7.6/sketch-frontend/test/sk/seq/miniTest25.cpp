#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest25.h"
namespace ANONYMOUS{

void miniTestSK(bool* x_0/* len = 3 */, bool* _out/* len = 3 */) {
  bool*  x= new bool [3]; CopyArr<bool >(x,x_0, 3, 3);
  (x[0]) = 1;
  bool * _tt0= new bool [3]; 
  bool * _tt1= new bool [3]; CopyArr<bool >(_tt1,x, 3, 3); 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt0, 3, x, 3, shR(_tt1, 3, 1), 3), 3, 3);
  delete[] x;
  delete[] _tt0;
  delete[] _tt1;
  return;
}
void miniTest(bool* in_0/* len = 3 */, bool* _out/* len = 3 */) {
  bool*  in= new bool [3]; CopyArr<bool >(in,in_0, 3, 3);
  (in[0]) = 1;
  bool * _tt2= new bool [3]; 
  bool * _tt3= new bool [3]; CopyArr<bool >(_tt3,in, 3, 3); 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt2, 3, in, 3, shR(_tt3, 3, 1), 3), 3, 3);
  delete[] in;
  delete[] _tt2;
  delete[] _tt3;
  return;
}

}
