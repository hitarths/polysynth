#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest215Choice.h"
namespace ANONYMOUS{

void main__Wrapper() {
  bool _tt0[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  choiceValues_x1__ANONYMOUS_s12= new int [100]; CopyArr<int >(choiceValues_x1__ANONYMOUS_s12,_tt0, 100, 100);
  glblInit_choiceValues_x1__ANONYMOUS_s16(choiceValues_x1__ANONYMOUS_s12);
  int  choiceCtr_x1__ANONYMOUS_s11=0;
  glblInit_choiceCtr_x1__ANONYMOUS_s14(choiceCtr_x1__ANONYMOUS_s11);
  _main(choiceCtr_x1__ANONYMOUS_s11, choiceValues_x1__ANONYMOUS_s12);
  delete[] choiceValues_x1__ANONYMOUS_s12;
}
void main__WrapperNospec() {}
void glblInit_choiceCtr_x1__ANONYMOUS_s14(int& choiceCtr_x1__ANONYMOUS_s13) {
  choiceCtr_x1__ANONYMOUS_s13 = 0;
}
void glblInit_choiceValues_x1__ANONYMOUS_s16(int* choiceValues_x1__ANONYMOUS_s15/* len = 100 */) {
  int _tt1[100] = {1, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  CopyArr<int >(choiceValues_x1__ANONYMOUS_s15,_tt1, 100, 100);
}
void _main(int& choiceCtr_x1__ANONYMOUS_s9, int* choiceValues_x1__ANONYMOUS_s10/* len = 100 */) {
  int  _out_s2=0;
  choice_x1(_out_s2, choiceCtr_x1__ANONYMOUS_s9, choiceValues_x1__ANONYMOUS_s10);
  assert ((_out_s2) == (1));;
  int  _out_s4=0;
  choice_x1(_out_s4, choiceCtr_x1__ANONYMOUS_s9, choiceValues_x1__ANONYMOUS_s10);
  assert ((_out_s4) == (0));;
  bool _tt2[6] = {0, 0, 0, 0, 0, 0};
  int*  choiceArr= new int [6]; CopyArr<int >(choiceArr,_tt2, 6, 6);
  for (int  a=0;(a) < (6);a = a + 1){
    int  _out_s6=0;
    choice_x1(_out_s6, choiceCtr_x1__ANONYMOUS_s9, choiceValues_x1__ANONYMOUS_s10);
    (choiceArr[a]) = _out_s6;
  }
  assert (((choiceArr[0])) == (1));;
  assert (((choiceArr[1])) == (3));;
  delete[] choiceArr;
}
void choice_x1(int& _out, int& choiceCtr_x1__ANONYMOUS_s7, int* choiceValues_x1__ANONYMOUS_s8/* len = 100 */) {
  int  oldctr=choiceCtr_x1__ANONYMOUS_s7;
  choiceCtr_x1__ANONYMOUS_s7 = choiceCtr_x1__ANONYMOUS_s7 + 1;
  _out = (choiceValues_x1__ANONYMOUS_s8[oldctr]);
  return;
}

}
