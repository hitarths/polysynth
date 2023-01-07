#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb414.h"
namespace ANONYMOUS{

FileHandle* FileHandle::create(int  maxReads_){
  void* temp= malloc( sizeof(FileHandle)  ); 
  FileHandle* rv = new (temp)FileHandle();
  rv->maxReads =  maxReads_;
  return rv;
}
void check__Wrapper(char* word/* len = 7 */) {
  bool _tt0[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  letterValues__ANONYMOUS_s41= new int [27]; CopyArr<int >(letterValues__ANONYMOUS_s41,_tt0, 27, 27);
  glblInit_letterValues__ANONYMOUS_s55(letterValues__ANONYMOUS_s41);
  int  counter__ANONYMOUS_s44=0;
  glblInit_counter__ANONYMOUS_s53(counter__ANONYMOUS_s44);
  check(word, counter__ANONYMOUS_s44, letterValues__ANONYMOUS_s41);
  delete[] letterValues__ANONYMOUS_s41;
}
void check__WrapperNospec(char* word/* len = 7 */) {}
void glblInit_counter__ANONYMOUS_s53(int& counter__ANONYMOUS_s52) {
  counter__ANONYMOUS_s52 = 0;
}
void glblInit_letterValues__ANONYMOUS_s55(int* letterValues__ANONYMOUS_s54/* len = 27 */) {
  int _tt1[27] = {0, 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  CopyArr<int >(letterValues__ANONYMOUS_s54,_tt1, 27, 27);
}
void glblInit_outpos__ANONYMOUS_s57(int& outpos__ANONYMOUS_s56) {
  outpos__ANONYMOUS_s56 = 0;
}
void check(char* word/* len = 7 */, int& counter__ANONYMOUS_s45, int* letterValues__ANONYMOUS_s43/* len = 27 */) {
  int  r2_s4=0;
  masterTest(word, r2_s4, counter__ANONYMOUS_s45, letterValues__ANONYMOUS_s43);
  resetND(counter__ANONYMOUS_s45);
  int  r1_s6=0;
  studentTest2(word, r1_s6, counter__ANONYMOUS_s45, letterValues__ANONYMOUS_s43);
  assert ((r1_s6) == (r2_s4));;
}
void masterTest(char* word/* len = 7 */, int& _out, int& counter__ANONYMOUS_s42, int* letterValues__ANONYMOUS_s48/* len = 27 */) {
  FileHandle*  fh_s22=NULL;
  getFile(fh_s22, counter__ANONYMOUS_s42);
  bool  __sa0_s24=0;
  moreValues(fh_s22, __sa0_s24);
  bool  __sa0=0;
  __sa0 = (__sa0_s24) == (1);
  char _tt2[7] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0'};
  char*  dictWord= new char [7]; CopyArr<char >(dictWord,_tt2, 7, 7);
  int  wordScore=0;
  while (__sa0) {
    bool _tt3[7] = {0, 0, 0, 0, 0, 0, 0};
    int*  dictWord_s26= new int [7]; CopyArr<int >(dictWord_s26,_tt3, 7, 7);
    get_word(fh_s22, dictWord_s26, counter__ANONYMOUS_s42);
    CopyArr<char >(dictWord,dictWord_s26, 7, 7);
    if (arrCompare(dictWord, 7, word, 7) && ((7) == (7))) {
      int  wordScore_s28=0;
      get_word_score(word, wordScore_s28, letterValues__ANONYMOUS_s48);
      wordScore = wordScore + wordScore_s28;
      _out = wordScore;
  delete[] dictWord;
    delete[] dictWord_s26;
      return;
    }
    bool  __sa0_s30=0;
    moreValues(fh_s22, __sa0_s30);
    __sa0 = (__sa0_s30) == (1);
  }
  _out = 0;
  delete[] dictWord;
  return;
}
void resetND(int& counter__ANONYMOUS_s35) {
  counter__ANONYMOUS_s35 = 0;
}
void studentTest2(char* word/* len = 7 */, int& _out, int& counter__ANONYMOUS_s46, int* letterValues__ANONYMOUS_s51/* len = 27 */) {
  FileHandle*  fh_s8=NULL;
  getFile(fh_s8, counter__ANONYMOUS_s46);
  bool  __sa1=(fh_s8->maxReads) > (0);
  char _tt4[7] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0'};
  char*  dictWord= new char [7]; CopyArr<char >(dictWord,_tt4, 7, 7);
  int  wordScore=0;
  while (__sa1) {
    bool _tt5[7] = {0, 0, 0, 0, 0, 0, 0};
    int*  dictWord_s10= new int [7]; CopyArr<int >(dictWord_s10,_tt5, 7, 7);
    get_word(fh_s8, dictWord_s10, counter__ANONYMOUS_s46);
    CopyArr<char >(dictWord,dictWord_s10, 7, 7);
    if (arrCompare(dictWord, 7, word, 7) && ((7) == (7))) {
      int  wordScore_s12=0;
      get_word_score2(word, wordScore_s12, letterValues__ANONYMOUS_s51);
      wordScore = wordScore + wordScore_s12;
      _out = wordScore;
  delete[] dictWord;
    delete[] dictWord_s10;
      return;
    }
    __sa1 = (fh_s8->maxReads) > (0);
  }
  _out = 0;
  delete[] dictWord;
  return;
}
void getFile(FileHandle*& _out, int& counter__ANONYMOUS_s50) {
  char  _out_s20='\0';
  generate_number(_out_s20, counter__ANONYMOUS_s50);
  _out = FileHandle::create(_out_s20);
  return;
}
void moreValues(FileHandle* fh, bool& _out) {
  assert ((fh->maxReads) >= (0));;
  _out = (fh->maxReads) != (0);
  return;
}
void get_word(FileHandle* fh, int* _out/* len = 7 */, int& counter__ANONYMOUS_s49) {
  CopyArr<int >(_out,0, 7);
  assert ((fh->maxReads) >= (0));;
  fh->maxReads = fh->maxReads - 1;
  fh->maxReads;
  for (int  i=0;(i) < (7);i = i + 1){
    char  _out_s16='\0';
    generate_number(_out_s16, counter__ANONYMOUS_s49);
    (_out[i]) = _out_s16;
  }
  return;
}
void get_word_score(char* word/* len = 7 */, int& _out, int* letterValues__ANONYMOUS_s36/* len = 27 */) {
  _out = 0;
  bool  _out_s32=0;
  is_valid_word(word, _out_s32);
  if ((_out_s32) == (1)) {
    for (int  i=0;(i) < (7);i = i + 1){
      _out = _out + (letterValues__ANONYMOUS_s36[(word[i])]);
    }
  }
  return;
}
void get_word_score2(char* word/* len = 7 */, int& _out, int* letterValues__ANONYMOUS_s37/* len = 27 */) {
  _out = 0;
  bool  _out_s14=0;
  is_valid_word(word, _out_s14);
  int  i=0;
  if ((_out_s14) == (1)) {
    while ((i) < (7)) {
      _out = _out + (letterValues__ANONYMOUS_s37[(word[i])]);
      i = i + 1;
    }
  }
  return;
}
void generate_number(char& _out, int& counter__ANONYMOUS_s40) {
  int  uo_s2=counter__ANONYMOUS_s40;
  counter__ANONYMOUS_s40 = counter__ANONYMOUS_s40 + 1;
  char  _out_s18='\0';
  getND(uo_s2, _out_s18);
  _out = _out_s18;
  return;
}
void is_valid_word(char* word/* len = 7 */, bool& _out) {
  for (int  i=0;(i) < (7);i = i + 1){
    if (((word[i])) > (26)) {
      _out = 0;
      return;
    } else {
      if (((word[i])) < (0)) {
        _out = 0;
        return;
      }
    }
  }
  _out = 1;
  return;
}
void getND(int x, char& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
