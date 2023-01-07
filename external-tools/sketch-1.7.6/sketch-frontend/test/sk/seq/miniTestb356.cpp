#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb356.h"
namespace ANONYMOUS{

void sumsk(int N, int L, bool* x/* len = L */, int M, bool* y/* len = M */, bool* _out/* len = N */) {
  int  T=((L) < (M) ? M : L);
  bool*  xp= new bool [T]; CopyArr<bool >(xp,x, T, L);
  bool*  yp= new bool [T]; CopyArr<bool >(yp,y, T, M);
  bool* _tt0= new bool [T]; 
  CopyArr<bool >(_out,SumArr(_tt0, T, xp, T, yp, T), N, T);
  delete[] xp;
  delete[] yp;
  delete[] _tt0;
  return;
}
void sum(int N, int L, bool* x/* len = L */, int M, bool* y/* len = M */, bool* _out/* len = N */) {
  bool* _tt1= new bool [((L) < (M) ? M : L)]; 
  CopyArr<bool >(_out,SumArr(_tt1, ((L) < (M) ? M : L), x, L, y, M), N, ((L) < (M) ? M : L));
  delete[] _tt1;
  return;
}

}
