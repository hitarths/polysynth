#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb428.h"
namespace ANONYMOUS{

Bar* Bar::create(int  aa_){
  void* temp= malloc( sizeof(Bar)  ); 
  Bar* rv = new (temp)Bar();
  rv->aa =  aa_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  Foo::Moo*  m_s1=NULL;
  getMe(i, m_s1);
  assert ((m_s1->x) == (i));;
}
void getMe(int i, Foo::Moo*& _out) {
  _out = Foo::Moo::create(i);
  return;
}

}
namespace Foo{

Bar* Bar::create(int  bb_){
  void* temp= malloc( sizeof(Bar)  ); 
  Bar* rv = new (temp)Bar();
  rv->bb =  bb_;
  return rv;
}
Moo* Moo::create(int  x_){
  void* temp= malloc( sizeof(Moo)  ); 
  Moo* rv = new (temp)Moo();
  rv->x =  x_;
  return rv;
}

}
