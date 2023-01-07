#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb248.h"
namespace ANONYMOUS{

void rec6ptFragSK(int N, float* in/* len = N */, float* out/* len = N */, int il, int ih, float* _out/* len = N */) {
  if (((ih - il)) > (5)) {
    float*  output_s1= new float [N]; CopyArr<float >(output_s1,0.0f, N);
    rec6ptFrag(N, in, out, il, ih, output_s1);
    CopyArr<float >(_out,output_s1, N, N);
    delete[] output_s1;
  } else {
    float*  output_s3= new float [N]; CopyArr<float >(output_s3,0.0f, N);
    rec6ptFrag(N, in, out, il, ih, output_s3);
    CopyArr<float >(_out,output_s3, N, N);
    delete[] output_s3;
  }
  return;
}
void rec6ptFrag(int N, float* in/* len = N */, float* out/* len = N */, int il, int ih, float* _out/* len = N */) {
  CopyArr<float >(_out,out, N, N);
  if ((ih) < (N)) {
    for (int  i=il;(i) < (ih);i = i + 1){
      (_out[i]) = (in[i]);
    }
  }
  return;
}

}
