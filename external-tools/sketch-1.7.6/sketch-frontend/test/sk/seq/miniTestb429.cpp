#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb429.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  TOO::Jar*  j_s1=NULL;
  TOO::newJar(i, j_s1);
  assert (((j_s1->x) == (i)) && ((j_s1->b->x) == (i)));;
}

}
namespace TOO{

Jar* Jar::create(int  x_, Bar*  b_){
  void* temp= malloc( sizeof(Jar)  ); 
  Jar* rv = new (temp)Jar();
  rv->x =  x_;
  rv->b =  b_;
  return rv;
}
Bar* Bar::create(int  x_){
  void* temp= malloc( sizeof(Bar)  ); 
  Bar* rv = new (temp)Bar();
  rv->x =  x_;
  return rv;
}
void newJar(int i, Jar*& _out) {
  Bar*  _out_s3=NULL;
  newBar(i, _out_s3);
  _out = Jar::create(i, _out_s3);
  return;
}
void newBar(int i, Bar*& _out) {
  _out = Bar::create(i);
  return;
}

}
