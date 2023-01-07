#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb220_harnesses.h"
namespace ANONYMOUS{

void g__Wrapper() {
  g();
}
void g__WrapperNospec() {}
void f__Wrapper() {
  f();
}
void f__WrapperNospec() {}
void g() {}
void f() {}

}
