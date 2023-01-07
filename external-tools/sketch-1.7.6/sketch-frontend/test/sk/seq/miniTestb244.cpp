#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb244.h"
namespace ANONYMOUS{

void rec6ptSk(int N_, float* in_/* len = N_ * N_ */, float* _out/* len = N_ * N_ */) {
  for (int  __sa0=0;(__sa0) < (N_);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (N_)));;
    CopyArr<float >((_out+ N_ * __sa0),0.0f, N_);
  }
  CopyArr<float >(_out,in_, N_ * N_, N_ * N_);
  for (int  i__=0;(i__) < (N_);i__ = i__ + 1){
    for (int  j__=0;(j__) < (N_);j__ = j__ + 1){
      assert (((i__) >= (0)) && ((i__) < (N_)));;
      assert (((j__) >= (0)) && ((j__) < (N_)));;
      assert (((((i__ + 1) % N_)) >= (0)) && ((((i__ + 1) % N_)) < (N_)));;
      assert (((j__) >= (0)) && ((j__) < (N_)));;
      assert (((i__) >= (0)) && ((i__) < (N_)));;
      assert (((((j__ + 1) % N_)) >= (0)) && ((((j__ + 1) % N_)) < (N_)));;
      assert (((i__) >= (0)) && ((i__) < (N_)));;
      assert (((j__) >= (0)) && ((j__) < (N_)));;
      assert ((((((i__ - 1) + N_) % N_)) >= (0)) && (((((i__ - 1) + N_) % N_)) < (N_)));;
      assert (((j__) >= (0)) && ((j__) < (N_)));;
      assert (((i__) >= (0)) && ((i__) < (N_)));;
      assert ((((((j__ - 1) + N_) % N_)) >= (0)) && (((((j__ - 1) + N_) % N_)) < (N_)));;
      assert (((i__) >= (0)) && ((i__) < (N_)));;
      assert (((j__) >= (0)) && ((j__) < (N_)));;
      (_out[(N_ * i__) + j__]) = (((((in_[((N_ * ((i__ + 1) % N_)) + j__)]) + (in_[((N_ * i__) + ((j__ + 1) % N_))])) + (in_[((N_ * i__) + j__)])) + (in_[((N_ * (((i__ - 1) + N_) % N_)) + j__)])) + (in_[((N_ * i__) + (((j__ - 1) + N_) % N_))])) + (in_[((N_ * i__) + j__)]);
    }
  }
  return;
}
void rec6pt(int N_, float* in_/* len = N_ * N_ */, float* _out/* len = N_ * N_ */) {
  for (int  __sa1=0;(__sa1) < (N_);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (N_)));;
    CopyArr<float >((_out+ N_ * __sa1),0.0f, N_);
  }
  for (int  i_=0;(i_) < (N_);i_ = i_ + 1){
    for (int  j_=0;(j_) < (N_);j_ = j_ + 1){
      assert (((i_) >= (0)) && ((i_) < (N_)));;
      assert (((j_) >= (0)) && ((j_) < (N_)));;
      assert (((((i_ + 1) % N_)) >= (0)) && ((((i_ + 1) % N_)) < (N_)));;
      assert (((j_) >= (0)) && ((j_) < (N_)));;
      assert (((i_) >= (0)) && ((i_) < (N_)));;
      assert (((((j_ + 1) % N_)) >= (0)) && ((((j_ + 1) % N_)) < (N_)));;
      assert (((i_) >= (0)) && ((i_) < (N_)));;
      assert (((j_) >= (0)) && ((j_) < (N_)));;
      assert ((((((i_ - 1) + N_) % N_)) >= (0)) && (((((i_ - 1) + N_) % N_)) < (N_)));;
      assert (((j_) >= (0)) && ((j_) < (N_)));;
      assert (((i_) >= (0)) && ((i_) < (N_)));;
      assert ((((((j_ - 1) + N_) % N_)) >= (0)) && (((((j_ - 1) + N_) % N_)) < (N_)));;
      assert (((i_) >= (0)) && ((i_) < (N_)));;
      assert (((j_) >= (0)) && ((j_) < (N_)));;
      (_out[(N_ * i_) + j_]) = (((((in_[((N_ * ((i_ + 1) % N_)) + j_)]) + (in_[((N_ * i_) + ((j_ + 1) % N_))])) + (in_[((N_ * i_) + j_)])) + (in_[((N_ * (((i_ - 1) + N_) % N_)) + j_)])) + (in_[((N_ * i_) + (((j_ - 1) + N_) % N_))])) + (in_[((N_ * i_) + j_)]);
    }
  }
  return;
}

}
