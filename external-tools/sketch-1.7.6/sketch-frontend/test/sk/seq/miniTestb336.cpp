#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb336.h"
namespace ANONYMOUS{

template<typename T_0>
sinfo* sinfo::create(T_0* buffer_, int buffer_len){
  int tlen_buffer = 4; 
  void* temp= malloc( sizeof(sinfo)   + sizeof(int )*tlen_buffer); 
  sinfo* rv = new (temp)sinfo();
  CopyArr(rv->buffer, buffer_, tlen_buffer, buffer_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  sinfo*  info=NULL;
  info = sinfo::create((int*)NULL, 0);
  (info->buffer[0]) = 0;
  assert (((info->buffer[0])) == (0));;
}

}
