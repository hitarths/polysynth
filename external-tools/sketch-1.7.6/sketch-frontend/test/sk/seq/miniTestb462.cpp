#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb462.h"
namespace ANONYMOUS{

void sk(int i, int j, int k, int u, int& _out) {
  int  t_s1=0;
  maxp(i, k, t_s1);
  int  q_s3=0;
  maxp(t_s1, j, q_s3);
  int  p_s5=0;
  minp(10 - q_s3, 3, p_s5);
  int  _out_s7=0;
  max(p_s5, u - 5, _out_s7);
  _out = _out_s7;
  return;
}
void spec(int i, int j, int k, int u, int& _out) {
  int  t_s9=0;
  max(i, j, t_s9);
  int  q_s11=0;
  max(t_s9, k, q_s11);
  int  p_s13=0;
  min(10 - q_s11, 3, p_s13);
  int  _out_s15=0;
  max(p_s13, u - 5, _out_s15);
  _out = _out_s15;
  return;
}
void maxp(int i, int j, int& _out) {
  _out = ((i) >= (j) ? i : j);
  return;
}
void minp(int i, int j, int& _out) {
  _out = ((i) <= (j) ? i : j);
  return;
}
void max(int i, int j, int& _out) {
  _out = ((i) > (j) ? i : j);
  return;
}
void min(int i, int j, int& _out) {
  _out = ((i) < (j) ? i : j);
  return;
}

}
