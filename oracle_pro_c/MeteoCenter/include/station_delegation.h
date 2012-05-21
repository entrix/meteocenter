#include"../../types.h"

#ifndef __STATIONDELEGATION_H__
#define __STATIONDELEGATION_H__

namespace nsd {

  class stationDelegation {
    ull stationDelegationId;
    us rsmcId;
    us pointId;

  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    stationDelegation();
    ~stationDelegation();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getRsmcId();
    void setRsmcId(const ull rsmcId);
    us  getPointId();
    void setPointId(const ull pointId);
    double getLatitude();
    void setLatitude(const double latitude);
    double getLongitude();
    void setLongitude(const double longitude);
    double getSeaHeight();
    void setSeaHeight(const double seaHeight);
  };

}

#endif
