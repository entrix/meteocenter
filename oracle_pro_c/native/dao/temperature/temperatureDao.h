#include"../../types.h"
#include "temperature.h"

#ifndef __TEMPERATUREDAO_H__
#define __TEMPERATUREDAO_H__

namespace ntm {

  class temperatureDao {
    //copying parameters
    ull  cId;
    us cPointId;
    us cType;
    char cDateTime[20];
    us cPrediction;
    double cValue;
    
    void copy(temperature *tm);
    void acopy(temperature *atm, int size_a);
  public:
    //scalar case
    temperature *findById(ull id);
    void insert(temperature *tm);
    void update(temperature *tm);
    void remove(temperature *tm);
    //vector case
    temperature *findById(ull *aid, int size_a);
    void insert(temperature *atm, int size_a);
    void update(temperature *atm, int size_a);
    void remove(temperature *atm, int size_a);
  };

}

#endif
