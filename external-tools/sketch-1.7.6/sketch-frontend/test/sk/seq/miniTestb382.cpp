#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb382.h"
namespace ANONYMOUS{

void sketch__Wrapper(int len1, int* l1/* len = len1 */) {
  sketch(len1, l1);
}
void sketch__WrapperNospec(int len1, int* l1/* len = len1 */) {}
void sketch(int len1, int* l1/* len = len1 */) {}

}
