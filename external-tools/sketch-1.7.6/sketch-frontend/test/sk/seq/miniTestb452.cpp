#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb452.h"
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
  int  nchanges__ANONYMOUS_s786=0;
  glblInit_nchanges__ANONYMOUS_s979(nchanges__ANONYMOUS_s786);
  bool  choiceOperator9__ANONYMOUS_s785=0;
  glblInit_choiceOperator9__ANONYMOUS_s971(choiceOperator9__ANONYMOUS_s785);
  bool  choiceOperator8__ANONYMOUS_s784=0;
  glblInit_choiceOperator8__ANONYMOUS_s969(choiceOperator8__ANONYMOUS_s784);
  bool  choiceOperator7__ANONYMOUS_s783=0;
  glblInit_choiceOperator7__ANONYMOUS_s967(choiceOperator7__ANONYMOUS_s783);
  bool  choiceOperator6__ANONYMOUS_s782=0;
  glblInit_choiceOperator6__ANONYMOUS_s965(choiceOperator6__ANONYMOUS_s782);
  bool  choiceOperator5__ANONYMOUS_s781=0;
  glblInit_choiceOperator5__ANONYMOUS_s963(choiceOperator5__ANONYMOUS_s781);
  bool  choiceOperator4__ANONYMOUS_s780=0;
  glblInit_choiceOperator4__ANONYMOUS_s961(choiceOperator4__ANONYMOUS_s780);
  bool  choiceOperator3__ANONYMOUS_s779=0;
  glblInit_choiceOperator3__ANONYMOUS_s959(choiceOperator3__ANONYMOUS_s779);
  bool  choiceOperator2__ANONYMOUS_s778=0;
  glblInit_choiceOperator2__ANONYMOUS_s957(choiceOperator2__ANONYMOUS_s778);
  bool  choiceOperator1__ANONYMOUS_s777=0;
  glblInit_choiceOperator1__ANONYMOUS_s955(choiceOperator1__ANONYMOUS_s777);
  bool  choiceOperator0__ANONYMOUS_s776=0;
  glblInit_choiceOperator0__ANONYMOUS_s953(choiceOperator0__ANONYMOUS_s776);
  bool  choiceInit9__ANONYMOUS_s775=0;
  glblInit_choiceInit9__ANONYMOUS_s951(choiceInit9__ANONYMOUS_s775);
  bool  choiceInit8__ANONYMOUS_s774=0;
  glblInit_choiceInit8__ANONYMOUS_s949(choiceInit8__ANONYMOUS_s774);
  bool  choiceInit7__ANONYMOUS_s773=0;
  glblInit_choiceInit7__ANONYMOUS_s947(choiceInit7__ANONYMOUS_s773);
  bool  choiceInit6__ANONYMOUS_s772=0;
  glblInit_choiceInit6__ANONYMOUS_s945(choiceInit6__ANONYMOUS_s772);
  bool  choiceInit5__ANONYMOUS_s771=0;
  glblInit_choiceInit5__ANONYMOUS_s943(choiceInit5__ANONYMOUS_s771);
  bool  choiceInit4__ANONYMOUS_s770=0;
  glblInit_choiceInit4__ANONYMOUS_s941(choiceInit4__ANONYMOUS_s770);
  bool  choiceInit3__ANONYMOUS_s769=0;
  glblInit_choiceInit3__ANONYMOUS_s939(choiceInit3__ANONYMOUS_s769);
  bool  choiceInit2__ANONYMOUS_s768=0;
  glblInit_choiceInit2__ANONYMOUS_s937(choiceInit2__ANONYMOUS_s768);
  bool  choiceInit1__ANONYMOUS_s767=0;
  glblInit_choiceInit1__ANONYMOUS_s935(choiceInit1__ANONYMOUS_s767);
  bool  choiceInit0__ANONYMOUS_s766=0;
  glblInit_choiceInit0__ANONYMOUS_s933(choiceInit0__ANONYMOUS_s766);
  bool  choiceCompOperator2__ANONYMOUS_s765=0;
  glblInit_choiceCompOperator2__ANONYMOUS_s931(choiceCompOperator2__ANONYMOUS_s765);
  bool  choiceCompOperator1__ANONYMOUS_s764=0;
  glblInit_choiceCompOperator1__ANONYMOUS_s929(choiceCompOperator1__ANONYMOUS_s764);
  bool  choiceCompOperator0__ANONYMOUS_s763=0;
  glblInit_choiceCompOperator0__ANONYMOUS_s927(choiceCompOperator0__ANONYMOUS_s763);
  bool  choiceBaseCase0__ANONYMOUS_s762=0;
  glblInit_choiceBaseCase0__ANONYMOUS_s925(choiceBaseCase0__ANONYMOUS_s762);
  bool  choiceAssign9__ANONYMOUS_s761=0;
  glblInit_choiceAssign9__ANONYMOUS_s923(choiceAssign9__ANONYMOUS_s761);
  bool  choiceAssign8__ANONYMOUS_s760=0;
  glblInit_choiceAssign8__ANONYMOUS_s921(choiceAssign8__ANONYMOUS_s760);
  bool  choiceAssign7__ANONYMOUS_s759=0;
  glblInit_choiceAssign7__ANONYMOUS_s919(choiceAssign7__ANONYMOUS_s759);
  bool  choiceAssign6__ANONYMOUS_s758=0;
  glblInit_choiceAssign6__ANONYMOUS_s917(choiceAssign6__ANONYMOUS_s758);
  bool  choiceAssign5__ANONYMOUS_s757=0;
  glblInit_choiceAssign5__ANONYMOUS_s915(choiceAssign5__ANONYMOUS_s757);
  bool  choiceAssign4__ANONYMOUS_s756=0;
  glblInit_choiceAssign4__ANONYMOUS_s913(choiceAssign4__ANONYMOUS_s756);
  bool  choiceAssign3__ANONYMOUS_s755=0;
  glblInit_choiceAssign3__ANONYMOUS_s911(choiceAssign3__ANONYMOUS_s755);
  bool  choiceAssign2__ANONYMOUS_s754=0;
  glblInit_choiceAssign2__ANONYMOUS_s909(choiceAssign2__ANONYMOUS_s754);
  bool  choiceAssign1__ANONYMOUS_s753=0;
  glblInit_choiceAssign1__ANONYMOUS_s907(choiceAssign1__ANONYMOUS_s753);
  bool  choiceAssign11__ANONYMOUS_s752=0;
  glblInit_choiceAssign11__ANONYMOUS_s905(choiceAssign11__ANONYMOUS_s752);
  bool  choiceAssign10__ANONYMOUS_s751=0;
  glblInit_choiceAssign10__ANONYMOUS_s903(choiceAssign10__ANONYMOUS_s751);
  bool  choiceAssign0__ANONYMOUS_s750=0;
  glblInit_choiceAssign0__ANONYMOUS_s901(choiceAssign0__ANONYMOUS_s750);
  _main(N, poly_list_int, choiceAssign0__ANONYMOUS_s750, choiceAssign10__ANONYMOUS_s751, choiceAssign11__ANONYMOUS_s752, choiceAssign1__ANONYMOUS_s753, choiceAssign2__ANONYMOUS_s754, choiceAssign3__ANONYMOUS_s755, choiceAssign4__ANONYMOUS_s756, choiceAssign5__ANONYMOUS_s757, choiceAssign6__ANONYMOUS_s758, choiceAssign7__ANONYMOUS_s759, choiceAssign8__ANONYMOUS_s760, choiceAssign9__ANONYMOUS_s761, choiceBaseCase0__ANONYMOUS_s762, choiceCompOperator0__ANONYMOUS_s763, choiceCompOperator1__ANONYMOUS_s764, choiceCompOperator2__ANONYMOUS_s765, choiceInit0__ANONYMOUS_s766, choiceInit1__ANONYMOUS_s767, choiceInit2__ANONYMOUS_s768, choiceInit3__ANONYMOUS_s769, choiceInit4__ANONYMOUS_s770, choiceInit5__ANONYMOUS_s771, choiceInit6__ANONYMOUS_s772, choiceInit7__ANONYMOUS_s773, choiceInit8__ANONYMOUS_s774, choiceInit9__ANONYMOUS_s775, choiceOperator0__ANONYMOUS_s776, choiceOperator1__ANONYMOUS_s777, choiceOperator2__ANONYMOUS_s778, choiceOperator3__ANONYMOUS_s779, choiceOperator4__ANONYMOUS_s780, choiceOperator5__ANONYMOUS_s781, choiceOperator6__ANONYMOUS_s782, choiceOperator7__ANONYMOUS_s783, choiceOperator8__ANONYMOUS_s784, choiceOperator9__ANONYMOUS_s785, nchanges__ANONYMOUS_s786);
}
void main__WrapperNospec(int N, int* poly_list_int/* len = N */) {}
void glblInit_choiceAssign0__ANONYMOUS_s901(bool& choiceAssign0__ANONYMOUS_s900) {
  choiceAssign0__ANONYMOUS_s900 = 0;
}
void glblInit_choiceAssign10__ANONYMOUS_s903(bool& choiceAssign10__ANONYMOUS_s902) {
  choiceAssign10__ANONYMOUS_s902 = 0;
}
void glblInit_choiceAssign11__ANONYMOUS_s905(bool& choiceAssign11__ANONYMOUS_s904) {
  choiceAssign11__ANONYMOUS_s904 = 0;
}
void glblInit_choiceAssign1__ANONYMOUS_s907(bool& choiceAssign1__ANONYMOUS_s906) {
  choiceAssign1__ANONYMOUS_s906 = 0;
}
void glblInit_choiceAssign2__ANONYMOUS_s909(bool& choiceAssign2__ANONYMOUS_s908) {
  choiceAssign2__ANONYMOUS_s908 = 0;
}
void glblInit_choiceAssign3__ANONYMOUS_s911(bool& choiceAssign3__ANONYMOUS_s910) {
  choiceAssign3__ANONYMOUS_s910 = 0;
}
void glblInit_choiceAssign4__ANONYMOUS_s913(bool& choiceAssign4__ANONYMOUS_s912) {
  choiceAssign4__ANONYMOUS_s912 = 0;
}
void glblInit_choiceAssign5__ANONYMOUS_s915(bool& choiceAssign5__ANONYMOUS_s914) {
  choiceAssign5__ANONYMOUS_s914 = 0;
}
void glblInit_choiceAssign6__ANONYMOUS_s917(bool& choiceAssign6__ANONYMOUS_s916) {
  choiceAssign6__ANONYMOUS_s916 = 0;
}
void glblInit_choiceAssign7__ANONYMOUS_s919(bool& choiceAssign7__ANONYMOUS_s918) {
  choiceAssign7__ANONYMOUS_s918 = 0;
}
void glblInit_choiceAssign8__ANONYMOUS_s921(bool& choiceAssign8__ANONYMOUS_s920) {
  choiceAssign8__ANONYMOUS_s920 = 0;
}
void glblInit_choiceAssign9__ANONYMOUS_s923(bool& choiceAssign9__ANONYMOUS_s922) {
  choiceAssign9__ANONYMOUS_s922 = 0;
}
void glblInit_choiceBaseCase0__ANONYMOUS_s925(bool& choiceBaseCase0__ANONYMOUS_s924) {
  choiceBaseCase0__ANONYMOUS_s924 = 0;
}
void glblInit_choiceCompOperator0__ANONYMOUS_s927(bool& choiceCompOperator0__ANONYMOUS_s926) {
  choiceCompOperator0__ANONYMOUS_s926 = 0;
}
void glblInit_choiceCompOperator1__ANONYMOUS_s929(bool& choiceCompOperator1__ANONYMOUS_s928) {
  choiceCompOperator1__ANONYMOUS_s928 = 0;
}
void glblInit_choiceCompOperator2__ANONYMOUS_s931(bool& choiceCompOperator2__ANONYMOUS_s930) {
  choiceCompOperator2__ANONYMOUS_s930 = 0;
}
void glblInit_choiceInit0__ANONYMOUS_s933(bool& choiceInit0__ANONYMOUS_s932) {
  choiceInit0__ANONYMOUS_s932 = 0;
}
void glblInit_choiceInit1__ANONYMOUS_s935(bool& choiceInit1__ANONYMOUS_s934) {
  choiceInit1__ANONYMOUS_s934 = 0;
}
void glblInit_choiceInit2__ANONYMOUS_s937(bool& choiceInit2__ANONYMOUS_s936) {
  choiceInit2__ANONYMOUS_s936 = 0;
}
void glblInit_choiceInit3__ANONYMOUS_s939(bool& choiceInit3__ANONYMOUS_s938) {
  choiceInit3__ANONYMOUS_s938 = 0;
}
void glblInit_choiceInit4__ANONYMOUS_s941(bool& choiceInit4__ANONYMOUS_s940) {
  choiceInit4__ANONYMOUS_s940 = 0;
}
void glblInit_choiceInit5__ANONYMOUS_s943(bool& choiceInit5__ANONYMOUS_s942) {
  choiceInit5__ANONYMOUS_s942 = 0;
}
void glblInit_choiceInit6__ANONYMOUS_s945(bool& choiceInit6__ANONYMOUS_s944) {
  choiceInit6__ANONYMOUS_s944 = 0;
}
void glblInit_choiceInit7__ANONYMOUS_s947(bool& choiceInit7__ANONYMOUS_s946) {
  choiceInit7__ANONYMOUS_s946 = 0;
}
void glblInit_choiceInit8__ANONYMOUS_s949(bool& choiceInit8__ANONYMOUS_s948) {
  choiceInit8__ANONYMOUS_s948 = 0;
}
void glblInit_choiceInit9__ANONYMOUS_s951(bool& choiceInit9__ANONYMOUS_s950) {
  choiceInit9__ANONYMOUS_s950 = 0;
}
void glblInit_choiceOperator0__ANONYMOUS_s953(bool& choiceOperator0__ANONYMOUS_s952) {
  choiceOperator0__ANONYMOUS_s952 = 0;
}
void glblInit_choiceOperator1__ANONYMOUS_s955(bool& choiceOperator1__ANONYMOUS_s954) {
  choiceOperator1__ANONYMOUS_s954 = 0;
}
void glblInit_choiceOperator2__ANONYMOUS_s957(bool& choiceOperator2__ANONYMOUS_s956) {
  choiceOperator2__ANONYMOUS_s956 = 0;
}
void glblInit_choiceOperator3__ANONYMOUS_s959(bool& choiceOperator3__ANONYMOUS_s958) {
  choiceOperator3__ANONYMOUS_s958 = 0;
}
void glblInit_choiceOperator4__ANONYMOUS_s961(bool& choiceOperator4__ANONYMOUS_s960) {
  choiceOperator4__ANONYMOUS_s960 = 0;
}
void glblInit_choiceOperator5__ANONYMOUS_s963(bool& choiceOperator5__ANONYMOUS_s962) {
  choiceOperator5__ANONYMOUS_s962 = 0;
}
void glblInit_choiceOperator6__ANONYMOUS_s965(bool& choiceOperator6__ANONYMOUS_s964) {
  choiceOperator6__ANONYMOUS_s964 = 0;
}
void glblInit_choiceOperator7__ANONYMOUS_s967(bool& choiceOperator7__ANONYMOUS_s966) {
  choiceOperator7__ANONYMOUS_s966 = 0;
}
void glblInit_choiceOperator8__ANONYMOUS_s969(bool& choiceOperator8__ANONYMOUS_s968) {
  choiceOperator8__ANONYMOUS_s968 = 0;
}
void glblInit_choiceOperator9__ANONYMOUS_s971(bool& choiceOperator9__ANONYMOUS_s970) {
  choiceOperator9__ANONYMOUS_s970 = 0;
}
void glblInit_falseMT__ANONYMOUS_s973(MultiType*& falseMT__ANONYMOUS_s972) {
  falseMT__ANONYMOUS_s972 = MultiType::create(0, 0, NULL);
}
void glblInit_intTypeMT__ANONYMOUS_s975(MultiType*& intTypeMT__ANONYMOUS_s974) {
  intTypeMT__ANONYMOUS_s974 = MultiType::create(0, 0, NULL);
}
void glblInit_listTypeMT__ANONYMOUS_s977(MultiType*& listTypeMT__ANONYMOUS_s976) {
  listTypeMT__ANONYMOUS_s976 = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0));
}
void glblInit_nchanges__ANONYMOUS_s979(int& nchanges__ANONYMOUS_s978) {
  nchanges__ANONYMOUS_s978 = 0;
}
void glblInit_noneMT__ANONYMOUS_s981(MultiType*& noneMT__ANONYMOUS_s980) {
  noneMT__ANONYMOUS_s980 = MultiType::create(0, 0, NULL);
}
void glblInit_trueMT__ANONYMOUS_s983(MultiType*& trueMT__ANONYMOUS_s982) {
  trueMT__ANONYMOUS_s982 = MultiType::create(1, 0, NULL);
}
void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s861, bool& choiceAssign10__ANONYMOUS_s862, bool& choiceAssign11__ANONYMOUS_s863, bool& choiceAssign1__ANONYMOUS_s864, bool& choiceAssign2__ANONYMOUS_s865, bool& choiceAssign3__ANONYMOUS_s866, bool& choiceAssign4__ANONYMOUS_s867, bool& choiceAssign5__ANONYMOUS_s868, bool& choiceAssign6__ANONYMOUS_s869, bool& choiceAssign7__ANONYMOUS_s870, bool& choiceAssign8__ANONYMOUS_s871, bool& choiceAssign9__ANONYMOUS_s872, bool& choiceBaseCase0__ANONYMOUS_s746, bool& choiceCompOperator0__ANONYMOUS_s873, bool& choiceCompOperator1__ANONYMOUS_s874, bool& choiceCompOperator2__ANONYMOUS_s875, bool& choiceInit0__ANONYMOUS_s876, bool& choiceInit1__ANONYMOUS_s877, bool& choiceInit2__ANONYMOUS_s878, bool& choiceInit3__ANONYMOUS_s879, bool& choiceInit4__ANONYMOUS_s880, bool& choiceInit5__ANONYMOUS_s881, bool& choiceInit6__ANONYMOUS_s882, bool& choiceInit7__ANONYMOUS_s883, bool& choiceInit8__ANONYMOUS_s884, bool& choiceInit9__ANONYMOUS_s885, bool& choiceOperator0__ANONYMOUS_s886, bool& choiceOperator1__ANONYMOUS_s887, bool& choiceOperator2__ANONYMOUS_s888, bool& choiceOperator3__ANONYMOUS_s889, bool& choiceOperator4__ANONYMOUS_s890, bool& choiceOperator5__ANONYMOUS_s797, bool& choiceOperator6__ANONYMOUS_s813, bool& choiceOperator7__ANONYMOUS_s891, bool& choiceOperator8__ANONYMOUS_s892, bool& choiceOperator9__ANONYMOUS_s893, int& nchanges__ANONYMOUS_s894) {
  int*  _out_s33= new int [N]; CopyArr<int >(_out_s33,0, N);
  compute_deriv_driver(N, poly_list_int, _out_s33, choiceAssign0__ANONYMOUS_s861, choiceAssign10__ANONYMOUS_s862, choiceAssign11__ANONYMOUS_s863, choiceAssign1__ANONYMOUS_s864, choiceAssign2__ANONYMOUS_s865, choiceAssign3__ANONYMOUS_s866, choiceAssign4__ANONYMOUS_s867, choiceAssign5__ANONYMOUS_s868, choiceAssign6__ANONYMOUS_s869, choiceAssign7__ANONYMOUS_s870, choiceAssign8__ANONYMOUS_s871, choiceAssign9__ANONYMOUS_s872, choiceBaseCase0__ANONYMOUS_s746, choiceCompOperator0__ANONYMOUS_s873, choiceCompOperator1__ANONYMOUS_s874, choiceCompOperator2__ANONYMOUS_s875, choiceInit0__ANONYMOUS_s876, choiceInit1__ANONYMOUS_s877, choiceInit2__ANONYMOUS_s878, choiceInit3__ANONYMOUS_s879, choiceInit4__ANONYMOUS_s880, choiceInit5__ANONYMOUS_s881, choiceInit6__ANONYMOUS_s882, choiceInit7__ANONYMOUS_s883, choiceInit8__ANONYMOUS_s884, choiceInit9__ANONYMOUS_s885, choiceOperator0__ANONYMOUS_s886, choiceOperator1__ANONYMOUS_s887, choiceOperator2__ANONYMOUS_s888, choiceOperator3__ANONYMOUS_s889, choiceOperator4__ANONYMOUS_s890, choiceOperator5__ANONYMOUS_s797, choiceOperator6__ANONYMOUS_s813, choiceOperator7__ANONYMOUS_s891, choiceOperator8__ANONYMOUS_s892, choiceOperator9__ANONYMOUS_s893, nchanges__ANONYMOUS_s894);
  int*  _out_s35= new int [N]; CopyArr<int >(_out_s35,0, N);
  compute_deriv_teacher_list_int_driver(N, poly_list_int, _out_s35);
  assert (arrCompare(_out_s33, N, _out_s35, N) && ((N) == (N)));;
  delete[] _out_s33;
  delete[] _out_s35;
}
void compute_deriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s815, bool& choiceAssign10__ANONYMOUS_s816, bool& choiceAssign11__ANONYMOUS_s817, bool& choiceAssign1__ANONYMOUS_s818, bool& choiceAssign2__ANONYMOUS_s819, bool& choiceAssign3__ANONYMOUS_s820, bool& choiceAssign4__ANONYMOUS_s821, bool& choiceAssign5__ANONYMOUS_s822, bool& choiceAssign6__ANONYMOUS_s823, bool& choiceAssign7__ANONYMOUS_s824, bool& choiceAssign8__ANONYMOUS_s825, bool& choiceAssign9__ANONYMOUS_s826, bool& choiceBaseCase0__ANONYMOUS_s827, bool& choiceCompOperator0__ANONYMOUS_s828, bool& choiceCompOperator1__ANONYMOUS_s829, bool& choiceCompOperator2__ANONYMOUS_s830, bool& choiceInit0__ANONYMOUS_s831, bool& choiceInit1__ANONYMOUS_s832, bool& choiceInit2__ANONYMOUS_s833, bool& choiceInit3__ANONYMOUS_s834, bool& choiceInit4__ANONYMOUS_s835, bool& choiceInit5__ANONYMOUS_s836, bool& choiceInit6__ANONYMOUS_s837, bool& choiceInit7__ANONYMOUS_s838, bool& choiceInit8__ANONYMOUS_s839, bool& choiceInit9__ANONYMOUS_s840, bool& choiceOperator0__ANONYMOUS_s841, bool& choiceOperator1__ANONYMOUS_s842, bool& choiceOperator2__ANONYMOUS_s843, bool& choiceOperator3__ANONYMOUS_s844, bool& choiceOperator4__ANONYMOUS_s845, bool& choiceOperator5__ANONYMOUS_s747, bool& choiceOperator6__ANONYMOUS_s846, bool& choiceOperator7__ANONYMOUS_s847, bool& choiceOperator8__ANONYMOUS_s848, bool& choiceOperator9__ANONYMOUS_s849, int& nchanges__ANONYMOUS_s850) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s131=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s131);
  MultiType*  result1_s133=NULL;
  compute_deriv(poly_list_intMT_s131, result1_s133, choiceBaseCase0__ANONYMOUS_s827, choiceInit1__ANONYMOUS_s832, choiceOperator5__ANONYMOUS_s747, choiceOperator6__ANONYMOUS_s846);
  int*  result_s135= new int [N]; CopyArr<int >(result_s135,0, N);
  computeArrayFromMT(N, result1_s133, result_s135);
  calculateChanges(choiceAssign0__ANONYMOUS_s815, choiceAssign10__ANONYMOUS_s816, choiceAssign11__ANONYMOUS_s817, choiceAssign1__ANONYMOUS_s818, choiceAssign2__ANONYMOUS_s819, choiceAssign3__ANONYMOUS_s820, choiceAssign4__ANONYMOUS_s821, choiceAssign5__ANONYMOUS_s822, choiceAssign6__ANONYMOUS_s823, choiceAssign7__ANONYMOUS_s824, choiceAssign8__ANONYMOUS_s825, choiceAssign9__ANONYMOUS_s826, choiceBaseCase0__ANONYMOUS_s827, choiceCompOperator0__ANONYMOUS_s828, choiceCompOperator1__ANONYMOUS_s829, choiceCompOperator2__ANONYMOUS_s830, choiceInit0__ANONYMOUS_s831, choiceInit1__ANONYMOUS_s832, choiceInit2__ANONYMOUS_s833, choiceInit3__ANONYMOUS_s834, choiceInit4__ANONYMOUS_s835, choiceInit5__ANONYMOUS_s836, choiceInit6__ANONYMOUS_s837, choiceInit7__ANONYMOUS_s838, choiceInit8__ANONYMOUS_s839, choiceInit9__ANONYMOUS_s840, choiceOperator0__ANONYMOUS_s841, choiceOperator1__ANONYMOUS_s842, choiceOperator2__ANONYMOUS_s843, choiceOperator3__ANONYMOUS_s844, choiceOperator4__ANONYMOUS_s845, choiceOperator5__ANONYMOUS_s747, choiceOperator6__ANONYMOUS_s846, choiceOperator7__ANONYMOUS_s847, choiceOperator8__ANONYMOUS_s848, choiceOperator9__ANONYMOUS_s849, nchanges__ANONYMOUS_s850);
  CopyArr<int >(_out,result_s135, N, N);
  delete[] result_s135;
  return;
}
void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s37=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s37);
  MultiType*  result1_s39=NULL;
  compute_deriv_teacher_list_int(poly_list_intMT_s37, result1_s39);
  int*  result_s41= new int [N]; CopyArr<int >(result_s41,0, N);
  computeArrayFromMT(N, result1_s39, result_s41);
  CopyArr<int >(_out,result_s41, N, N);
  delete[] result_s41;
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
void compute_deriv(MultiType* poly, MultiType*& _out, bool& choiceBaseCase0__ANONYMOUS_s896, bool& choiceInit1__ANONYMOUS_s803, bool& choiceOperator5__ANONYMOUS_s798, bool& choiceOperator6__ANONYMOUS_s790) {
  bool  addBaseCase0=0;
  fuzzBaseCase0(addBaseCase0, choiceBaseCase0__ANONYMOUS_s896);
  if (addBaseCase0) {
    if ((poly->lst->len) <= (1)) {
      MultiType* _tt0[1] = {MultiType::create(0, 0, NULL)};
      _out = MultiType::create(0, 1, MTList::create(1, _tt0, 1));
      return;
    }
  }
  MultiType*  power=NULL;
  assignMT(power, MultiType::create(1, 0, NULL));
  MultiType*  total=NULL;
  assignMT(total, MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0)));
  MultiType*  __sa1_s137=NULL;
  fuzzInit1(poly, __sa1_s137, choiceInit1__ANONYMOUS_s803);
  MultiType*  __sa1_s139=NULL;
  len(__sa1_s137, __sa1_s139);
  bool  __sa1_s141=0;
  applyCompOp(power, __sa1_s139, 2, __sa1_s141);
  bool  __sa1=0;
  __sa1 = __sa1_s141;
  while (__sa1) {
    MultiType*  _out_s143=NULL;
    subscriptMTi(poly, power, _out_s143);
    MultiType*  _out_s145=NULL;
    fuzzOperator5(_out_s143, power, 2, _out_s145, choiceOperator5__ANONYMOUS_s798);
    MultiType*  _out_s147=NULL;
    MultiType* _tt1[1] = {_out_s145};
    applyBinOp(total, MultiType::create(0, 1, MTList::create(1, _tt1, 1)), 0, _out_s147);
    assignMT(total, _out_s147);
    MultiType*  _out_s149=NULL;
    fuzzOperator6(power, MultiType::create(1, 0, NULL), 0, _out_s149, choiceOperator6__ANONYMOUS_s790);
    assignMT(power, _out_s149);
    MultiType*  __sa1_s151=NULL;
    fuzzInit1(poly, __sa1_s151, choiceInit1__ANONYMOUS_s803);
    MultiType*  __sa1_s153=NULL;
    len(__sa1_s151, __sa1_s153);
    bool  __sa1_s155=0;
    applyCompOp(power, __sa1_s153, 2, __sa1_s155);
    __sa1 = __sa1_s155;
  }
  _out = total;
  return;
}
void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */) {
  CopyArr<int >(_out,1, N);
  assert ((a->flag) == (1));;
  assert ((a->lst->len) <= (N));;
  bool  __sa17=(0) < (a->lst->len);
  int  i=0;
  while (__sa17) {
    assert (((a->lst->listValues[i])->flag) == (0));;
    (_out[i]) = (a->lst->listValues[i])->val;
    i = i + 1;
    __sa17 = (i) < (a->lst->len);
  }
  return;
}
void calculateChanges(bool& choiceAssign0__ANONYMOUS_s667, bool& choiceAssign10__ANONYMOUS_s668, bool& choiceAssign11__ANONYMOUS_s669, bool& choiceAssign1__ANONYMOUS_s670, bool& choiceAssign2__ANONYMOUS_s671, bool& choiceAssign3__ANONYMOUS_s672, bool& choiceAssign4__ANONYMOUS_s673, bool& choiceAssign5__ANONYMOUS_s674, bool& choiceAssign6__ANONYMOUS_s675, bool& choiceAssign7__ANONYMOUS_s676, bool& choiceAssign8__ANONYMOUS_s677, bool& choiceAssign9__ANONYMOUS_s678, bool& choiceBaseCase0__ANONYMOUS_s679, bool& choiceCompOperator0__ANONYMOUS_s680, bool& choiceCompOperator1__ANONYMOUS_s681, bool& choiceCompOperator2__ANONYMOUS_s682, bool& choiceInit0__ANONYMOUS_s683, bool& choiceInit1__ANONYMOUS_s684, bool& choiceInit2__ANONYMOUS_s685, bool& choiceInit3__ANONYMOUS_s686, bool& choiceInit4__ANONYMOUS_s687, bool& choiceInit5__ANONYMOUS_s688, bool& choiceInit6__ANONYMOUS_s689, bool& choiceInit7__ANONYMOUS_s690, bool& choiceInit8__ANONYMOUS_s691, bool& choiceInit9__ANONYMOUS_s692, bool& choiceOperator0__ANONYMOUS_s693, bool& choiceOperator1__ANONYMOUS_s694, bool& choiceOperator2__ANONYMOUS_s695, bool& choiceOperator3__ANONYMOUS_s696, bool& choiceOperator4__ANONYMOUS_s697, bool& choiceOperator5__ANONYMOUS_s698, bool& choiceOperator6__ANONYMOUS_s699, bool& choiceOperator7__ANONYMOUS_s700, bool& choiceOperator8__ANONYMOUS_s701, bool& choiceOperator9__ANONYMOUS_s702, int& nchanges__ANONYMOUS_s703) {
  if (choiceAssign0__ANONYMOUS_s667) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign1__ANONYMOUS_s670) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign2__ANONYMOUS_s671) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign3__ANONYMOUS_s672) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign4__ANONYMOUS_s673) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign5__ANONYMOUS_s674) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign6__ANONYMOUS_s675) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign7__ANONYMOUS_s676) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign8__ANONYMOUS_s677) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign9__ANONYMOUS_s678) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign10__ANONYMOUS_s668) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceAssign11__ANONYMOUS_s669) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator0__ANONYMOUS_s693) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator1__ANONYMOUS_s694) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator2__ANONYMOUS_s695) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator3__ANONYMOUS_s696) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator4__ANONYMOUS_s697) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator5__ANONYMOUS_s698) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator6__ANONYMOUS_s699) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator7__ANONYMOUS_s700) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator8__ANONYMOUS_s701) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceOperator9__ANONYMOUS_s702) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceCompOperator0__ANONYMOUS_s680) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceCompOperator1__ANONYMOUS_s681) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceCompOperator2__ANONYMOUS_s682) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit0__ANONYMOUS_s683) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit1__ANONYMOUS_s684) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit2__ANONYMOUS_s685) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit3__ANONYMOUS_s686) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit4__ANONYMOUS_s687) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit5__ANONYMOUS_s688) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit6__ANONYMOUS_s689) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit7__ANONYMOUS_s690) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit8__ANONYMOUS_s691) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceInit9__ANONYMOUS_s692) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  if (choiceBaseCase0__ANONYMOUS_s679) {
    nchanges__ANONYMOUS_s703 = nchanges__ANONYMOUS_s703 + 1;
  }
  /* minimize(nchanges__ANONYMOUS_s703) */;
}
void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out) {
  MultiType*  _out_s49=NULL;
  len(poly_list_int, _out_s49);
  bool  _out_s51=0;
  applyCompOp(_out_s49, MultiType::create(1, 0, NULL), 3, _out_s51);
  if (_out_s51) {
    MultiType* _tt2[1] = {MultiType::create(0, 0, NULL)};
    _out = MultiType::create(0, 1, MTList::create(1, _tt2, 1));
    return;
  }
  MultiType*  result=NULL;
  assignMT(result, MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0)));
  MultiType*  _out_s53=NULL;
  len(poly_list_int, _out_s53);
  MultiType*  _out_s55=NULL;
  range2(MultiType::create(1, 0, NULL), _out_s53, _out_s55);
  foreach_body01(_out_s55, result, poly_list_int);
  _out = result;
  return;
}
void fuzzBaseCase0(bool& x, bool& choiceBaseCase0__ANONYMOUS_s723) {
  choiceBaseCase0__ANONYMOUS_s723 = 1;
  x = 1;
}
void assignMT(MultiType*& lhs, MultiType* rhs) {
  lhs = rhs;
}
void fuzzInit1(MultiType* i, MultiType*& _out, bool& choiceInit1__ANONYMOUS_s740) {
  _out = i;
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
    bool  _out_s87=0;
    applyEQCompOp(left, right, _out_s87);
    _out = _out_s87;
    return;
  } else {
    if ((compop) == (1)) {
      bool  _out_s89=0;
      applyNEQCompOp(left, right, _out_s89);
      _out = _out_s89;
      return;
    } else {
      if ((compop) == (2)) {
        bool  _out_s91=0;
        applyLTCompOp(left, right, _out_s91);
        _out = _out_s91;
        return;
      } else {
        if ((compop) == (3)) {
          bool  _out_s93=0;
          applyLTECompOp(left, right, _out_s93);
          _out = _out_s93;
          return;
        } else {
          if ((compop) == (4)) {
            bool  _out_s95=0;
            applyGTCompOp(left, right, _out_s95);
            _out = _out_s95;
            return;
          } else {
            if ((compop) == (5)) {
              bool  _out_s97=0;
              applyGTECompOp(left, right, _out_s97);
              _out = _out_s97;
              return;
            }
          }
        }
      }
    }
  }
}
void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out) {
  assert ((list->flag) == (1));;
  assert ((index->flag) == (0));;
  assert ((index->val) < (list->lst->len));;
  _out = (list->lst->listValues[index->val]);
  return;
}
void fuzzOperator5(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator5__ANONYMOUS_s707) {
  MultiType*  _out_s179=NULL;
  applyBinOp(lhs, rhs, op, _out_s179);
  _out = _out_s179;
  return;
}
void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out) {
  _out = NULL;
  if ((op) == (0)) {
    MultiType*  _out_s57=NULL;
    applyAddBinOp(left, right, _out_s57);
    _out = _out_s57;
    return;
  } else {
    if ((op) == (1)) {
      MultiType*  _out_s59=NULL;
      applySubBinOp(left, right, _out_s59);
      _out = _out_s59;
      return;
    } else {
      if ((op) == (2)) {
        MultiType*  _out_s61=NULL;
        applyMulBinOp(left, right, _out_s61);
        _out = _out_s61;
        return;
      } else {
        if ((op) == (3)) {
          MultiType*  _out_s63=NULL;
          applyDivBinOp(left, right, _out_s63);
          _out = _out_s63;
          return;
        } else {
          if ((op) == (4)) {
            MultiType*  _out_s65=NULL;
            applyPowBinOp(left, right, _out_s65);
            _out = _out_s65;
            return;
          } else {
            if ((op) == (5)) {
              MultiType*  _out_s67=NULL;
              applyModBinOp(left, right, _out_s67);
              _out = _out_s67;
              return;
            }
          }
        }
      }
    }
  }
}
void fuzzOperator6(MultiType* lhs, MultiType* rhs, int op, MultiType*& _out, bool& choiceOperator6__ANONYMOUS_s732) {
  MultiType*  _out_s171=NULL;
  applyBinOp(lhs, rhs, op, _out_s171);
  _out = _out_s171;
  return;
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
  bool  __sa3=(0) < (ma->len);
  int  i101=0;
  while (__sa3) {
    body01((ma->listValues[i101]), result0, poly_list_int1);
    i101 = i101 + 1;
    __sa3 = (i101) < (ma->len);
  }
}
void applyEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) != (right->flag)) {
    _out = 0;
    return;
  }
  if ((left->flag) == (1)) {
    bool  _out_s125=0;
    applyEQCompOpList(left, right, _out_s125);
    _out = _out_s125;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s127=0;
    applyEQCompOpInt(left, right, _out_s127);
    _out = _out_s127;
    return;
  }
  _out = 0;
  return;
}
void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s123=0;
  applyEQCompOp(left, right, _out_s123);
  _out = !(_out_s123);
  return;
}
void applyLTCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s101=0;
    applyLTCompOpList(left, right, _out_s101);
    _out = _out_s101;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s103=0;
    applyLTCompOpInt(left, right, _out_s103);
    _out = _out_s103;
    return;
  }
  _out = 0;
  return;
}
void applyLTECompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s113=0;
    applyLTECompOpList(left, right, _out_s113);
    _out = _out_s113;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s115=0;
    applyLTECompOpInt(left, right, _out_s115);
    _out = _out_s115;
    return;
  }
  _out = 0;
  return;
}
void applyGTCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s111=0;
  applyLTECompOp(left, right, _out_s111);
  _out = !(_out_s111);
  return;
}
void applyGTECompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s99=0;
  applyLTCompOp(left, right, _out_s99);
  _out = !(_out_s99);
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
      bool  __sa7=(0) < (right->lst->len);
      int  i=0;
      while (__sa7) {
        (newListValues[i + left->lst->len]) = (right->lst->listValues[i]);
        i = i + 1;
        __sa7 = (i) < (right->lst->len);
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
    MultiType*  _out_s75=NULL;
    applyMulBinOpInt(left, right, _out_s75);
    _out = _out_s75;
    return;
  }
  if (((left->flag) == (1)) && ((right->flag) == (0))) {
    MultiType*  _out_s77=NULL;
    applyMulBinOpList(left, right, _out_s77);
    _out = _out_s77;
    return;
  }
  if (((left->flag) == (0)) && ((right->flag) == (1))) {
    MultiType*  _out_s79=NULL;
    applyMulBinOpList(right, left, _out_s79);
    _out = _out_s79;
    return;
  }
  assert (0);;
}
void applyDivBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s73=0;
  intDiv(left->val, right->val, _out_s73);
  _out = MultiType::create(_out_s73, 0, NULL);
  return;
}
void applyPowBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s71=0;
  intPow(left->val, right->val, _out_s71);
  _out = MultiType::create(_out_s71, 0, NULL);
  return;
}
void applyModBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s69=0;
  intMod(left->val, right->val, _out_s69);
  _out = MultiType::create(_out_s69, 0, NULL);
  return;
}
void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int) {
  MultiType*  _out_s43=NULL;
  subscriptMTi(poly_list_int, i, _out_s43);
  MultiType*  _out_s45=NULL;
  applyBinOp(i, _out_s43, 2, _out_s45);
  MultiType*  _out_s47=NULL;
  MultiType* _tt3[1] = {_out_s45};
  applyBinOp(result, MultiType::create(0, 1, MTList::create(1, _tt3, 1)), 0, _out_s47);
  assignMT(result, _out_s47);
}
void applyEQCompOpList(MultiType* left, MultiType* right, bool& _out) {
  if ((left->lst->len) != (right->lst->len)) {
    _out = 0;
    return;
  }
  bool  __sa8=(0) < (left->lst->len);
  int  i=0;
  while (__sa8) {
    bool  _out_s129=0;
    applyEQCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s129);
    if (!(_out_s129)) {
      _out = 0;
      return;
    }
    i = i + 1;
    __sa8 = (i) < (left->lst->len);
  }
  _out = 1;
  return;
}
void applyEQCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) == (right->val);
  return;
}
void applyLTCompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa9_s105=0;
  min(right->lst->len, left->lst->len, __sa9_s105);
  bool  __sa9=0;
  __sa9 = (0) < (__sa9_s105);
  int  i=0;
  while (__sa9) {
    bool  _out_s107=0;
    applyLTCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s107);
    if (!(_out_s107)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa9_s109=0;
    min(right->lst->len, left->lst->len, __sa9_s109);
    __sa9 = (i) < (__sa9_s109);
  }
  _out = 1;
  return;
}
void applyLTCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) < (right->val);
  return;
}
void applyLTECompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa10_s117=0;
  min(right->lst->len, left->lst->len, __sa10_s117);
  bool  __sa10=0;
  __sa10 = (0) < (__sa10_s117);
  int  i=0;
  while (__sa10) {
    bool  _out_s119=0;
    applyLTECompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s119);
    if (!(_out_s119)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa10_s121=0;
    min(right->lst->len, left->lst->len, __sa10_s121);
    __sa10 = (i) < (__sa10_s121);
  }
  _out = 1;
  return;
}
void applyLTECompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) <= (right->val);
  return;
}
void applyMulBinOpInt(MultiType* left, MultiType* right, MultiType*& _out) {
  int  _out_s81=0;
  intMul(left->val, right->val, _out_s81);
  _out = MultiType::create(_out_s81, 0, NULL);
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
void min(int a, int b, int& _out) {
  if ((a) >= (b)) {
    _out = b;
    return;
  } else {
    _out = a;
    return;
  }
}
void intMul(int x, int y, int& _out) {
  if ((x) > (y)) {
    int  _out_s83=0;
    intMul1(x, y, _out_s83);
    _out = _out_s83;
    return;
  } else {
    int  _out_s85=0;
    intMul1(y, x, _out_s85);
    _out = _out_s85;
    return;
  }
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
