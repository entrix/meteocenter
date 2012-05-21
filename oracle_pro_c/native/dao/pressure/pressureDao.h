#include"../../types.h"
#include "pressure.h"

#ifndef __PRESSUREDAO_H__
#define __PRESSUREDAO_H__

namespace npr {

  class pressureDao {
    //copying parameters
    ull  cId;
    us cPointId;
    char cDateTime[20];
    us cPrediction;
    double cValue;

    void copy(pressure *pr);
    void acopy(pressure *apr, int size_a);
  public:
    //scalar case
    pressure *findById(ull id);
    void insert(pressure *pr);
    void update(pressure *pr);
    void remove(pressure *pr);
    //vector case
    pressure *findById(ull *aid, int size_a);
    void insert(pressure *apr, int size_a);
    void update(pressure *apr, int size_a);
    void remove(pressure *apr, int size_a);
  };

}

#endif
