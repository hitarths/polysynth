#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb425.h"
namespace ANONYMOUS{

template<typename T_0>
Image* Image::create(int  r_, int  c_, T_0* im_, int im_len){
  int tlen_im = (3 * c_) * r_; 
  void* temp= malloc( sizeof(Image)   + sizeof(int )*tlen_im); 
  Image* rv = new (temp)Image();
  rv->r =  r_;
  rv->c =  c_;
  CopyArr(rv->im, im_, tlen_im, im_len ); 
  return rv;
}
void main__Wrapper(int ir, int ic) {
  int  imid__ANONYMOUS_s16=0;
  glblInit_imid__ANONYMOUS_s19(imid__ANONYMOUS_s16);
  _main(ir, ic, imid__ANONYMOUS_s16);
}
void main__WrapperNospec(int ir, int ic) {}
void glblInit_imid__ANONYMOUS_s19(int& imid__ANONYMOUS_s18) {
  imid__ANONYMOUS_s18 = 0;
}
void _main(int ir, int ic, int& imid__ANONYMOUS_s17) {
  Image*  im_s8=NULL;
  readImg(ir, ic, im_s8, imid__ANONYMOUS_s17);
  if (((im_s8->r) > (4)) && ((im_s8->c) > (4))) {
    assert ((4) < (im_s8->r));;
    assert ((4) < (im_s8->c));;
    (im_s8->im[(((3 * im_s8->c) * 4) + 12) + 2]) = 22;
  }
  int*  im_s63= new int [(3 * im_s8->c) * im_s8->r]; CopyArr<int >(im_s63,im_s8->im, (3 * im_s8->c) * im_s8->r, (3 * im_s8->c) * im_s8->r);
  edgeDetector(im_s8->r, im_s8->c, im_s63);
  CopyArr<int >(im_s8->im,im_s63, (3 * im_s8->c) * im_s8->r, (3 * im_s8->c) * im_s8->r);
}
void readImg(int ir, int ic, Image*& _out, int& imid__ANONYMOUS_s15) {
  _out = Image::create(ir, ic, (int*)NULL, 0);
  for (int  i=0;(i) < (ir);i = i + 1){
    for (int  j=0;(j) < (ic);j = j + 1){
      int  uo_s2=imid__ANONYMOUS_s15;
      imid__ANONYMOUS_s15 = imid__ANONYMOUS_s15 + 1;
      int  _out_s10=0;
      getIm(uo_s2, _out_s10);
      assert (((i) >= (0)) && ((i) < (_out->r)));;
      assert (((j) >= (0)) && ((j) < (_out->c)));;
      (_out->im[((3 * _out->c) * i) + (3 * j)]) = _out_s10;
      int  uo_s3=imid__ANONYMOUS_s15;
      imid__ANONYMOUS_s15 = imid__ANONYMOUS_s15 + 1;
      int  _out_s12=0;
      getIm(uo_s3, _out_s12);
      assert (((i) >= (0)) && ((i) < (_out->r)));;
      assert (((j) >= (0)) && ((j) < (_out->c)));;
      (_out->im[(((3 * _out->c) * i) + (3 * j)) + 1]) = _out_s12;
      int  uo_s4=imid__ANONYMOUS_s15;
      imid__ANONYMOUS_s15 = imid__ANONYMOUS_s15 + 1;
      int  _out_s14=0;
      getIm(uo_s4, _out_s14);
      assert (((i) >= (0)) && ((i) < (_out->r)));;
      assert (((j) >= (0)) && ((j) < (_out->c)));;
      (_out->im[(((3 * _out->c) * i) + (3 * j)) + 2]) = _out_s14;
    }
  }
  return;
}
void edgeDetector(int r, int c, int* im/* len = (3 * c) * r */) {
  int*  dbuf= new int [c * r]; CopyArr<int >(dbuf,0, c * r);
  applyFilter_writeBack1(r, c, 0, r, c, 1, r, c, im, dbuf);
  if (((r) > (4)) && ((c) > (4))) {
    assert ((4) < (r));;
    assert ((4) < (c));;
    assert (((im[(((3 * c) * 4) + 12)])) == (33));;
  }
}
void applyFilter_writeBack1(int r, int c, int K, int r2, int c1, int maxVal6, int __sa15, int __sa04, int* im0/* len = (3 * c1) * r2 */, int* dbuf3_0/* len = __sa04 * __sa15 */) {
  for (int  i=K;(i) < ((r - K));i = i + 1){
    for (int  j=K;(j) < ((c - K));j = j + 1){
      if (((i) == (4)) && ((j) == (4))) {
        assert ((4) < (r2));;
        assert ((4) < (c1));;
        assert (((im0[((((3 * c1) * 4) + 12) + 2)])) == (22));;
      }
      assert (((i) >= (0)) && ((i) < (r2)));;
      assert (((j) >= (0)) && ((j) < (c1)));;
      (im0[((3 * c1) * i) + (3 * j)]) = 0;
      assert (((i) >= (0)) && ((i) < (r2)));;
      assert (((j) >= (0)) && ((j) < (c1)));;
      assert (((i) >= (0)) && ((i) < (__sa15)));;
      assert (((j) >= (0)) && ((j) < (__sa04)));;
      (im0[(((3 * c1) * i) + (3 * j)) + 1]) = ((dbuf3_0[((__sa04 * i) + j)]) * 250) / maxVal6;
      assert (((i) >= (0)) && ((i) < (r2)));;
      assert (((j) >= (0)) && ((j) < (c1)));;
      (im0[(((3 * c1) * i) + (3 * j)) + 2]) = 0;
      if (((i) > (3)) && ((j) > (3))) {
        assert (((i) >= (0)) && ((i) < (r2)));;
        assert (((j) >= (0)) && ((j) < (c1)));;
        (im0[((3 * c1) * i) + (3 * j)]) = 33;
      }
    }
  }
}
void getIm(int i, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
