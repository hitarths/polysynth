#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb306.h"
namespace ANONYMOUS{

void main__Wrapper(int in1, int in2, int in3) {
  _main(in1, in2, in3);
}
void main__WrapperNospec(int in1, int in2, int in3) {}
void _main(int in1, int in2, int in3) {
  assert (((in3 + in1)) == ((in1 + in3)));;
}

}
namespace FUFU{


}
