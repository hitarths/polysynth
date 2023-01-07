#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest41.h"
namespace ANONYMOUS{

void tiledTranspose(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  bool*  check= new bool [4]; CopyArr<bool >(check,0, 4);
  (_out[0]) = (input[0]);
  (check[0]) = 1;
  (_out[1]) = (input[1]);
  (check[1]) = 1;
  (_out[2]) = (input[2]);
  (check[2]) = 1;
  (_out[3]) = (input[3]);
  (check[3]) = 1;
  delete[] check;
  return;
}
void transpose(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (_out[i]) = (input[i]);
  }
  return;
}

}
