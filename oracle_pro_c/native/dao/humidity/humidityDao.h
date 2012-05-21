#include"../../types.h"
#include "humidity.h"

#ifndef __HUMIDITYDAO_H__
#define __HUMIDITYDAO_H__

namespace nhm {

  class humidityDao {
    //copying parameters
    ull  cId;
    us cPointId;
    char cDateTime[20];
    us cPrediction;
    double cAbsolute;
    double cRelative;
    double cSpecific;
  
    void copy(humidity *hm);
    void acopy(humidity *ahm, int size_a);
  public:
    //scalar case
    humidity *findById(ull id);
    void insert(humidity *hm);
    void update(humidity *hm);
    void remove(humidity *hm);
    //vector case
    humidity *findById(ull *aid, int size_a);
    void insert(humidity *ahm, int size_a);
    void update(humidity *ahm, int size_a);
    void remove(humidity *ahm, int size_a);
  };

}

#endif
