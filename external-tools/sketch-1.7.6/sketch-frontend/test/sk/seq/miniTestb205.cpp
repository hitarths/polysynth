#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb205.h"
namespace ANONYMOUS{

void sk(bool* in_0/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  in= new bool [5]; CopyArr<bool >(in,in_0, 5, 5);
  bool*  t= new bool [2]; CopyArr<bool >(t,(in_0+ 0), 2, 2);
  CopyArr<bool >((in+ 1),t, 2, 2);
  bool*  x= new bool [3]; CopyArr<bool >(x,0, 3);
  bool _tt0[2] = {1, 1};
  CopyArr<bool >((x+ 1),_tt0, 2, 2);
  int _tt1[3] = {1, 2, 3};
  int*  z= new int [3]; CopyArr<int >(z,_tt1, 3, 3);
  (z[1]) = 3;
  (z[0]) = 4;
  bool _tt2[2] = {0, 1};
  CopyArr<int >((z+ 0),_tt2, 2, 2);
  CopyArr<bool >(_out,in, 5, 5);
  delete[] in;
  delete[] t;
  delete[] x;
  delete[] z;
  return;
}
void spec(bool* in_0/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  in= new bool [5]; CopyArr<bool >(in,in_0, 5, 5);
  CopyArr<bool >((in+ 1),(in_0+ 0), 2, 2);
  CopyArr<bool >(_out,in, 5, 5);
  delete[] in;
  return;
}

}
