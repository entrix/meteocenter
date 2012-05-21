#include"../../types.h"
#include "station_delegation.h"

#ifndef __STATIONDELEGATIONDAO_H__
#define __STATIONDELEGATIONDAO_H__

namespace nsd {

  class stationDelegationDao {
    //copying parameters
    ull  cId;
    us cRsmcId;
    us cPointId;
  
    void copy(stationDelegation *sd);
    void acopy(stationDelegation *asd, int size_a);
  public:
    //scalar case
    stationDelegation *findById(ull id);
    void insert(stationDelegation *sd);
    void update(stationDelegation *sd);
    void remove(stationDelegation *sd);
    //vector case
    stationDelegation *findById(ull *aid, int size_a);
    void insert(stationDelegation *asd, int size_a);
    void update(stationDelegation *asd, int size_a);
    void remove(stationDelegation *asd, int size_a);
  };

}

#endif
