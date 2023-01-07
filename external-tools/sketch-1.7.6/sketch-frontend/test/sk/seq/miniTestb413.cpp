#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb413.h"
namespace ANONYMOUS{

void Sk(int n, char* a/* len = n */, char* _out/* len = 3 */) {
  if ((n) > (3)) {
    CopyArr<char >(_out,(a+ 0), 3, 3);
    return;
  } else {
    char _tt0[3] = {'a', 'b', 'c'};
    CopyArr<char >(_out,_tt0, 3, 3);
    return;
  }
}
void foo(int n, char* a/* len = n */, char* _out/* len = 3 */) {
  if ((n) > (3)) {
    CopyArr<char >(_out,(a+ 0), 3, 3);
    return;
  } else {
    char _tt1[3] = {'a', 'b', 'c'};
    CopyArr<char >(_out,_tt1, 3, 3);
    return;
  }
}

}
