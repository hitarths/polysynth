#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb338.h"
namespace ANONYMOUS{

void check__Wrapper(int* a/* len = 6 */) {
  int  nchanges__ANONYMOUS_s19=0;
  glblInit_nchanges__ANONYMOUS_s24(nchanges__ANONYMOUS_s19);
  bool  choiceArrayIndex0__ANONYMOUS_s18=0;
  glblInit_choiceArrayIndex0__ANONYMOUS_s22(choiceArrayIndex0__ANONYMOUS_s18);
  check(a, choiceArrayIndex0__ANONYMOUS_s18, nchanges__ANONYMOUS_s19);
}
void check__WrapperNospec(int* a/* len = 6 */) {}
void glblInit_choiceArrayIndex0__ANONYMOUS_s22(bool& choiceArrayIndex0__ANONYMOUS_s21) {
  choiceArrayIndex0__ANONYMOUS_s21 = 0;
}
void glblInit_nchanges__ANONYMOUS_s24(int& nchanges__ANONYMOUS_s23) {
  nchanges__ANONYMOUS_s23 = 0;
}
void check(int* a/* len = 6 */, bool& choiceArrayIndex0__ANONYMOUS_s16, int& nchanges__ANONYMOUS_s17) {
  bool  _out_s2=0;
  isPalindromeSketch(a, _out_s2, choiceArrayIndex0__ANONYMOUS_s16, nchanges__ANONYMOUS_s17);
  bool  _out_s4=0;
  isPalindrome(a, _out_s4);
  assert ((_out_s2) == (_out_s4));;
}
void isPalindromeSketch(int* a/* len = 6 */, bool& _out, bool& choiceArrayIndex0__ANONYMOUS_s14, int& nchanges__ANONYMOUS_s15) {
  bool  _tt0[1] = {0};
  if (arrCompare(a, 6, _tt0, 1) && ((6) == (1))) {
    _out = 0;
    return;
  }
  bool  r_s6=0;
  Puzzle(a, r_s6, choiceArrayIndex0__ANONYMOUS_s14);
  if (choiceArrayIndex0__ANONYMOUS_s14) {
    nchanges__ANONYMOUS_s15 = nchanges__ANONYMOUS_s15 + 1;
  }
  assert ((nchanges__ANONYMOUS_s15) <= (0));;
  _out = r_s6;
  return;
}
void isPalindrome(int* a/* len = 6 */, bool& _out) {
  bool  _tt1[1] = {0};
  if (arrCompare(a, 6, _tt1, 1) && ((6) == (1))) {
    _out = 0;
    return;
  }
  for (int  i=0;(i) < (3);i = i + 1){
    if (((a[i])) != ((a[((6 - i) - 1)]))) {
      _out = 0;
      return;
    }
  }
  _out = 1;
  return;
}
void Puzzle(int* s/* len = 6 */, bool& _out, bool& choiceArrayIndex0__ANONYMOUS_s20) {
  int  len_s8=0;
  Length(s, len_s8);
  int  i=0;
  while ((i) < (len_s8)) {
    int  _out_s10=0;
    fuzzIndex0(i, _out_s10, choiceArrayIndex0__ANONYMOUS_s20);
    if (((s[_out_s10])) != ((s[((len_s8 - i) - 1)]))) {
      _out = 0;
      return;
    }
    i = i + 1;
  }
  _out = 1;
  return;
}
void Length(int* a/* len = 6 */, int& _out) {
  _out = 6;
  return;
}
void fuzzIndex0(int i, int& _out, bool& choiceArrayIndex0__ANONYMOUS_s13) {
  _out = i;
  return;
}

}
