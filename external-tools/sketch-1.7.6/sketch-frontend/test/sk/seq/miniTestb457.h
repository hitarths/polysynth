#ifndef MINITESTB457_H
#define MINITESTB457_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class MultiType; 
class MTList; 
}
namespace ANONYMOUS{
class MultiType; 
class MTList; 
class MultiType{
  public:
  int  val;
  int  flag;
  MTList*  lst;
  MultiType(){}
  static MultiType* create(  int  val_,   int  flag_,   MTList*  lst_);
  ~MultiType(){
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
extern void glblInit_choiceAssign0__ANONYMOUS_s679(bool& choiceAssign0__ANONYMOUS_s678);
extern void glblInit_choiceAssign1__ANONYMOUS_s681(bool& choiceAssign1__ANONYMOUS_s680);
extern void glblInit_choiceAssign2__ANONYMOUS_s683(bool& choiceAssign2__ANONYMOUS_s682);
extern void glblInit_choiceAssign3__ANONYMOUS_s685(bool& choiceAssign3__ANONYMOUS_s684);
extern void glblInit_choiceAssign4__ANONYMOUS_s687(bool& choiceAssign4__ANONYMOUS_s686);
extern void glblInit_choiceAssign5__ANONYMOUS_s689(bool& choiceAssign5__ANONYMOUS_s688);
extern void glblInit_choiceBaseCase0__ANONYMOUS_s691(bool& choiceBaseCase0__ANONYMOUS_s690);
extern void glblInit_choiceCompOperator0__ANONYMOUS_s693(bool& choiceCompOperator0__ANONYMOUS_s692);
extern void glblInit_choiceInit0__ANONYMOUS_s695(bool& choiceInit0__ANONYMOUS_s694);
extern void glblInit_choiceInit10__ANONYMOUS_s697(bool& choiceInit10__ANONYMOUS_s696);
extern void glblInit_choiceInit11__ANONYMOUS_s699(bool& choiceInit11__ANONYMOUS_s698);
extern void glblInit_choiceInit12__ANONYMOUS_s701(bool& choiceInit12__ANONYMOUS_s700);
extern void glblInit_choiceInit13__ANONYMOUS_s703(bool& choiceInit13__ANONYMOUS_s702);
extern void glblInit_choiceInit14__ANONYMOUS_s705(bool& choiceInit14__ANONYMOUS_s704);
extern void glblInit_choiceInit1__ANONYMOUS_s707(bool& choiceInit1__ANONYMOUS_s706);
extern void glblInit_choiceInit2__ANONYMOUS_s709(bool& choiceInit2__ANONYMOUS_s708);
extern void glblInit_choiceInit3__ANONYMOUS_s711(bool& choiceInit3__ANONYMOUS_s710);
extern void glblInit_choiceInit4__ANONYMOUS_s713(bool& choiceInit4__ANONYMOUS_s712);
extern void glblInit_choiceInit5__ANONYMOUS_s715(bool& choiceInit5__ANONYMOUS_s714);
extern void glblInit_choiceInit6__ANONYMOUS_s717(bool& choiceInit6__ANONYMOUS_s716);
extern void glblInit_choiceInit7__ANONYMOUS_s719(bool& choiceInit7__ANONYMOUS_s718);
extern void glblInit_choiceInit8__ANONYMOUS_s721(bool& choiceInit8__ANONYMOUS_s720);
extern void glblInit_choiceInit9__ANONYMOUS_s723(bool& choiceInit9__ANONYMOUS_s722);
extern void glblInit_choiceOperator0__ANONYMOUS_s725(bool& choiceOperator0__ANONYMOUS_s724);
extern void glblInit_choiceOperator1__ANONYMOUS_s727(bool& choiceOperator1__ANONYMOUS_s726);
extern void glblInit_choiceOperator2__ANONYMOUS_s729(bool& choiceOperator2__ANONYMOUS_s728);
extern void glblInit_choiceOperator3__ANONYMOUS_s731(bool& choiceOperator3__ANONYMOUS_s730);
extern void glblInit_choiceOperator4__ANONYMOUS_s733(bool& choiceOperator4__ANONYMOUS_s732);
extern void glblInit_choiceOperator5__ANONYMOUS_s735(bool& choiceOperator5__ANONYMOUS_s734);
extern void glblInit_choiceReturnList0__ANONYMOUS_s737(bool& choiceReturnList0__ANONYMOUS_s736);
extern void glblInit_choiceReturnList1__ANONYMOUS_s739(bool& choiceReturnList1__ANONYMOUS_s738);
extern void glblInit_choiceReturnList2__ANONYMOUS_s741(bool& choiceReturnList2__ANONYMOUS_s740);
extern void glblInit_falseMT__ANONYMOUS_s743(MultiType*& falseMT__ANONYMOUS_s742);
extern void glblInit_intTypeMT__ANONYMOUS_s745(MultiType*& intTypeMT__ANONYMOUS_s744);
extern void glblInit_listTypeMT__ANONYMOUS_s747(MultiType*& listTypeMT__ANONYMOUS_s746);
extern void glblInit_nchanges__ANONYMOUS_s749(int& nchanges__ANONYMOUS_s748);
extern void glblInit_noneMT__ANONYMOUS_s751(MultiType*& noneMT__ANONYMOUS_s750);
extern void glblInit_trueMT__ANONYMOUS_s753(MultiType*& trueMT__ANONYMOUS_s752);
extern void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s572, bool& choiceAssign1__ANONYMOUS_s573, bool& choiceAssign2__ANONYMOUS_s574, bool& choiceAssign3__ANONYMOUS_s575, bool& choiceAssign4__ANONYMOUS_s576, bool& choiceAssign5__ANONYMOUS_s577, bool& choiceBaseCase0__ANONYMOUS_s578, bool& choiceCompOperator0__ANONYMOUS_s579, bool& choiceInit0__ANONYMOUS_s580, bool& choiceInit10__ANONYMOUS_s581, bool& choiceInit11__ANONYMOUS_s582, bool& choiceInit12__ANONYMOUS_s583, bool& choiceInit13__ANONYMOUS_s584, bool& choiceInit14__ANONYMOUS_s585, bool& choiceInit1__ANONYMOUS_s586, bool& choiceInit2__ANONYMOUS_s587, bool& choiceInit3__ANONYMOUS_s588, bool& choiceInit4__ANONYMOUS_s589, bool& choiceInit5__ANONYMOUS_s569, bool& choiceInit6__ANONYMOUS_s590, bool& choiceInit7__ANONYMOUS_s591, bool& choiceInit8__ANONYMOUS_s592, bool& choiceInit9__ANONYMOUS_s593, bool& choiceOperator0__ANONYMOUS_s594, bool& choiceOperator1__ANONYMOUS_s595, bool& choiceOperator2__ANONYMOUS_s596, bool& choiceOperator3__ANONYMOUS_s597, bool& choiceOperator4__ANONYMOUS_s598, bool& choiceOperator5__ANONYMOUS_s599, bool& choiceReturnList0__ANONYMOUS_s600, bool& choiceReturnList1__ANONYMOUS_s601, bool& choiceReturnList2__ANONYMOUS_s602, int& nchanges__ANONYMOUS_s603);
extern void computeDeriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s650, bool& choiceAssign1__ANONYMOUS_s616, bool& choiceAssign2__ANONYMOUS_s649, bool& choiceAssign3__ANONYMOUS_s651, bool& choiceAssign4__ANONYMOUS_s652, bool& choiceAssign5__ANONYMOUS_s653, bool& choiceBaseCase0__ANONYMOUS_s615, bool& choiceCompOperator0__ANONYMOUS_s654, bool& choiceInit0__ANONYMOUS_s655, bool& choiceInit10__ANONYMOUS_s656, bool& choiceInit11__ANONYMOUS_s657, bool& choiceInit12__ANONYMOUS_s658, bool& choiceInit13__ANONYMOUS_s659, bool& choiceInit14__ANONYMOUS_s660, bool& choiceInit1__ANONYMOUS_s661, bool& choiceInit2__ANONYMOUS_s662, bool& choiceInit3__ANONYMOUS_s663, bool& choiceInit4__ANONYMOUS_s570, bool& choiceInit5__ANONYMOUS_s567, bool& choiceInit6__ANONYMOUS_s664, bool& choiceInit7__ANONYMOUS_s665, bool& choiceInit8__ANONYMOUS_s666, bool& choiceInit9__ANONYMOUS_s667, bool& choiceOperator0__ANONYMOUS_s668, bool& choiceOperator1__ANONYMOUS_s669, bool& choiceOperator2__ANONYMOUS_s618, bool& choiceOperator3__ANONYMOUS_s670, bool& choiceOperator4__ANONYMOUS_s671, bool& choiceOperator5__ANONYMOUS_s672, bool& choiceReturnList0__ANONYMOUS_s673, bool& choiceReturnList1__ANONYMOUS_s674, bool& choiceReturnList2__ANONYMOUS_s675, int& nchanges__ANONYMOUS_s676);
extern void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */);
extern void createMTFromArray(int N, int* a/* len = N */, MultiType*& _out);
extern void computeDeriv(MultiType* poly, MultiType*& _out, bool& choiceAssign1__ANONYMOUS_s608, bool& choiceAssign2__ANONYMOUS_s612, bool& choiceBaseCase0__ANONYMOUS_s604, bool& choiceInit4__ANONYMOUS_s619, bool& choiceInit5__ANONYMOUS_s609, bool& choiceInit6__ANONYMOUS_s605, bool& choiceOperator2__ANONYMOUS_s607, bool& choiceReturnList1__ANONYMOUS_s606);
extern void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */);
extern void calculateChanges(bool& choiceAssign0__ANONYMOUS_s527, bool& choiceAssign1__ANONYMOUS_s528, bool& choiceAssign2__ANONYMOUS_s529, bool& choiceAssign3__ANONYMOUS_s530, bool& choiceAssign4__ANONYMOUS_s531, bool& choiceAssign5__ANONYMOUS_s532, bool& choiceBaseCase0__ANONYMOUS_s533, bool& choiceCompOperator0__ANONYMOUS_s534, bool& choiceInit0__ANONYMOUS_s535, bool& choiceInit10__ANONYMOUS_s536, bool& choiceInit11__ANONYMOUS_s537, bool& choiceInit12__ANONYMOUS_s538, bool& choiceInit13__ANONYMOUS_s539, bool& choiceInit14__ANONYMOUS_s540, bool& choiceInit1__ANONYMOUS_s541, bool& choiceInit2__ANONYMOUS_s542, bool& choiceInit3__ANONYMOUS_s543, bool& choiceInit4__ANONYMOUS_s544, bool& choiceInit5__ANONYMOUS_s545, bool& choiceInit6__ANONYMOUS_s546, bool& choiceInit7__ANONYMOUS_s547, bool& choiceInit8__ANONYMOUS_s548, bool& choiceInit9__ANONYMOUS_s549, bool& choiceOperator0__ANONYMOUS_s550, bool& choiceOperator1__ANONYMOUS_s551, bool& choiceOperator2__ANONYMOUS_s552, bool& choiceOperator3__ANONYMOUS_s553, bool& choiceOperator4__ANONYMOUS_s554, bool& choiceOperator5__ANONYMOUS_s555, bool& choiceReturnList0__ANONYMOUS_s556, bool& choiceReturnList1__ANONYMOUS_s557, bool& choiceReturnList2__ANONYMOUS_s558, int& nchanges__ANONYMOUS_s559);
extern void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out);
extern void fuzzBaseCase0(bool& x, bool& choiceBaseCase0__ANONYMOUS_s500);
extern void listComp22(MultiType* poly, MultiType*& _out, bool& choiceInit4__ANONYMOUS_s568, bool& choiceInit5__ANONYMOUS_s648, bool& choiceInit6__ANONYMOUS_s614, bool& choiceOperator2__ANONYMOUS_s677);
extern void fuzzAssign1(MultiType* i, MultiType*& _out, bool& choiceAssign1__ANONYMOUS_s511);
extern void assignMT(MultiType*& lhs, MultiType* rhs);
extern void subscriptMTl(MultiType* list, MultiType* leftIndex, MultiType*& _out);
extern void fuzzAssign2(MultiType* i, MultiType*& _out, bool& choiceAssign2__ANONYMOUS_s519);
extern void fuzzReturnList1(MultiType* a, MultiType*& _out, bool& choiceReturnList1__ANONYMOUS_s502);
extern void len(MultiType* x, MultiType*& _out);
extern void applyCompOp(MultiType* left, MultiType* right, int compop, bool& _out);
extern void range2(MultiType* x, MultiType* y, MultiType*& _out);
extern void foreach_body01(MultiType* lst, MultiType*& result0, MultiType* poly_list_int1);
extern void fuzzInit4(MultiType* i, MultiType*& _out, bool& choiceInit4__ANONYMOUS_s516);
extern void fuzzInit6(MultiType* i, MultiType*& _out, bool& choiceInit6__ANONYMOUS_s509);
extern void fuzzInit5(MultiType* i, MultiType*& _out, bool& choiceInit5__ANONYMOUS_s501);
extern void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out);
extern void fuzzOperator2(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator2__ANONYMOUS_s518);
extern void appendList(MultiType*& left, MultiType* right);
extern void subscriptMTul(MultiType* list, MultiType* leftIndex, MultiType* rightIndex, MultiType*& _out);
extern void applyEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int);
extern void setZero(MultiType* x, MultiType*& _out);
extern void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out);
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
