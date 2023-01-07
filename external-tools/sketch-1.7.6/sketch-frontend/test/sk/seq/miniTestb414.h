#ifndef MINITESTB414_H
#define MINITESTB414_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class FileHandle; 
}
namespace ANONYMOUS{
class FileHandle; 
class FileHandle{
  public:
  int  maxReads;
  FileHandle(){}
  static FileHandle* create(  int  maxReads_);
  ~FileHandle(){
  }
  void operator delete(void* p){ free(p); }
};
extern void check__Wrapper(char* word/* len = 7 */);
extern void check__WrapperNospec(char* word/* len = 7 */);
extern void glblInit_counter__ANONYMOUS_s53(int& counter__ANONYMOUS_s52);
extern void glblInit_letterValues__ANONYMOUS_s55(int* letterValues__ANONYMOUS_s54/* len = 27 */);
extern void glblInit_outpos__ANONYMOUS_s57(int& outpos__ANONYMOUS_s56);
extern void check(char* word/* len = 7 */, int& counter__ANONYMOUS_s45, int* letterValues__ANONYMOUS_s43/* len = 27 */);
extern void masterTest(char* word/* len = 7 */, int& _out, int& counter__ANONYMOUS_s42, int* letterValues__ANONYMOUS_s48/* len = 27 */);
extern void resetND(int& counter__ANONYMOUS_s35);
extern void studentTest2(char* word/* len = 7 */, int& _out, int& counter__ANONYMOUS_s46, int* letterValues__ANONYMOUS_s51/* len = 27 */);
extern void getFile(FileHandle*& _out, int& counter__ANONYMOUS_s50);
extern void moreValues(FileHandle* fh, bool& _out);
extern void get_word(FileHandle* fh, int* _out/* len = 7 */, int& counter__ANONYMOUS_s49);
extern void get_word_score(char* word/* len = 7 */, int& _out, int* letterValues__ANONYMOUS_s36/* len = 27 */);
extern void get_word_score2(char* word/* len = 7 */, int& _out, int* letterValues__ANONYMOUS_s37/* len = 27 */);
extern void generate_number(char& _out, int& counter__ANONYMOUS_s40);
extern void is_valid_word(char* word/* len = 7 */, bool& _out);
extern void getND(int x, char& _out);
}

#endif
