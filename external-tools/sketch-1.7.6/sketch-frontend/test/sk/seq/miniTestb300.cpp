#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb300.h"
namespace ANONYMOUS{

void testComp__Wrapper(int a, int b, int c) {
  testComp(a, b, c);
}
void testComp__WrapperNospec(int a, int b, int c) {}
void testComp(int a, int b, int c) {
  assert ((((a + b) + (4 * c))) == (((a + b) + (4 * c))));;
}

}
namespace generators{


}
