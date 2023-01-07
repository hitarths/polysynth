#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb461.h"
namespace ANONYMOUS{

void sk(int i, int j, int k, int& _out) {
  int  t_s1=0;
  maxp(i, j, t_s1);
  int  q_s3=0;
  maxp(t_s1, k, q_s3);
  int  p_s5=0;
  minp(10 - q_s3, 3, p_s5);
  _out = p_s5;
  return;
}
void spec(int i, int j, int k, int& _out) {
  int  t_s7=0;
  max(i, j, t_s7);
  int  q_s9=0;
  max(t_s7, k, q_s9);
  int  p_s11=0;
  min(10 - q_s9, 3, p_s11);
  _out = p_s11;
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
