#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb457.h"
namespace ANONYMOUS{

MultiType* MultiType::create(int  val_, int  flag_, MTList*  lst_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->val =  val_;
  rv->flag =  flag_;
  rv->lst =  lst_;
  return rv;
}
template<typename T_0>
MTList* MTList::create(int  len_, T_0* listValues_, int listValues_len){
  int tlen_listValues = len_; 
  void* temp= malloc( sizeof(MTList)   + sizeof(MultiType* )*tlen_listValues); 
  MTList* rv = new (temp)MTList();
  rv->len =  len_;
  CopyArr(rv->listValues, listValues_, tlen_listValues, listValues_len ); 
  return rv;
}
void main__Wrapper(int N, int* poly_list_int/* len = N */) {
  int  nchanges__ANONYMOUS_s647=0;
  glblInit_nchanges__ANONYMOUS_s749(nchanges__ANONYMOUS_s647);
  bool  choiceReturnList2__ANONYMOUS_s646=0;
  glblInit_choiceReturnList2__ANONYMOUS_s741(choiceReturnList2__ANONYMOUS_s646);
  bool  choiceReturnList1__ANONYMOUS_s617=0;
  glblInit_choiceReturnList1__ANONYMOUS_s739(choiceReturnList1__ANONYMOUS_s617);
  bool  choiceReturnList0__ANONYMOUS_s645=0;
  glblInit_choiceReturnList0__ANONYMOUS_s737(choiceReturnList0__ANONYMOUS_s645);
  bool  choiceOperator5__ANONYMOUS_s644=0;
  glblInit_choiceOperator5__ANONYMOUS_s735(choiceOperator5__ANONYMOUS_s644);
  bool  choiceOperator4__ANONYMOUS_s643=0;
  glblInit_choiceOperator4__ANONYMOUS_s733(choiceOperator4__ANONYMOUS_s643);
  bool  choiceOperator3__ANONYMOUS_s642=0;
  glblInit_choiceOperator3__ANONYMOUS_s731(choiceOperator3__ANONYMOUS_s642);
  bool  choiceOperator2__ANONYMOUS_s622=0;
  glblInit_choiceOperator2__ANONYMOUS_s729(choiceOperator2__ANONYMOUS_s622);
  bool  choiceOperator1__ANONYMOUS_s641=0;
  glblInit_choiceOperator1__ANONYMOUS_s727(choiceOperator1__ANONYMOUS_s641);
  bool  choiceOperator0__ANONYMOUS_s640=0;
  glblInit_choiceOperator0__ANONYMOUS_s725(choiceOperator0__ANONYMOUS_s640);
  bool  choiceInit9__ANONYMOUS_s639=0;
  glblInit_choiceInit9__ANONYMOUS_s723(choiceInit9__ANONYMOUS_s639);
  bool  choiceInit8__ANONYMOUS_s638=0;
  glblInit_choiceInit8__ANONYMOUS_s721(choiceInit8__ANONYMOUS_s638);
  bool  choiceInit7__ANONYMOUS_s637=0;
  glblInit_choiceInit7__ANONYMOUS_s719(choiceInit7__ANONYMOUS_s637);
  bool  choiceInit6__ANONYMOUS_s571=0;
  glblInit_choiceInit6__ANONYMOUS_s717(choiceInit6__ANONYMOUS_s571);
  bool  choiceInit5__ANONYMOUS_s610=0;
  glblInit_choiceInit5__ANONYMOUS_s715(choiceInit5__ANONYMOUS_s610);
  bool  choiceInit4__ANONYMOUS_s611=0;
  glblInit_choiceInit4__ANONYMOUS_s713(choiceInit4__ANONYMOUS_s611);
  bool  choiceInit3__ANONYMOUS_s636=0;
  glblInit_choiceInit3__ANONYMOUS_s711(choiceInit3__ANONYMOUS_s636);
  bool  choiceInit2__ANONYMOUS_s635=0;
  glblInit_choiceInit2__ANONYMOUS_s709(choiceInit2__ANONYMOUS_s635);
  bool  choiceInit1__ANONYMOUS_s634=0;
  glblInit_choiceInit1__ANONYMOUS_s707(choiceInit1__ANONYMOUS_s634);
  bool  choiceInit14__ANONYMOUS_s633=0;
  glblInit_choiceInit14__ANONYMOUS_s705(choiceInit14__ANONYMOUS_s633);
  bool  choiceInit13__ANONYMOUS_s632=0;
  glblInit_choiceInit13__ANONYMOUS_s703(choiceInit13__ANONYMOUS_s632);
  bool  choiceInit12__ANONYMOUS_s631=0;
  glblInit_choiceInit12__ANONYMOUS_s701(choiceInit12__ANONYMOUS_s631);
  bool  choiceInit11__ANONYMOUS_s630=0;
  glblInit_choiceInit11__ANONYMOUS_s699(choiceInit11__ANONYMOUS_s630);
  bool  choiceInit10__ANONYMOUS_s629=0;
  glblInit_choiceInit10__ANONYMOUS_s697(choiceInit10__ANONYMOUS_s629);
  bool  choiceInit0__ANONYMOUS_s628=0;
  glblInit_choiceInit0__ANONYMOUS_s695(choiceInit0__ANONYMOUS_s628);
  bool  choiceCompOperator0__ANONYMOUS_s627=0;
  glblInit_choiceCompOperator0__ANONYMOUS_s693(choiceCompOperator0__ANONYMOUS_s627);
  bool  choiceBaseCase0__ANONYMOUS_s621=0;
  glblInit_choiceBaseCase0__ANONYMOUS_s691(choiceBaseCase0__ANONYMOUS_s621);
  bool  choiceAssign5__ANONYMOUS_s626=0;
  glblInit_choiceAssign5__ANONYMOUS_s689(choiceAssign5__ANONYMOUS_s626);
  bool  choiceAssign4__ANONYMOUS_s625=0;
  glblInit_choiceAssign4__ANONYMOUS_s687(choiceAssign4__ANONYMOUS_s625);
  bool  choiceAssign3__ANONYMOUS_s624=0;
  glblInit_choiceAssign3__ANONYMOUS_s685(choiceAssign3__ANONYMOUS_s624);
  bool  choiceAssign2__ANONYMOUS_s613=0;
  glblInit_choiceAssign2__ANONYMOUS_s683(choiceAssign2__ANONYMOUS_s613);
  bool  choiceAssign1__ANONYMOUS_s620=0;
  glblInit_choiceAssign1__ANONYMOUS_s681(choiceAssign1__ANONYMOUS_s620);
  bool  choiceAssign0__ANONYMOUS_s623=0;
  glblInit_choiceAssign0__ANONYMOUS_s679(choiceAssign0__ANONYMOUS_s623);
  _main(N, poly_list_int, choiceAssign0__ANONYMOUS_s623, choiceAssign1__ANONYMOUS_s620, choiceAssign2__ANONYMOUS_s613, choiceAssign3__ANONYMOUS_s624, choiceAssign4__ANONYMOUS_s625, choiceAssign5__ANONYMOUS_s626, choiceBaseCase0__ANONYMOUS_s621, choiceCompOperator0__ANONYMOUS_s627, choiceInit0__ANONYMOUS_s628, choiceInit10__ANONYMOUS_s629, choiceInit11__ANONYMOUS_s630, choiceInit12__ANONYMOUS_s631, choiceInit13__ANONYMOUS_s632, choiceInit14__ANONYMOUS_s633, choiceInit1__ANONYMOUS_s634, choiceInit2__ANONYMOUS_s635, choiceInit3__ANONYMOUS_s636, choiceInit4__ANONYMOUS_s611, choiceInit5__ANONYMOUS_s610, choiceInit6__ANONYMOUS_s571, choiceInit7__ANONYMOUS_s637, choiceInit8__ANONYMOUS_s638, choiceInit9__ANONYMOUS_s639, choiceOperator0__ANONYMOUS_s640, choiceOperator1__ANONYMOUS_s641, choiceOperator2__ANONYMOUS_s622, choiceOperator3__ANONYMOUS_s642, choiceOperator4__ANONYMOUS_s643, choiceOperator5__ANONYMOUS_s644, choiceReturnList0__ANONYMOUS_s645, choiceReturnList1__ANONYMOUS_s617, choiceReturnList2__ANONYMOUS_s646, nchanges__ANONYMOUS_s647);
}
void main__WrapperNospec(int N, int* poly_list_int/* len = N */) {}
void glblInit_choiceAssign0__ANONYMOUS_s679(bool& choiceAssign0__ANONYMOUS_s678) {
  choiceAssign0__ANONYMOUS_s678 = 0;
}
void glblInit_choiceAssign1__ANONYMOUS_s681(bool& choiceAssign1__ANONYMOUS_s680) {
  choiceAssign1__ANONYMOUS_s680 = 0;
}
void glblInit_choiceAssign2__ANONYMOUS_s683(bool& choiceAssign2__ANONYMOUS_s682) {
  choiceAssign2__ANONYMOUS_s682 = 0;
}
void glblInit_choiceAssign3__ANONYMOUS_s685(bool& choiceAssign3__ANONYMOUS_s684) {
  choiceAssign3__ANONYMOUS_s684 = 0;
}
void glblInit_choiceAssign4__ANONYMOUS_s687(bool& choiceAssign4__ANONYMOUS_s686) {
  choiceAssign4__ANONYMOUS_s686 = 0;
}
void glblInit_choiceAssign5__ANONYMOUS_s689(bool& choiceAssign5__ANONYMOUS_s688) {
  choiceAssign5__ANONYMOUS_s688 = 0;
}
void glblInit_choiceBaseCase0__ANONYMOUS_s691(bool& choiceBaseCase0__ANONYMOUS_s690) {
  choiceBaseCase0__ANONYMOUS_s690 = 0;
}
void glblInit_choiceCompOperator0__ANONYMOUS_s693(bool& choiceCompOperator0__ANONYMOUS_s692) {
  choiceCompOperator0__ANONYMOUS_s692 = 0;
}
void glblInit_choiceInit0__ANONYMOUS_s695(bool& choiceInit0__ANONYMOUS_s694) {
  choiceInit0__ANONYMOUS_s694 = 0;
}
void glblInit_choiceInit10__ANONYMOUS_s697(bool& choiceInit10__ANONYMOUS_s696) {
  choiceInit10__ANONYMOUS_s696 = 0;
}
void glblInit_choiceInit11__ANONYMOUS_s699(bool& choiceInit11__ANONYMOUS_s698) {
  choiceInit11__ANONYMOUS_s698 = 0;
}
void glblInit_choiceInit12__ANONYMOUS_s701(bool& choiceInit12__ANONYMOUS_s700) {
  choiceInit12__ANONYMOUS_s700 = 0;
}
void glblInit_choiceInit13__ANONYMOUS_s703(bool& choiceInit13__ANONYMOUS_s702) {
  choiceInit13__ANONYMOUS_s702 = 0;
}
void glblInit_choiceInit14__ANONYMOUS_s705(bool& choiceInit14__ANONYMOUS_s704) {
  choiceInit14__ANONYMOUS_s704 = 0;
}
void glblInit_choiceInit1__ANONYMOUS_s707(bool& choiceInit1__ANONYMOUS_s706) {
  choiceInit1__ANONYMOUS_s706 = 0;
}
void glblInit_choiceInit2__ANONYMOUS_s709(bool& choiceInit2__ANONYMOUS_s708) {
  choiceInit2__ANONYMOUS_s708 = 0;
}
void glblInit_choiceInit3__ANONYMOUS_s711(bool& choiceInit3__ANONYMOUS_s710) {
  choiceInit3__ANONYMOUS_s710 = 0;
}
void glblInit_choiceInit4__ANONYMOUS_s713(bool& choiceInit4__ANONYMOUS_s712) {
  choiceInit4__ANONYMOUS_s712 = 0;
}
void glblInit_choiceInit5__ANONYMOUS_s715(bool& choiceInit5__ANONYMOUS_s714) {
  choiceInit5__ANONYMOUS_s714 = 0;
}
void glblInit_choiceInit6__ANONYMOUS_s717(bool& choiceInit6__ANONYMOUS_s716) {
  choiceInit6__ANONYMOUS_s716 = 0;
}
void glblInit_choiceInit7__ANONYMOUS_s719(bool& choiceInit7__ANONYMOUS_s718) {
  choiceInit7__ANONYMOUS_s718 = 0;
}
void glblInit_choiceInit8__ANONYMOUS_s721(bool& choiceInit8__ANONYMOUS_s720) {
  choiceInit8__ANONYMOUS_s720 = 0;
}
void glblInit_choiceInit9__ANONYMOUS_s723(bool& choiceInit9__ANONYMOUS_s722) {
  choiceInit9__ANONYMOUS_s722 = 0;
}
void glblInit_choiceOperator0__ANONYMOUS_s725(bool& choiceOperator0__ANONYMOUS_s724) {
  choiceOperator0__ANONYMOUS_s724 = 0;
}
void glblInit_choiceOperator1__ANONYMOUS_s727(bool& choiceOperator1__ANONYMOUS_s726) {
  choiceOperator1__ANONYMOUS_s726 = 0;
}
void glblInit_choiceOperator2__ANONYMOUS_s729(bool& choiceOperator2__ANONYMOUS_s728) {
  choiceOperator2__ANONYMOUS_s728 = 0;
}
void glblInit_choiceOperator3__ANONYMOUS_s731(bool& choiceOperator3__ANONYMOUS_s730) {
  choiceOperator3__ANONYMOUS_s730 = 0;
}
void glblInit_choiceOperator4__ANONYMOUS_s733(bool& choiceOperator4__ANONYMOUS_s732) {
  choiceOperator4__ANONYMOUS_s732 = 0;
}
void glblInit_choiceOperator5__ANONYMOUS_s735(bool& choiceOperator5__ANONYMOUS_s734) {
  choiceOperator5__ANONYMOUS_s734 = 0;
}
void glblInit_choiceReturnList0__ANONYMOUS_s737(bool& choiceReturnList0__ANONYMOUS_s736) {
  choiceReturnList0__ANONYMOUS_s736 = 0;
}
void glblInit_choiceReturnList1__ANONYMOUS_s739(bool& choiceReturnList1__ANONYMOUS_s738) {
  choiceReturnList1__ANONYMOUS_s738 = 0;
}
void glblInit_choiceReturnList2__ANONYMOUS_s741(bool& choiceReturnList2__ANONYMOUS_s740) {
  choiceReturnList2__ANONYMOUS_s740 = 0;
}
void glblInit_falseMT__ANONYMOUS_s743(MultiType*& falseMT__ANONYMOUS_s742) {
  falseMT__ANONYMOUS_s742 = MultiType::create(0, 0, NULL);
}
void glblInit_intTypeMT__ANONYMOUS_s745(MultiType*& intTypeMT__ANONYMOUS_s744) {
  intTypeMT__ANONYMOUS_s744 = MultiType::create(0, 0, NULL);
}
void glblInit_listTypeMT__ANONYMOUS_s747(MultiType*& listTypeMT__ANONYMOUS_s746) {
  listTypeMT__ANONYMOUS_s746 = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0));
}
void glblInit_nchanges__ANONYMOUS_s749(int& nchanges__ANONYMOUS_s748) {
  nchanges__ANONYMOUS_s748 = 0;
}
void glblInit_noneMT__ANONYMOUS_s751(MultiType*& noneMT__ANONYMOUS_s750) {
  noneMT__ANONYMOUS_s750 = MultiType::create(0, 0, NULL);
}
void glblInit_trueMT__ANONYMOUS_s753(MultiType*& trueMT__ANONYMOUS_s752) {
  trueMT__ANONYMOUS_s752 = MultiType::create(1, 0, NULL);
}
void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s572, bool& choiceAssign1__ANONYMOUS_s573, bool& choiceAssign2__ANONYMOUS_s574, bool& choiceAssign3__ANONYMOUS_s575, bool& choiceAssign4__ANONYMOUS_s576, bool& choiceAssign5__ANONYMOUS_s577, bool& choiceBaseCase0__ANONYMOUS_s578, bool& choiceCompOperator0__ANONYMOUS_s579, bool& choiceInit0__ANONYMOUS_s580, bool& choiceInit10__ANONYMOUS_s581, bool& choiceInit11__ANONYMOUS_s582, bool& choiceInit12__ANONYMOUS_s583, bool& choiceInit13__ANONYMOUS_s584, bool& choiceInit14__ANONYMOUS_s585, bool& choiceInit1__ANONYMOUS_s586, bool& choiceInit2__ANONYMOUS_s587, bool& choiceInit3__ANONYMOUS_s588, bool& choiceInit4__ANONYMOUS_s589, bool& choiceInit5__ANONYMOUS_s569, bool& choiceInit6__ANONYMOUS_s590, bool& choiceInit7__ANONYMOUS_s591, bool& choiceInit8__ANONYMOUS_s592, bool& choiceInit9__ANONYMOUS_s593, bool& choiceOperator0__ANONYMOUS_s594, bool& choiceOperator1__ANONYMOUS_s595, bool& choiceOperator2__ANONYMOUS_s596, bool& choiceOperator3__ANONYMOUS_s597, bool& choiceOperator4__ANONYMOUS_s598, bool& choiceOperator5__ANONYMOUS_s599, bool& choiceReturnList0__ANONYMOUS_s600, bool& choiceReturnList1__ANONYMOUS_s601, bool& choiceReturnList2__ANONYMOUS_s602, int& nchanges__ANONYMOUS_s603) {
  int*  _out_s26= new int [N]; CopyArr<int >(_out_s26,0, N);
  computeDeriv_driver(N, poly_list_int, _out_s26, choiceAssign0__ANONYMOUS_s572, choiceAssign1__ANONYMOUS_s573, choiceAssign2__ANONYMOUS_s574, choiceAssign3__ANONYMOUS_s575, choiceAssign4__ANONYMOUS_s576, choiceAssign5__ANONYMOUS_s577, choiceBaseCase0__ANONYMOUS_s578, choiceCompOperator0__ANONYMOUS_s579, choiceInit0__ANONYMOUS_s580, choiceInit10__ANONYMOUS_s581, choiceInit11__ANONYMOUS_s582, choiceInit12__ANONYMOUS_s583, choiceInit13__ANONYMOUS_s584, choiceInit14__ANONYMOUS_s585, choiceInit1__ANONYMOUS_s586, choiceInit2__ANONYMOUS_s587, choiceInit3__ANONYMOUS_s588, choiceInit4__ANONYMOUS_s589, choiceInit5__ANONYMOUS_s569, choiceInit6__ANONYMOUS_s590, choiceInit7__ANONYMOUS_s591, choiceInit8__ANONYMOUS_s592, choiceInit9__ANONYMOUS_s593, choiceOperator0__ANONYMOUS_s594, choiceOperator1__ANONYMOUS_s595, choiceOperator2__ANONYMOUS_s596, choiceOperator3__ANONYMOUS_s597, choiceOperator4__ANONYMOUS_s598, choiceOperator5__ANONYMOUS_s599, choiceReturnList0__ANONYMOUS_s600, choiceReturnList1__ANONYMOUS_s601, choiceReturnList2__ANONYMOUS_s602, nchanges__ANONYMOUS_s603);
  int*  _out_s28= new int [N]; CopyArr<int >(_out_s28,0, N);
  compute_deriv_teacher_list_int_driver(N, poly_list_int, _out_s28);
  assert (arrCompare(_out_s26, N, _out_s28, N) && ((N) == (N)));;
  delete[] _out_s26;
  delete[] _out_s28;
}
void computeDeriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s650, bool& choiceAssign1__ANONYMOUS_s616, bool& choiceAssign2__ANONYMOUS_s649, bool& choiceAssign3__ANONYMOUS_s651, bool& choiceAssign4__ANONYMOUS_s652, bool& choiceAssign5__ANONYMOUS_s653, bool& choiceBaseCase0__ANONYMOUS_s615, bool& choiceCompOperator0__ANONYMOUS_s654, bool& choiceInit0__ANONYMOUS_s655, bool& choiceInit10__ANONYMOUS_s656, bool& choiceInit11__ANONYMOUS_s657, bool& choiceInit12__ANONYMOUS_s658, bool& choiceInit13__ANONYMOUS_s659, bool& choiceInit14__ANONYMOUS_s660, bool& choiceInit1__ANONYMOUS_s661, bool& choiceInit2__ANONYMOUS_s662, bool& choiceInit3__ANONYMOUS_s663, bool& choiceInit4__ANONYMOUS_s570, bool& choiceInit5__ANONYMOUS_s567, bool& choiceInit6__ANONYMOUS_s664, bool& choiceInit7__ANONYMOUS_s665, bool& choiceInit8__ANONYMOUS_s666, bool& choiceInit9__ANONYMOUS_s667, bool& choiceOperator0__ANONYMOUS_s668, bool& choiceOperator1__ANONYMOUS_s669, bool& choiceOperator2__ANONYMOUS_s618, bool& choiceOperator3__ANONYMOUS_s670, bool& choiceOperator4__ANONYMOUS_s671, bool& choiceOperator5__ANONYMOUS_s672, bool& choiceReturnList0__ANONYMOUS_s673, bool& choiceReturnList1__ANONYMOUS_s674, bool& choiceReturnList2__ANONYMOUS_s675, int& nchanges__ANONYMOUS_s676) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s120=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s120);
  MultiType*  result1_s122=NULL;
  computeDeriv(poly_list_intMT_s120, result1_s122, choiceAssign1__ANONYMOUS_s616, choiceAssign2__ANONYMOUS_s649, choiceBaseCase0__ANONYMOUS_s615, choiceInit4__ANONYMOUS_s570, choiceInit5__ANONYMOUS_s567, choiceInit6__ANONYMOUS_s664, choiceOperator2__ANONYMOUS_s618, choiceReturnList1__ANONYMOUS_s674);
  int*  result_s124= new int [N]; CopyArr<int >(result_s124,0, N);
  computeArrayFromMT(N, result1_s122, result_s124);
  calculateChanges(choiceAssign0__ANONYMOUS_s650, choiceAssign1__ANONYMOUS_s616, choiceAssign2__ANONYMOUS_s649, choiceAssign3__ANONYMOUS_s651, choiceAssign4__ANONYMOUS_s652, choiceAssign5__ANONYMOUS_s653, choiceBaseCase0__ANONYMOUS_s615, choiceCompOperator0__ANONYMOUS_s654, choiceInit0__ANONYMOUS_s655, choiceInit10__ANONYMOUS_s656, choiceInit11__ANONYMOUS_s657, choiceInit12__ANONYMOUS_s658, choiceInit13__ANONYMOUS_s659, choiceInit14__ANONYMOUS_s660, choiceInit1__ANONYMOUS_s661, choiceInit2__ANONYMOUS_s662, choiceInit3__ANONYMOUS_s663, choiceInit4__ANONYMOUS_s570, choiceInit5__ANONYMOUS_s567, choiceInit6__ANONYMOUS_s664, choiceInit7__ANONYMOUS_s665, choiceInit8__ANONYMOUS_s666, choiceInit9__ANONYMOUS_s667, choiceOperator0__ANONYMOUS_s668, choiceOperator1__ANONYMOUS_s669, choiceOperator2__ANONYMOUS_s618, choiceOperator3__ANONYMOUS_s670, choiceOperator4__ANONYMOUS_s671, choiceOperator5__ANONYMOUS_s672, choiceReturnList0__ANONYMOUS_s673, choiceReturnList1__ANONYMOUS_s674, choiceReturnList2__ANONYMOUS_s675, nchanges__ANONYMOUS_s676);
  CopyArr<int >(_out,result_s124, N, N);
  delete[] result_s124;
  return;
}
void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s30=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s30);
  MultiType*  result1_s32=NULL;
  compute_deriv_teacher_list_int(poly_list_intMT_s30, result1_s32);
  int*  result_s34= new int [N]; CopyArr<int >(result_s34,0, N);
  computeArrayFromMT(N, result1_s32, result_s34);
  CopyArr<int >(_out,result_s34, N, N);
  delete[] result_s34;
  return;
}
void createMTFromArray(int N, int* a/* len = N */, MultiType*& _out) {
  MultiType**  lvalues= new MultiType* [N]; CopyArr<MultiType* >(lvalues,NULL, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (lvalues[i]) = MultiType::create((a[i]), 0, NULL);
  }
  _out = MultiType::create(0, 1, MTList::create(N, lvalues, N));
  delete[] lvalues;
  return;
}
void computeDeriv(MultiType* poly, MultiType*& _out, bool& choiceAssign1__ANONYMOUS_s608, bool& choiceAssign2__ANONYMOUS_s612, bool& choiceBaseCase0__ANONYMOUS_s604, bool& choiceInit4__ANONYMOUS_s619, bool& choiceInit5__ANONYMOUS_s609, bool& choiceInit6__ANONYMOUS_s605, bool& choiceOperator2__ANONYMOUS_s607, bool& choiceReturnList1__ANONYMOUS_s606) {
  bool  addBaseCase0=0;
  fuzzBaseCase0(addBaseCase0, choiceBaseCase0__ANONYMOUS_s604);
  if (addBaseCase0) {
    if ((poly->lst->len) <= (1)) {
      MultiType* _tt0[1] = {MultiType::create(0, 0, NULL)};
      _out = MultiType::create(0, 1, MTList::create(1, _tt0, 1));
      return;
    }
  }
  MultiType*  _out_s160=NULL;
  listComp22(poly, _out_s160, choiceInit4__ANONYMOUS_s619, choiceInit5__ANONYMOUS_s609, choiceInit6__ANONYMOUS_s605, choiceOperator2__ANONYMOUS_s607);
  MultiType*  _out_s162=NULL;
  fuzzAssign1(_out_s160, _out_s162, choiceAssign1__ANONYMOUS_s608);
  MultiType*  derivative=NULL;
  assignMT(derivative, _out_s162);
  MultiType*  _out_s164=NULL;
  subscriptMTl(derivative, MultiType::create(1, 0, NULL), _out_s164);
  MultiType*  _out_s166=NULL;
  fuzzAssign2(_out_s164, _out_s166, choiceAssign2__ANONYMOUS_s612);
  assignMT(derivative, _out_s166);
  MultiType*  _out_s168=NULL;
  fuzzReturnList1(derivative, _out_s168, choiceReturnList1__ANONYMOUS_s606);
  _out = _out_s168;
  return;
}
void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */) {
  CopyArr<int >(_out,1, N);
  assert ((a->flag) == (1));;
  assert ((a->lst->len) <= (N));;
  bool  __sa12=(0) < (a->lst->len);
  int  i=0;
  while (__sa12) {
    assert (((a->lst->listValues[i])->flag) == (0));;
    (_out[i]) = (a->lst->listValues[i])->val;
    i = i + 1;
    __sa12 = (i) < (a->lst->len);
  }
  return;
}
void calculateChanges(bool& choiceAssign0__ANONYMOUS_s527, bool& choiceAssign1__ANONYMOUS_s528, bool& choiceAssign2__ANONYMOUS_s529, bool& choiceAssign3__ANONYMOUS_s530, bool& choiceAssign4__ANONYMOUS_s531, bool& choiceAssign5__ANONYMOUS_s532, bool& choiceBaseCase0__ANONYMOUS_s533, bool& choiceCompOperator0__ANONYMOUS_s534, bool& choiceInit0__ANONYMOUS_s535, bool& choiceInit10__ANONYMOUS_s536, bool& choiceInit11__ANONYMOUS_s537, bool& choiceInit12__ANONYMOUS_s538, bool& choiceInit13__ANONYMOUS_s539, bool& choiceInit14__ANONYMOUS_s540, bool& choiceInit1__ANONYMOUS_s541, bool& choiceInit2__ANONYMOUS_s542, bool& choiceInit3__ANONYMOUS_s543, bool& choiceInit4__ANONYMOUS_s544, bool& choiceInit5__ANONYMOUS_s545, bool& choiceInit6__ANONYMOUS_s546, bool& choiceInit7__ANONYMOUS_s547, bool& choiceInit8__ANONYMOUS_s548, bool& choiceInit9__ANONYMOUS_s549, bool& choiceOperator0__ANONYMOUS_s550, bool& choiceOperator1__ANONYMOUS_s551, bool& choiceOperator2__ANONYMOUS_s552, bool& choiceOperator3__ANONYMOUS_s553, bool& choiceOperator4__ANONYMOUS_s554, bool& choiceOperator5__ANONYMOUS_s555, bool& choiceReturnList0__ANONYMOUS_s556, bool& choiceReturnList1__ANONYMOUS_s557, bool& choiceReturnList2__ANONYMOUS_s558, int& nchanges__ANONYMOUS_s559) {
  if (choiceAssign0__ANONYMOUS_s527) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceAssign1__ANONYMOUS_s528) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceAssign2__ANONYMOUS_s529) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceAssign3__ANONYMOUS_s530) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceAssign4__ANONYMOUS_s531) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceAssign5__ANONYMOUS_s532) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator0__ANONYMOUS_s550) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator1__ANONYMOUS_s551) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator2__ANONYMOUS_s552) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator3__ANONYMOUS_s553) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator4__ANONYMOUS_s554) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceOperator5__ANONYMOUS_s555) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceCompOperator0__ANONYMOUS_s534) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit0__ANONYMOUS_s535) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit1__ANONYMOUS_s541) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit2__ANONYMOUS_s542) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit3__ANONYMOUS_s543) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit4__ANONYMOUS_s544) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit5__ANONYMOUS_s545) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit6__ANONYMOUS_s546) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit7__ANONYMOUS_s547) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit8__ANONYMOUS_s548) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit9__ANONYMOUS_s549) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit10__ANONYMOUS_s536) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit11__ANONYMOUS_s537) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit12__ANONYMOUS_s538) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit13__ANONYMOUS_s539) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceInit14__ANONYMOUS_s540) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceBaseCase0__ANONYMOUS_s533) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceReturnList0__ANONYMOUS_s556) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceReturnList1__ANONYMOUS_s557) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  if (choiceReturnList2__ANONYMOUS_s558) {
    nchanges__ANONYMOUS_s559 = nchanges__ANONYMOUS_s559 + 1;
  }
  /* minimize(nchanges__ANONYMOUS_s559) */;
}
void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out) {
  MultiType*  _out_s42=NULL;
  len(poly_list_int, _out_s42);
  bool  _out_s44=0;
  applyCompOp(_out_s42, MultiType::create(1, 0, NULL), 3, _out_s44);
  if (_out_s44) {
    MultiType* _tt1[1] = {MultiType::create(0, 0, NULL)};
    _out = MultiType::create(0, 1, MTList::create(1, _tt1, 1));
    return;
  }
  MultiType*  result=NULL;
  assignMT(result, MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0)));
  MultiType*  _out_s46=NULL;
  len(poly_list_int, _out_s46);
  MultiType*  _out_s48=NULL;
  range2(MultiType::create(1, 0, NULL), _out_s46, _out_s48);
  foreach_body01(_out_s48, result, poly_list_int);
  _out = result;
  return;
}
void fuzzBaseCase0(bool& x, bool& choiceBaseCase0__ANONYMOUS_s500) {
  choiceBaseCase0__ANONYMOUS_s500 = 1;
  x = 1;
}
void listComp22(MultiType* poly, MultiType*& _out, bool& choiceInit4__ANONYMOUS_s568, bool& choiceInit5__ANONYMOUS_s648, bool& choiceInit6__ANONYMOUS_s614, bool& choiceOperator2__ANONYMOUS_s677) {
  _out = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0));
  MultiType*  __sa0_s126=NULL;
  fuzzInit4(MultiType::create(1, 0, NULL), __sa0_s126, choiceInit4__ANONYMOUS_s568);
  MultiType*  __sa0_s128=NULL;
  fuzzInit6(poly, __sa0_s128, choiceInit6__ANONYMOUS_s614);
  MultiType*  __sa0_s130=NULL;
  len(__sa0_s128, __sa0_s130);
  MultiType*  __sa0_s132=NULL;
  fuzzInit5(__sa0_s130, __sa0_s132, choiceInit5__ANONYMOUS_s648);
  MultiType*  __sa0_s134=NULL;
  range2(__sa0_s126, __sa0_s132, __sa0_s134);
  bool  __sa0=0;
  __sa0 = (0) < (__sa0_s134->lst->len);
  int  ilcomp0=0;
  while (__sa0) {
    MultiType*  i_s136=NULL;
    fuzzInit4(MultiType::create(1, 0, NULL), i_s136, choiceInit4__ANONYMOUS_s568);
    MultiType*  i_s138=NULL;
    fuzzInit6(poly, i_s138, choiceInit6__ANONYMOUS_s614);
    MultiType*  i_s140=NULL;
    len(i_s138, i_s140);
    MultiType*  i_s142=NULL;
    fuzzInit5(i_s140, i_s142, choiceInit5__ANONYMOUS_s648);
    MultiType*  i_s144=NULL;
    range2(i_s136, i_s142, i_s144);
    MultiType*  i=NULL;
    i = (i_s144->lst->listValues[ilcomp0]);
    MultiType*  _out_s146=NULL;
    subscriptMTi(poly, i, _out_s146);
    MultiType*  _out_s148=NULL;
    fuzzOperator2(_out_s146, i, 2, _out_s148, choiceOperator2__ANONYMOUS_s677);
    appendList(_out, _out_s148);
    ilcomp0 = ilcomp0 + 1;
    MultiType*  __sa0_s150=NULL;
    fuzzInit4(MultiType::create(1, 0, NULL), __sa0_s150, choiceInit4__ANONYMOUS_s568);
    MultiType*  __sa0_s152=NULL;
    fuzzInit6(poly, __sa0_s152, choiceInit6__ANONYMOUS_s614);
    MultiType*  __sa0_s154=NULL;
    len(__sa0_s152, __sa0_s154);
    MultiType*  __sa0_s156=NULL;
    fuzzInit5(__sa0_s154, __sa0_s156, choiceInit5__ANONYMOUS_s648);
    MultiType*  __sa0_s158=NULL;
    range2(__sa0_s150, __sa0_s156, __sa0_s158);
    __sa0 = (ilcomp0) < (__sa0_s158->lst->len);
  }
  return;
}
void fuzzAssign1(MultiType* i, MultiType*& _out, bool& choiceAssign1__ANONYMOUS_s511) {
  _out = i;
  return;
}
void assignMT(MultiType*& lhs, MultiType* rhs) {
  lhs = rhs;
}
void subscriptMTl(MultiType* list, MultiType* leftIndex, MultiType*& _out) {
  MultiType*  _out_s172=NULL;
  subscriptMTul(list, leftIndex, MultiType::create(list->lst->len, 0, NULL), _out_s172);
  _out = _out_s172;
  return;
}
void fuzzAssign2(MultiType* i, MultiType*& _out, bool& choiceAssign2__ANONYMOUS_s519) {
  _out = i;
  return;
}
void fuzzReturnList1(MultiType* a, MultiType*& _out, bool& choiceReturnList1__ANONYMOUS_s502) {
  _out = a;
  return;
}
void len(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (1));;
  _out = MultiType::create(x->lst->len, 0, NULL);
  return;
}
void applyCompOp(MultiType* left, MultiType* right, int compop, bool& _out) {
  _out = 0;
  if ((left->flag) != (right->flag)) {
    _out = 0;
    return;
  }
  if ((compop) == (0)) {
    bool  _out_s76=0;
    applyEQCompOp(left, right, _out_s76);
    _out = _out_s76;
    return;
  } else {
    if ((compop) == (1)) {
      bool  _out_s78=0;
      applyNEQCompOp(left, right, _out_s78);
      _out = _out_s78;
      return;
    } else {
      if ((compop) == (2)) {
        bool  _out_s80=0;
        applyLTCompOp(left, right, _out_s80);
        _out = _out_s80;
        return;
      } else {
        if ((compop) == (3)) {
          bool  _out_s82=0;
          applyLTECompOp(left, right, _out_s82);
          _out = _out_s82;
          return;
        } else {
          if ((compop) == (4)) {
            bool  _out_s84=0;
            applyGTCompOp(left, right, _out_s84);
            _out = _out_s84;
            return;
          } else {
            if ((compop) == (5)) {
              bool  _out_s86=0;
              applyGTECompOp(left, right, _out_s86);
              _out = _out_s86;
              return;
            }
          }
        }
      }
    }
  }
}
void range2(MultiType* x, MultiType* y, MultiType*& _out) {
  assert ((x->flag) == (0));;
  assert ((y->flag) == (0));;
  int  lb=x->val;
  int  ub=y->val;
  int  newLen=ub - lb;
  MultiType**  A= new MultiType* [newLen]; CopyArr<MultiType* >(A,NULL, newLen);
  for (int  i=lb;(i) < (ub);i = i + 1){
    (A[i - lb]) = MultiType::create(i, 0, NULL);
  }
  _out = MultiType::create(0, 1, MTList::create(newLen, A, newLen));
  delete[] A;
  return;
}
void foreach_body01(MultiType* lst, MultiType*& result0, MultiType* poly_list_int1) {
  assert ((lst->flag) == (1));;
  MTList*  ma=lst->lst;
  bool  __sa1=(0) < (ma->len);
  int  i101=0;
  while (__sa1) {
    body01((ma->listValues[i101]), result0, poly_list_int1);
    i101 = i101 + 1;
    __sa1 = (i101) < (ma->len);
  }
}
void fuzzInit4(MultiType* i, MultiType*& _out, bool& choiceInit4__ANONYMOUS_s516) {
  choiceInit4__ANONYMOUS_s516 = 1;
  MultiType*  _out_s234=NULL;
  setZero(i, _out_s234);
  _out = _out_s234;
  return;
}
void fuzzInit6(MultiType* i, MultiType*& _out, bool& choiceInit6__ANONYMOUS_s509) {
  _out = i;
  return;
}
void fuzzInit5(MultiType* i, MultiType*& _out, bool& choiceInit5__ANONYMOUS_s501) {
  _out = i;
  return;
}
void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out) {
  assert ((list->flag) == (1));;
  assert ((index->flag) == (0));;
  int  indexval=0;
  if ((index->val) < (0)) {
    indexval = index->val + list->lst->len;
  } else {
    indexval = index->val;
  }
  assert ((indexval) < (list->lst->len));;
  _out = (list->lst->listValues[indexval]);
  return;
}
void fuzzOperator2(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator2__ANONYMOUS_s518) {
  MultiType*  _out_s240=NULL;
  applyBinOp(lhs, rhs, op, _out_s240);
  _out = _out_s240;
  return;
}
void appendList(MultiType*& left, MultiType* right) {
  assert ((left->flag) == (1));;
  int  newLen=left->lst->len + 1;
  bool  __sa8=(0) < (left->lst->len);
  MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,NULL, newLen);
  int  i=0;
  while (__sa8) {
    (newListValues[i]) = (left->lst->listValues[i]);
    i = i + 1;
    __sa8 = (i) < (left->lst->len);
  }
  (newListValues[left->lst->len]) = right;
  left = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen));
}
void subscriptMTul(MultiType* list, MultiType* leftIndex, MultiType* rightIndex, MultiType*& _out) {
  assert ((list->flag) == (1));;
  assert ((leftIndex->flag) == (0));;
  assert ((rightIndex->flag) == (0));;
  int  leftVal=0;
  int  rightVal=0;
  if ((rightIndex->val) >= (0)) {
    rightVal = rightIndex->val;
  } else {
    rightVal = list->lst->len + rightIndex->val;
  }
  if ((leftIndex->val) >= (0)) {
    leftVal = leftIndex->val;
  } else {
    leftVal = list->lst->len + leftIndex->val;
  }
  int  newLen=rightVal - leftVal;
  MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,NULL, newLen);
  for (int  i=leftVal;(i) < (rightVal);i = i + 1){
    (newListValues[i - leftVal]) = (list->lst->listValues[i]);
  }
  _out = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen));
  delete[] newListValues;
  return;
}
void applyEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) != (right->flag)) {
    _out = 0;
    return;
  }
  if ((left->flag) == (1)) {
    bool  _out_s114=0;
    applyEQCompOpList(left, right, _out_s114);
    _out = _out_s114;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s116=0;
    applyEQCompOpInt(left, right, _out_s116);
    _out = _out_s116;
    return;
  }
  _out = 0;
  return;
}
void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s112=0;
  applyEQCompOp(left, right, _out_s112);
  _out = !(_out_s112);
  return;
}
void applyLTCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s90=0;
    applyLTCompOpList(left, right, _out_s90);
    _out = _out_s90;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s92=0;
    applyLTCompOpInt(left, right, _out_s92);
    _out = _out_s92;
    return;
  }
  _out = 0;
  return;
}
void applyLTECompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s102=0;
    applyLTECompOpList(left, right, _out_s102);
    _out = _out_s102;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s104=0;
    applyLTECompOpInt(left, right, _out_s104);
    _out = _out_s104;
    return;
  }
  _out = 0;
  return;
}
void applyGTCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s100=0;
  applyLTECompOp(left, right, _out_s100);
  _out = !(_out_s100);
  return;
}
void applyGTECompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s88=0;
  applyLTCompOp(left, right, _out_s88);
  _out = !(_out_s88);
  return;
}
void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int) {
  MultiType*  _out_s36=NULL;
  subscriptMTi(poly_list_int, i, _out_s36);
  MultiType*  _out_s38=NULL;
  applyBinOp(i, _out_s36, 2, _out_s38);
  MultiType*  _out_s40=NULL;
  MultiType* _tt2[1] = {_out_s38};
  applyBinOp(result, MultiType::create(0, 1, MTList::create(1, _tt2, 1)), 0, _out_s40);
  assignMT(result, _out_s40);
}
void setZero(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (0));;
  _out = MultiType::create(0, 0, NULL);
  return;
}
void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out) {
  _out = NULL;
  if ((op) == (0)) {
    MultiType*  _out_s50=NULL;
    applyAddBinOp(left, right, _out_s50);
    _out = _out_s50;
    return;
  } else {
    if ((op) == (1)) {
      MultiType*  _out_s52=NULL;
      applySubBinOp(left, right, _out_s52);
      _out = _out_s52;
      return;
    } else {
      if ((op) == (2)) {
        MultiType*  _out_s54=NULL;
        applyMulBinOp(left, right, _out_s54);
        _out = _out_s54;
        return;
      } else {
        if ((op) == (3)) {
          MultiType*  _out_s56=NULL;
          applyDivBinOp(left, right, _out_s56);
          _out = _out_s56;
          return;
        } else {
          if ((op) == (4)) {
            MultiType*  _out_s58=NULL;
            applyPowBinOp(left, right, _out_s58);
            _out = _out_s58;
            return;
          } else {
            if ((op) == (5)) {
              MultiType*  _out_s60=NULL;
              applyModBinOp(left, right, _out_s60);
              _out = _out_s60;
              return;
            }
          }
        }
      }
    }
  }
}
void applyEQCompOpList(MultiType* left, MultiType* right, bool& _out) {
  if ((left->lst->len) != (right->lst->len)) {
    _out = 0;
    return;
  }
  bool  __sa4=(0) < (left->lst->len);
  int  i=0;
  while (__sa4) {
    bool  _out_s118=0;
    applyEQCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s118);
    if (!(_out_s118)) {
      _out = 0;
      return;
    }
    i = i + 1;
    __sa4 = (i) < (left->lst->len);
  }
  _out = 1;
  return;
}
void applyEQCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) == (right->val);
  return;
}
void applyLTCompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa5_s94=0;
  min(right->lst->len, left->lst->len, __sa5_s94);
  bool  __sa5=0;
  __sa5 = (0) < (__sa5_s94);
  int  i=0;
  while (__sa5) {
    bool  _out_s96=0;
    applyLTCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s96);
    if (!(_out_s96)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa5_s98=0;
    min(right->lst->len, left->lst->len, __sa5_s98);
    __sa5 = (i) < (__sa5_s98);
  }
  _out = 1;
  return;
}
void applyLTCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) < (right->val);
  return;
}
void applyLTECompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa6_s106=0;
  min(right->lst->len, left->lst->len, __sa6_s106);
  bool  __sa6=0;
  __sa6 = (0) < (__sa6_s106);
  int  i=0;
  while (__sa6) {
    bool  _out_s108=0;
    applyLTECompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s108);
    if (!(_out_s108)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa6_s110=0;
    min(right->lst->len, left->lst->len, __sa6_s110);
    __sa6 = (i) < (__sa6_s110);
  }
  _out = 1;
  return;
}
void applyLTECompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) <= (right->val);
  return;
}
void applyAddBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  _out = NULL;
  assert ((left->flag) == (right->flag));;
  if ((left->flag) == (0)) {
    _out = MultiType::create(left->val + right->val, 0, NULL);
    return;
  } else {
    if ((left->flag) == (1)) {
      int  newLen=left->lst->len + right->lst->len;
      MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,left->lst->listValues, newLen, left->lst->len);
      bool  __sa3=(0) < (right->lst->len);
      int  i=0;
      while (__sa3) {
        (newListValues[i + left->lst->len]) = (right->lst->listValues[i]);
        i = i + 1;
        __sa3 = (i) < (right->lst->len);
      }
      _out = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen));
      delete[] newListValues;
      return;
    }
  }
}
void applySubBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  _out = MultiType::create(left->val - right->val, 0, NULL);
  return;
}
void applyMulBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  _out = NULL;
  if (((left->flag) == (0)) && ((right->flag) == (0))) {
    MultiType*  _out_s68=NULL;
    applyMulBinOpInt(left, right, _out_s68);
    _out = _out_s68;
    return;
  }
  if (((left->flag) == (1)) && ((right->flag) == (0))) {
    MultiType*  _out_s70=NULL;
    applyMulBinOpList(left, right, _out_s70);
    _out = _out_s70;
    return;
  }
  if (((left->flag) == (0)) && ((right->flag) == (1))) {
    MultiType*  _out_s72=NULL;
    applyMulBinOpList(right, left, _out_s72);
    _out = _out_s72;
    return;
  }
  assert (0);;
}
void applyDivBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s66=0;
  intDiv(left->val, right->val, _out_s66);
  _out = MultiType::create(_out_s66, 0, NULL);
  return;
}
void applyPowBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s64=0;
  intPow(left->val, right->val, _out_s64);
  _out = MultiType::create(_out_s64, 0, NULL);
  return;
}
void applyModBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s62=0;
  intMod(left->val, right->val, _out_s62);
  _out = MultiType::create(_out_s62, 0, NULL);
  return;
}
void min(int a, int b, int& _out) {
  if ((a) >= (b)) {
    _out = b;
    return;
  } else {
    _out = a;
    return;
  }
}
void applyMulBinOpInt(MultiType* left, MultiType* right, MultiType*& _out) {
  int  _out_s74=0;
  intMul(left->val, right->val, _out_s74);
  _out = MultiType::create(_out_s74, 0, NULL);
  return;
}
void applyMulBinOpList(MultiType* left, MultiType* right, MultiType*& _out) {
  if ((right->val) == (0)) {
    _out = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0));
    return;
  }
  int  newLen=left->lst->len * right->val;
  MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,NULL, newLen);
  int  count=0;
  for (int  i=0;(i) < (newLen);i = i + 1){
    (newListValues[i]) = (left->lst->listValues[count]);
    count = count + 1;
    if ((count) == (left->lst->len)) {
      count = 0;
    }
  }
  _out = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen));
  delete[] newListValues;
  return;
}
void intMod(int x, int y, int& _out) {
  _out = x % y;
  return;
}
void intMul(int x, int y, int& _out) {
  _out = x * y;
  return;
}
void intPow(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intDiv(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intMul1(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
