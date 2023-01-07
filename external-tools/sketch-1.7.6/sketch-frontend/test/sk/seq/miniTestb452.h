#ifndef MINITESTB452_H
#define MINITESTB452_H

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
extern void glblInit_choiceAssign0__ANONYMOUS_s901(bool& choiceAssign0__ANONYMOUS_s900);
extern void glblInit_choiceAssign10__ANONYMOUS_s903(bool& choiceAssign10__ANONYMOUS_s902);
extern void glblInit_choiceAssign11__ANONYMOUS_s905(bool& choiceAssign11__ANONYMOUS_s904);
extern void glblInit_choiceAssign1__ANONYMOUS_s907(bool& choiceAssign1__ANONYMOUS_s906);
extern void glblInit_choiceAssign2__ANONYMOUS_s909(bool& choiceAssign2__ANONYMOUS_s908);
extern void glblInit_choiceAssign3__ANONYMOUS_s911(bool& choiceAssign3__ANONYMOUS_s910);
extern void glblInit_choiceAssign4__ANONYMOUS_s913(bool& choiceAssign4__ANONYMOUS_s912);
extern void glblInit_choiceAssign5__ANONYMOUS_s915(bool& choiceAssign5__ANONYMOUS_s914);
extern void glblInit_choiceAssign6__ANONYMOUS_s917(bool& choiceAssign6__ANONYMOUS_s916);
extern void glblInit_choiceAssign7__ANONYMOUS_s919(bool& choiceAssign7__ANONYMOUS_s918);
extern void glblInit_choiceAssign8__ANONYMOUS_s921(bool& choiceAssign8__ANONYMOUS_s920);
extern void glblInit_choiceAssign9__ANONYMOUS_s923(bool& choiceAssign9__ANONYMOUS_s922);
extern void glblInit_choiceBaseCase0__ANONYMOUS_s925(bool& choiceBaseCase0__ANONYMOUS_s924);
extern void glblInit_choiceCompOperator0__ANONYMOUS_s927(bool& choiceCompOperator0__ANONYMOUS_s926);
extern void glblInit_choiceCompOperator1__ANONYMOUS_s929(bool& choiceCompOperator1__ANONYMOUS_s928);
extern void glblInit_choiceCompOperator2__ANONYMOUS_s931(bool& choiceCompOperator2__ANONYMOUS_s930);
extern void glblInit_choiceInit0__ANONYMOUS_s933(bool& choiceInit0__ANONYMOUS_s932);
extern void glblInit_choiceInit1__ANONYMOUS_s935(bool& choiceInit1__ANONYMOUS_s934);
extern void glblInit_choiceInit2__ANONYMOUS_s937(bool& choiceInit2__ANONYMOUS_s936);
extern void glblInit_choiceInit3__ANONYMOUS_s939(bool& choiceInit3__ANONYMOUS_s938);
extern void glblInit_choiceInit4__ANONYMOUS_s941(bool& choiceInit4__ANONYMOUS_s940);
extern void glblInit_choiceInit5__ANONYMOUS_s943(bool& choiceInit5__ANONYMOUS_s942);
extern void glblInit_choiceInit6__ANONYMOUS_s945(bool& choiceInit6__ANONYMOUS_s944);
extern void glblInit_choiceInit7__ANONYMOUS_s947(bool& choiceInit7__ANONYMOUS_s946);
extern void glblInit_choiceInit8__ANONYMOUS_s949(bool& choiceInit8__ANONYMOUS_s948);
extern void glblInit_choiceInit9__ANONYMOUS_s951(bool& choiceInit9__ANONYMOUS_s950);
extern void glblInit_choiceOperator0__ANONYMOUS_s953(bool& choiceOperator0__ANONYMOUS_s952);
extern void glblInit_choiceOperator1__ANONYMOUS_s955(bool& choiceOperator1__ANONYMOUS_s954);
extern void glblInit_choiceOperator2__ANONYMOUS_s957(bool& choiceOperator2__ANONYMOUS_s956);
extern void glblInit_choiceOperator3__ANONYMOUS_s959(bool& choiceOperator3__ANONYMOUS_s958);
extern void glblInit_choiceOperator4__ANONYMOUS_s961(bool& choiceOperator4__ANONYMOUS_s960);
extern void glblInit_choiceOperator5__ANONYMOUS_s963(bool& choiceOperator5__ANONYMOUS_s962);
extern void glblInit_choiceOperator6__ANONYMOUS_s965(bool& choiceOperator6__ANONYMOUS_s964);
extern void glblInit_choiceOperator7__ANONYMOUS_s967(bool& choiceOperator7__ANONYMOUS_s966);
extern void glblInit_choiceOperator8__ANONYMOUS_s969(bool& choiceOperator8__ANONYMOUS_s968);
extern void glblInit_choiceOperator9__ANONYMOUS_s971(bool& choiceOperator9__ANONYMOUS_s970);
extern void glblInit_falseMT__ANONYMOUS_s973(MultiType*& falseMT__ANONYMOUS_s972);
extern void glblInit_intTypeMT__ANONYMOUS_s975(MultiType*& intTypeMT__ANONYMOUS_s974);
extern void glblInit_listTypeMT__ANONYMOUS_s977(MultiType*& listTypeMT__ANONYMOUS_s976);
extern void glblInit_nchanges__ANONYMOUS_s979(int& nchanges__ANONYMOUS_s978);
extern void glblInit_noneMT__ANONYMOUS_s981(MultiType*& noneMT__ANONYMOUS_s980);
extern void glblInit_trueMT__ANONYMOUS_s983(MultiType*& trueMT__ANONYMOUS_s982);
extern void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s861, bool& choiceAssign10__ANONYMOUS_s862, bool& choiceAssign11__ANONYMOUS_s863, bool& choiceAssign1__ANONYMOUS_s864, bool& choiceAssign2__ANONYMOUS_s865, bool& choiceAssign3__ANONYMOUS_s866, bool& choiceAssign4__ANONYMOUS_s867, bool& choiceAssign5__ANONYMOUS_s868, bool& choiceAssign6__ANONYMOUS_s869, bool& choiceAssign7__ANONYMOUS_s870, bool& choiceAssign8__ANONYMOUS_s871, bool& choiceAssign9__ANONYMOUS_s872, bool& choiceBaseCase0__ANONYMOUS_s746, bool& choiceCompOperator0__ANONYMOUS_s873, bool& choiceCompOperator1__ANONYMOUS_s874, bool& choiceCompOperator2__ANONYMOUS_s875, bool& choiceInit0__ANONYMOUS_s876, bool& choiceInit1__ANONYMOUS_s877, bool& choiceInit2__ANONYMOUS_s878, bool& choiceInit3__ANONYMOUS_s879, bool& choiceInit4__ANONYMOUS_s880, bool& choiceInit5__ANONYMOUS_s881, bool& choiceInit6__ANONYMOUS_s882, bool& choiceInit7__ANONYMOUS_s883, bool& choiceInit8__ANONYMOUS_s884, bool& choiceInit9__ANONYMOUS_s885, bool& choiceOperator0__ANONYMOUS_s886, bool& choiceOperator1__ANONYMOUS_s887, bool& choiceOperator2__ANONYMOUS_s888, bool& choiceOperator3__ANONYMOUS_s889, bool& choiceOperator4__ANONYMOUS_s890, bool& choiceOperator5__ANONYMOUS_s797, bool& choiceOperator6__ANONYMOUS_s813, bool& choiceOperator7__ANONYMOUS_s891, bool& choiceOperator8__ANONYMOUS_s892, bool& choiceOperator9__ANONYMOUS_s893, int& nchanges__ANONYMOUS_s894);
extern void compute_deriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s815, bool& choiceAssign10__ANONYMOUS_s816, bool& choiceAssign11__ANONYMOUS_s817, bool& choiceAssign1__ANONYMOUS_s818, bool& choiceAssign2__ANONYMOUS_s819, bool& choiceAssign3__ANONYMOUS_s820, bool& choiceAssign4__ANONYMOUS_s821, bool& choiceAssign5__ANONYMOUS_s822, bool& choiceAssign6__ANONYMOUS_s823, bool& choiceAssign7__ANONYMOUS_s824, bool& choiceAssign8__ANONYMOUS_s825, bool& choiceAssign9__ANONYMOUS_s826, bool& choiceBaseCase0__ANONYMOUS_s827, bool& choiceCompOperator0__ANONYMOUS_s828, bool& choiceCompOperator1__ANONYMOUS_s829, bool& choiceCompOperator2__ANONYMOUS_s830, bool& choiceInit0__ANONYMOUS_s831, bool& choiceInit1__ANONYMOUS_s832, bool& choiceInit2__ANONYMOUS_s833, bool& choiceInit3__ANONYMOUS_s834, bool& choiceInit4__ANONYMOUS_s835, bool& choiceInit5__ANONYMOUS_s836, bool& choiceInit6__ANONYMOUS_s837, bool& choiceInit7__ANONYMOUS_s838, bool& choiceInit8__ANONYMOUS_s839, bool& choiceInit9__ANONYMOUS_s840, bool& choiceOperator0__ANONYMOUS_s841, bool& choiceOperator1__ANONYMOUS_s842, bool& choiceOperator2__ANONYMOUS_s843, bool& choiceOperator3__ANONYMOUS_s844, bool& choiceOperator4__ANONYMOUS_s845, bool& choiceOperator5__ANONYMOUS_s747, bool& choiceOperator6__ANONYMOUS_s846, bool& choiceOperator7__ANONYMOUS_s847, bool& choiceOperator8__ANONYMOUS_s848, bool& choiceOperator9__ANONYMOUS_s849, int& nchanges__ANONYMOUS_s850);
extern void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */);
extern void createMTFromArray(int N, int* a/* len = N */, MultiType*& _out);
extern void compute_deriv(MultiType* poly, MultiType*& _out, bool& choiceBaseCase0__ANONYMOUS_s896, bool& choiceInit1__ANONYMOUS_s803, bool& choiceOperator5__ANONYMOUS_s798, bool& choiceOperator6__ANONYMOUS_s790);
extern void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */);
extern void calculateChanges(bool& choiceAssign0__ANONYMOUS_s667, bool& choiceAssign10__ANONYMOUS_s668, bool& choiceAssign11__ANONYMOUS_s669, bool& choiceAssign1__ANONYMOUS_s670, bool& choiceAssign2__ANONYMOUS_s671, bool& choiceAssign3__ANONYMOUS_s672, bool& choiceAssign4__ANONYMOUS_s673, bool& choiceAssign5__ANONYMOUS_s674, bool& choiceAssign6__ANONYMOUS_s675, bool& choiceAssign7__ANONYMOUS_s676, bool& choiceAssign8__ANONYMOUS_s677, bool& choiceAssign9__ANONYMOUS_s678, bool& choiceBaseCase0__ANONYMOUS_s679, bool& choiceCompOperator0__ANONYMOUS_s680, bool& choiceCompOperator1__ANONYMOUS_s681, bool& choiceCompOperator2__ANONYMOUS_s682, bool& choiceInit0__ANONYMOUS_s683, bool& choiceInit1__ANONYMOUS_s684, bool& choiceInit2__ANONYMOUS_s685, bool& choiceInit3__ANONYMOUS_s686, bool& choiceInit4__ANONYMOUS_s687, bool& choiceInit5__ANONYMOUS_s688, bool& choiceInit6__ANONYMOUS_s689, bool& choiceInit7__ANONYMOUS_s690, bool& choiceInit8__ANONYMOUS_s691, bool& choiceInit9__ANONYMOUS_s692, bool& choiceOperator0__ANONYMOUS_s693, bool& choiceOperator1__ANONYMOUS_s694, bool& choiceOperator2__ANONYMOUS_s695, bool& choiceOperator3__ANONYMOUS_s696, bool& choiceOperator4__ANONYMOUS_s697, bool& choiceOperator5__ANONYMOUS_s698, bool& choiceOperator6__ANONYMOUS_s699, bool& choiceOperator7__ANONYMOUS_s700, bool& choiceOperator8__ANONYMOUS_s701, bool& choiceOperator9__ANONYMOUS_s702, int& nchanges__ANONYMOUS_s703);
extern void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out);
extern void fuzzBaseCase0(bool& x, bool& choiceBaseCase0__ANONYMOUS_s723);
extern void assignMT(MultiType*& lhs, MultiType* rhs);
extern void fuzzInit1(MultiType* i, MultiType*& _out, bool& choiceInit1__ANONYMOUS_s740);
extern void len(MultiType* x, MultiType*& _out);
extern void applyCompOp(MultiType* left, MultiType* right, int compop, bool& _out);
extern void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out);
extern void fuzzOperator5(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator5__ANONYMOUS_s707);
extern void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out);
extern void fuzzOperator6(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator6__ANONYMOUS_s732);
extern void range2(MultiType* x, MultiType* y, MultiType*& _out);
extern void foreach_body01(MultiType* lst, MultiType*& result0, MultiType* poly_list_int1);
extern void applyEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTCompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyGTECompOp(MultiType* left, MultiType* right, bool& _out);
extern void applyAddBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applySubBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyMulBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyDivBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyPowBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyModBinOp(MultiType* left, MultiType* right, MultiType*& _out);
extern void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int);
extern void applyEQCompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyEQCompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyLTCompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOpList(MultiType* left, MultiType* right, bool& _out);
extern void applyLTECompOpInt(MultiType* left, MultiType* right, bool& _out);
extern void applyMulBinOpInt(MultiType* left, MultiType* right, MultiType*& _out);
extern void applyMulBinOpList(MultiType* left, MultiType* right, MultiType*& _out);
extern void intMod(int x, int y, int& _out);
extern void min(int a, int b, int& _out);
extern void intMul(int x, int y, int& _out);
extern void intPow(int x, int y, int& _out);
extern void intDiv(int x, int y, int& _out);
extern void intMul1(int x, int y, int& _out);
}

#endif
