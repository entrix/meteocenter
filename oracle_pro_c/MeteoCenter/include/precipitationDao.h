#include"../../types.h"
#include "precipitation.h"

#ifndef __PRECIPITATIONDAO_H__
#define __PRECIPITATIONDAO_H__

namespace npc {

  class precipitationDao {
    //copying parameters
    ull  cId;
    us cPointId;
    us cType;
    char cDateTime[20];
    us cPrediction;
    double cQuantity;
    double cFrequency;

    void copy(precipitation *pc);
    void acopy(precipitation *apc, int size_a);
  public:
    //scalar case
    precipitation *findById(ull id);
    void insert(precipitation *pc);
    void update(precipitation *pc);
    void remove(precipitation *pc);
    //vector case
    precipitation *findById(ull *aid, int size_a);
    void insert(precipitation *apc, int size_a);
    void update(precipitation *apc, int size_a);
    void remove(precipitation *apc, int size_a);
  };

}

#endif
