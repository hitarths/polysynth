#ifndef MINITESTB450_H
#define MINITESTB450_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class MultiType; 
class MTDict; 
class KeyValuePair; 
class MTList; 
}
namespace ANONYMOUS{
class MultiType; 
class MTDict; 
class KeyValuePair; 
class MTList; 
class MultiType{
  public:
  int  val;
  int  flag;
  MTList*  lst;
  MTDict*  dict;
  MultiType(){}
  static MultiType* create(  int  val_,   int  flag_,   MTList*  lst_,   MTDict*  dict_);
  ~MultiType(){
  }
  void operator delete(void* p){ free(p); }
};
class MTDict{
  public:
  int  len;
  KeyValuePair*  kvpairs[];
  MTDict(){}
template<typename T_0>
  static MTDict* create(  T_0* kvpairs_, int kvpairs_len,   int  len_);
  ~MTDict(){
  }
  void operator delete(void* p){ free(p); }
};
class KeyValuePair{
  public:
  MultiType*  Key;
  MultiType*  Value;
  KeyValuePair(){}
  static KeyValuePair* create(  MultiType*  Key_,   MultiType*  Value_);
  ~KeyValuePair(){
  }
  void operator delete(void* p){ free(p); }
};
class MTList{
  public:
  int  len;
  MultiType*  listValues[];
  MTList(){}
template<typename T_0>
  static MTList* create(  int  len_,   T_0* listValues_, int listValues_len);
  ~MTList(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int N, int* poly_list_int/* len = N */);
extern void main__WrapperNospec(int N, int* poly_list_int/* len = N */);
extern void glblInit_choiceAssign0__ANONYMOUS_s824(bool& choiceAssign0__ANONYMOUS_s823);
extern void glblInit_choiceAssign1__ANONYMOUS_s826(bool& choiceAssign1__ANONYMOUS_s825);
extern void glblInit_choiceAssign2__ANONYMOUS_s828(bool& choiceAssign2__ANONYMOUS_s827);
extern void glblInit_choiceAssign3__ANONYMOUS_s830(bool& choiceAssign3__ANONYMOUS_s829);
extern void glblInit_choiceAssign4__ANONYMOUS_s832(bool& choiceAssign4__ANONYMOUS_s831);
extern void glblInit_choiceAssign5__ANONYMOUS_s834(bool& choiceAssign5__ANONYMOUS_s833);
extern void glblInit_choiceBaseCase0__ANONYMOUS_s836(bool& choiceBaseCase0__ANONYMOUS_s835);
extern void glblInit_choiceCompOperator0__ANONYMOUS_s838(bool& choiceCompOperator0__ANONYMOUS_s837);
extern void glblInit_choiceCompOperator1__ANONYMOUS_s840(bool& choiceCompOperator1__ANONYMOUS_s839);
extern void glblInit_choiceInit0__ANONYMOUS_s842(bool& choiceInit0__ANONYMOUS_s841);
extern void glblInit_choiceInit10__ANONYMOUS_s844(bool& choiceInit10__ANONYMOUS_s843);
extern void glblInit_choiceInit11__ANONYMOUS_s846(bool& choiceInit11__ANONYMOUS_s845);
extern void glblInit_choiceInit12__ANONYMOUS_s848(bool& choiceInit12__ANONYMOUS_s847);
extern void glblInit_choiceInit13__ANONYMOUS_s850(bool& choiceInit13__ANONYMOUS_s849);
extern void glblInit_choiceInit14__ANONYMOUS_s852(bool& choiceInit14__ANONYMOUS_s851);
extern void glblInit_choiceInit1__ANONYMOUS_s854(bool& choiceInit1__ANONYMOUS_s853);
extern void glblInit_choiceInit2__ANONYMOUS_s856(bool& choiceInit2__ANONYMOUS_s855);
extern void glblInit_choiceInit3__ANONYMOUS_s858(bool& choiceInit3__ANONYMOUS_s857);
extern void glblInit_choiceInit4__ANONYMOUS_s860(bool& choiceInit4__ANONYMOUS_s859);
extern void glblInit_choiceInit5__ANONYMOUS_s862(bool& choiceInit5__ANONYMOUS_s861);
extern void glblInit_choiceInit6__ANONYMOUS_s864(bool& choiceInit6__ANONYMOUS_s863);
extern void glblInit_choiceInit7__ANONYMOUS_s866(bool& choiceInit7__ANONYMOUS_s865);
extern void glblInit_choiceInit8__ANONYMOUS_s868(bool& choiceInit8__ANONYMOUS_s867);
extern void glblInit_choiceInit9__ANONYMOUS_s870(bool& choiceInit9__ANONYMOUS_s869);
extern void glblInit_choiceLoopIter0__ANONYMOUS_s872(bool& choiceLoopIter0__ANONYMOUS_s871);
extern void glblInit_choiceLoopIter1__ANONYMOUS_s874(bool& choiceLoopIter1__ANONYMOUS_s873);
extern void glblInit_choiceOperator0__ANONYMOUS_s876(bool& choiceOperator0__ANONYMOUS_s875);
extern void glblInit_choiceOperator1__ANONYMOUS_s878(bool& choiceOperator1__ANONYMOUS_s877);
extern void glblInit_choiceOperator2__ANONYMOUS_s880(bool& choiceOperator2__ANONYMOUS_s879);
extern void glblInit_choiceOperator3__ANONYMOUS_s882(bool& choiceOperator3__ANONYMOUS_s881);
extern void glblInit_choiceOperator4__ANONYMOUS_s884(bool& choiceOperator4__ANONYMOUS_s883);
extern void glblInit_choiceOperator5__ANONYMOUS_s886(bool& choiceOperator5__ANONYMOUS_s885);
extern void glblInit_choiceOperator6__ANONYMOUS_s888(bool& choiceOperator6__ANONYMOUS_s887);
extern void glblInit_falseMT__ANONYMOUS_s890(MultiType*& falseMT__ANONYMOUS_s889);
extern void glblInit_intTypeMT__ANONYMOUS_s892(MultiType*& intTypeMT__ANONYMOUS_s891);
extern void glblInit_listTypeMT__ANONYMOUS_s894(MultiType*& listTypeMT__ANONYMOUS_s893);
extern void glblInit_nchanges__ANONYMOUS_s896(int& nchanges__ANONYMOUS_s895);
extern void glblInit_noneMT__ANONYMOUS_s898(MultiType*& noneMT__ANONYMOUS_s897);
extern void glblInit_trueMT__ANONYMOUS_s900(MultiType*& trueMT__ANONYMOUS_s899);
extern void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s719, bool& choiceAssign1__ANONYMOUS_s720, bool& choiceAssign2__ANONYMOUS_s721, bool& choiceAssign3__ANONYMOUS_s722, bool& choiceAssign4__ANONYMOUS_s723, bool& choiceAssign5__ANONYMOUS_s724, bool& choiceBaseCase0__ANONYMOUS_s725, bool& choiceCompOperator0__ANONYMOUS_s726, bool& choiceCompOperator1__ANONYMOUS_s727, bool& choiceInit0__ANONYMOUS_s728, bool& choiceInit10__ANONYMOUS_s729, bool& choiceInit11__ANONYMOUS_s730, bool& choiceInit12__ANONYMOUS_s731, bool& choiceInit13__ANONYMOUS_s732, bool& choiceInit14__ANONYMOUS_s733, bool& choiceInit1__ANONYMOUS_s734, bool& choiceInit2__ANONYMOUS_s735, bool& choiceInit3__ANONYMOUS_s736, bool& choiceInit4__ANONYMOUS_s737, bool& choiceInit5__ANONYMOUS_s738, bool& choiceInit6__ANONYMOUS_s739, bool& choiceInit7__ANONYMOUS_s740, bool& choiceInit8__ANONYMOUS_s741, bool& choiceInit9__ANONYMOUS_s742, bool& choiceLoopIter0__ANONYMOUS_s743, bool& choiceLoopIter1__ANONYMOUS_s744, bool& choiceOperator0__ANONYMOUS_s745, bool& choiceOperator1__ANONYMOUS_s746, bool& choiceOperator2__ANONYMOUS_s747, bool& choiceOperator3__ANONYMOUS_s748, bool& choiceOperator4__ANONYMOUS_s749, bool& choiceOperator5__ANONYMOUS_s750, bool& choiceOperator6__ANONYMOUS_s751, MultiType*& listTypeMT__ANONYMOUS_s757, int& nchanges__ANONYMOUS_s752);
extern void compute_deriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s789, bool& choiceAssign1__ANONYMOUS_s790, bool& choiceAssign2__ANONYMOUS_s791, bool& choiceAssign3__ANONYMOUS_s792, bool& choiceAssign4__ANONYMOUS_s793, bool& choiceAssign5__ANONYMOUS_s794, bool& choiceBaseCase0__ANONYMOUS_s795, bool& choiceCompOperator0__ANONYMOUS_s796, bool& choiceCompOperator1__ANONYMOUS_s797, bool& choiceInit0__ANONYMOUS_s798, bool& choiceInit10__ANONYMOUS_s799, bool& choiceInit11__ANONYMOUS_s800, bool& choiceInit12__ANONYMOUS_s801, bool& choiceInit13__ANONYMOUS_s802, bool& choiceInit14__ANONYMOUS_s803, bool& choiceInit1__ANONYMOUS_s804, bool& choiceInit2__ANONYMOUS_s805, bool& choiceInit3__ANONYMOUS_s806, bool& choiceInit4__ANONYMOUS_s807, bool& choiceInit5__ANONYMOUS_s808, bool& choiceInit6__ANONYMOUS_s809, bool& choiceInit7__ANONYMOUS_s810, bool& choiceInit8__ANONYMOUS_s811, bool& choiceInit9__ANONYMOUS_s812, bool& choiceLoopIter0__ANONYMOUS_s813, bool& choiceLoopIter1__ANONYMOUS_s814, bool& choiceOperator0__ANONYMOUS_s815, bool& choiceOperator1__ANONYMOUS_s816, bool& choiceOperator2__ANONYMOUS_s817, bool& choiceOperator3__ANONYMOUS_s818, bool& choiceOperator4__ANONYMOUS_s819, bool& choiceOperator5__ANONYMOUS_s820, bool& choiceOperator6__ANONYMOUS_s821, MultiType*& listTypeMT__ANONYMOUS_s715, int& nchanges__ANONYMOUS_s822);
extern void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */);
extern void createMTFromArray(int N, int* a/* len = N */, MultiType*& _out);
extern void compute_deriv(MultiType* poly, MultiType*& _out, MultiType*& listTypeMT__ANONYMOUS_s606);
extern void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */);
extern void calculateChanges(bool& choiceAssign0__ANONYMOUS_s628, bool& choiceAssign1__ANONYMOUS_s629, bool& choiceAssign2__ANONYMOUS_s630, bool& choiceAssign3__ANONYMOUS_s631, bool& choiceAssign4__ANONYMOUS_s632, bool& choiceAssign5__ANONYMOUS_s633, bool& choiceBaseCase0__ANONYMOUS_s634, bool& choiceCompOperator0__ANONYMOUS_s635, bool& choiceCompOperator1__ANONYMOUS_s636, bool& choiceInit0__ANONYMOUS_s637, bool& choiceInit10__ANONYMOUS_s638, bool& choiceInit11__ANONYMOUS_s639, bool& choiceInit12__ANONYMOUS_s640, bool& choiceInit13__ANONYMOUS_s641, bool& choiceInit14__ANONYMOUS_s642, bool& choiceInit1__ANONYMOUS_s643, bool& choiceInit2__ANONYMOUS_s644, bool& choiceInit3__ANONYMOUS_s645, bool& choiceInit4__ANONYMOUS_s646, bool& choiceInit5__ANONYMOUS_s647, bool& choiceInit6__ANONYMOUS_s648, bool& choiceInit7__ANONYMOUS_s649, bool& choiceInit8__ANONYMOUS_s650, bool& choiceInit9__ANONYMOUS_s651, bool& choiceLoopIter0__ANONYMOUS_s652, bool& choiceLoopIter1__ANONYMOUS_s653, bool& choiceOperator0__ANONYMOUS_s654, bool& choiceOperator1__ANONYMOUS_s655, bool& choiceOperator2__ANONYMOUS_s656, bool& choiceOperator3__ANONYMOUS_s657, bool& choiceOperator4__ANONYMOUS_s658, bool& choiceOperator5__ANONYMOUS_s659, bool& choiceOperator6__ANONYMOUS_s660, int& nchanges__ANONYMOUS_s661);
extern void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out);
extern void assignMT(MultiType*& lhs, MultiType* rhs);
extern void len(MultiType* x, MultiType*& _out);
extern void range2(MultiType* x, MultiType* y, MultiType*& _out);
extern void foreach_body12(MultiType* lst, MultiType* poly2, MultiType*& listTypeMT__ANONYMOUS_s786);
extern void printMT(int n, char* s/* len = n */, MultiType* v);
extern void applyCompOp(MultiType* left, MultiType* right, int compop, bool& _out);
extern void foreach_body01(MultiType* lst, MultiType*& result0, MultiType* poly_list_int1);
extern void body12(MultiType* i, MultiType* poly, MultiType*& listTypeMT__ANONYMOUS_s615);
extern void applyEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int);
extern void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out);
extern void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out);
extern void appendList(MultiType*& left, MultiType* right);
extern void applyEQCompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyEQCompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyAddBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applySubBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyMulBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyDivBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyPowBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyModBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void min(int a, int b, int& _out);
extern void applyMulBinOpInt(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyMulBinOpList(MultiType* left, MultiType* right, MultiType*& _out);
extern void intMod(int x, int y, int& _out);
extern void intMul(int x, int y, int& _out);
extern void intPow(int x, int y, int& _out);
extern void intDiv(int x, int y, int& _out);
extern void intMul1(int x, int y, int& _out);
}

#endif
