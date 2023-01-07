#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb301.h"
namespace ANONYMOUS{

LocationTuple* LocationTuple::create(int  location_, int  user_, int  timeStart_, int  timeEnd_){
  void* temp= malloc( sizeof(LocationTuple)  ); 
  LocationTuple* rv = new (temp)LocationTuple();
  rv->location =  location_;
  rv->user =  user_;
  rv->timeStart =  timeStart_;
  rv->timeEnd =  timeEnd_;
  return rv;
}
void sketch__Wrapper(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */) {
  sketch(location, user, timeStart, timeEnd);
}
void sketch__WrapperNospec(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */) {}
void sketch(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */) {
  void * _tt0[3] = {NULL, NULL, NULL};
  LocationTuple**  tuples= new LocationTuple* [3]; CopyArr<LocationTuple* >(tuples,_tt0, 3, 3);
  initTuples(tuples, location, user, timeStart, timeEnd);
  for (int  i=0;(i) < (3);i = i + 1){
    LocationTuple*  tuple=NULL;
    tuple = (tuples[i]);
    bool  q1=(tuple->location) == (1);
    int  t_s4=tuple->location;
    bool  q2=(((t_s4) == (1))) == (1);
    assert ((q1) == (q2));;
  }
  delete[] tuples;
}
void initTuples(LocationTuple** tuples/* len = 3 */, int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */) {
  for (int  i=0;(i) < (3);i = i + 1){
    (tuples[i]) = LocationTuple::create(0, 0, 0, 0);
    (tuples[i])->user = (user[i]);
    (tuples[i])->location = (location[i]);
    (tuples[i])->timeStart = (timeStart[i]);
    (tuples[i])->timeEnd = (timeEnd[i]);
  }
}

}
