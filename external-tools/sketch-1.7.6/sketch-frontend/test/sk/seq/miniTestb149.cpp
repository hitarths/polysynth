#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb149.h"
namespace ANONYMOUS{

void sk(int& _out) {
  bool  _tt1[1] = {1};
  bool * _tt0= new bool [1]; CopyArr<bool >(_tt0,_tt1, 1, 1); 
  bool*  tmp= new bool [1]; CopyArr<bool >(tmp,shL(_tt0, 1, ((int)(0))), 1, 1);
  _out = (tmp[0]);
  delete[] _tt0;
  delete[] tmp;
  return;
}
void spec(int& _out) {
  _out = 1;
  return;
}

}
