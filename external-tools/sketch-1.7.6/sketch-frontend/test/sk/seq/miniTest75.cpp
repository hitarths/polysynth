#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest75.h"
namespace ANONYMOUS{

void debug(bool* in/* len = 7 */, bool* _out/* len = 7 */) {
  bool * _tt1= new bool [7]; 
  bool* _tt2= new bool [7]; 
  bool * _tt0= new bool [7]; CopyArr<bool >(_tt0,bitwise(not_equal_to<bool>(), _tt1, 7, in, 7, bitneg(_tt2, 7, in, 7), 7), 7, 7); 
  CopyArr<bool >(_out,shL(_tt0, 7, 5), 7, 7);
  delete[] _tt0;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void swap(bool* in/* len = 7 */, bool* _out/* len = 7 */) {
  bool * _tt4= new bool [7]; 
  bool* _tt5= new bool [7]; 
  bool * _tt3= new bool [7]; CopyArr<bool >(_tt3,bitwise(not_equal_to<bool>(), _tt4, 7, in, 7, bitneg(_tt5, 7, in, 7), 7), 7, 7); 
  CopyArr<bool >(_out,shL(_tt3, 7, 5), 7, 7);
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  return;
}

}
