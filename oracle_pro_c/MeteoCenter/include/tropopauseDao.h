#include"../../types.h"
#include "tropopause.h"

#ifndef __TROPOPAUSEDAO_H__
#define __TROPOPAUSEDAO_H__

namespace ntp {

  class tropopauseDao {
    //copying parameters
    ull  cId;
    us cPointId;
    char cDateTime[20];
    us cPrediction;
    double cHeight;
    double cThickness;
    double cVerticalWindShear;
  
    void copy(tropopause *tp);
    void acopy(tropopause *atp, int size_a);
  public:
    //scalar case
    tropopause *findById(ull id);
    void insert(tropopause *tp);
    void update(tropopause *tp);
    void remove(tropopause *tp);
    //vector case
    tropopause *findById(ull *aid, int size_a);
    void insert(tropopause *atp, int size_a);
    void update(tropopause *atp, int size_a);
    void remove(tropopause *atp, int size_a);
  };

}

#endif
