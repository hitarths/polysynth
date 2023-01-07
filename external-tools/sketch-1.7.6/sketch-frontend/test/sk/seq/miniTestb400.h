#ifndef MINITESTB400_H
#define MINITESTB400_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class FileHandle; 
class Mat; 
}
#include <fstream>
#include <string>
using namespace std;
namespace ANONYMOUS{
class FileHandle; 
class Mat; 
class FileHandle{
  public:
  ifstream in;
  int last;
  bool goon;
  FileHandle(const string& s):in(s.c_str()){ in>>last; goon = !in.eof() && !in.fail(); }
  int readInt(){ int x = last; in>>last; goon = !in.eof() && !in.fail(); return x;}
  int  maxReads;
  FileHandle(){}
  static FileHandle* create(  int  maxReads_);
  ~FileHandle(){
  }
  void operator delete(void* p){ free(p); }
};
class Mat{
  public:
  int  r;
  int  c;
  int  M[];
  Mat(){}
template<typename T_0>
  static Mat* create(  int  r_,   int  c_,   T_0* M_, int M_len);
  ~Mat(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo__Wrapper();
extern void foo__WrapperNospec();
extern void glblInit_NDCNT__ANONYMOUS_s49(int& NDCNT__ANONYMOUS_s48);
extern void foo(int* _out/* len = 10 * 10 */, int& NDCNT__ANONYMOUS_s46);
extern void getFile(FileHandle*& _out, int& NDCNT__ANONYMOUS_s47);
extern void matFromFile(FileHandle* fh, Mat*& _out, int& NDCNT__ANONYMOUS_s43);
extern void min(int a, int b, int& _out);
extern void getND(int& _out, int& NDCNT__ANONYMOUS_s42);
extern void moreValues(FileHandle* fh, bool& _out);
extern void readInt(FileHandle* fh, int& _out, int& NDCNT__ANONYMOUS_s44);
extern void getND_low(int i, int& _out);
extern void printInt(int x);
}

#endif
