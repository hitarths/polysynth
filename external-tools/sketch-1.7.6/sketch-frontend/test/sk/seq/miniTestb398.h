#ifndef MINITESTB398_H
#define MINITESTB398_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class FileHandle; 
}
#include <fstream>
#include <string>
using namespace std;
namespace ANONYMOUS{
class FileHandle; 
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
extern void foo__Wrapper();
extern void foo__WrapperNospec();
extern void glblInit_NDCNT__ANONYMOUS_s30(int& NDCNT__ANONYMOUS_s29);
extern void foo(int& NDCNT__ANONYMOUS_s28);
extern void getFile(FileHandle*& _out, int& NDCNT__ANONYMOUS_s25);
extern void moreValues(FileHandle* fh, bool& _out);
extern void readInt(FileHandle* fh, int& _out, int& NDCNT__ANONYMOUS_s26);
extern void getND(int& _out, int& NDCNT__ANONYMOUS_s24);
extern void printInt(int x);
extern void getND_low(int i, int& _out);
}

#endif
