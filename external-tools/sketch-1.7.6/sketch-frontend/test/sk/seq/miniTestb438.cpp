#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb438.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int  _out_s1=0;
  h(i + 1, _out_s1);
  int  _out_s3=0;
  g(_out_s1, _out_s3);
  int  _out_s5=0;
  f(_out_s3, _out_s5);
  int  _out_s7=0;
  h(_out_s5, _out_s7);
  int  _out_s9=0;
  g(_out_s7, _out_s9);
  int  _out_s11=0;
  f(_out_s9, _out_s11);
  int  _out_s13=0;
  h(_out_s11, _out_s13);
  int  _out_s15=0;
  g(_out_s13, _out_s15);
  int  _out_s17=0;
  f(_out_s15, _out_s17);
  int  _out_s19=0;
  h(_out_s17, _out_s19);
  int  _out_s21=0;
  g(_out_s19, _out_s21);
  int  _out_s23=0;
  f(_out_s21, _out_s23);
  int  _out_s25=0;
  h(_out_s23, _out_s25);
  int  _out_s27=0;
  g(_out_s25, _out_s27);
  int  _out_s29=0;
  f(_out_s27, _out_s29);
  assert ((_out_s29) == ((i + 1)));;
}
void h(int i, int& _out) {
  _out = i;
  return;
}
void g(int i, int& _out) {
  _out = i;
  return;
}
void f(int i, int& _out) {
  _out = i;
  return;
}

}
