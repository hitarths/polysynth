#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb445.h"
namespace ANONYMOUS{

void minVarTest__Wrapper() {
  minVarTest();
}
void minVarTest__WrapperNospec() {}
void minVarTest() {
  simpleCheck(3);
}
void simpleCheck(int x) {assert( x == 3); }

}
