#include"../../types.h"
#include "station_point.h"

#ifndef __STATIONPOINTDAO_H__
#define __STATIONPOINTDAO_H__

namespace nsp {

  class stationPointDao {
    //copying parameters
    ull  cId;
    us cPointId;
    char cDateTime[20];
    us cPrediction;
    double cLatitude;
    double cLongitude;
    double cSeaHeight;
  
    void copy(stationPoint *sp);
    void acopy(stationPoint *asp, int size_a);
  public:
    //scalar case
    stationPoint *findById(ull id);
    void insert(stationPoint *sp);
    void update(stationPoint *sp);
    void remove(stationPoint *sp);
    //vector case
    stationPoint *findById(ull *aid, int size_a);
    void insert(stationPoint *asp, int size_a);
    void update(stationPoint *asp, int size_a);
    void remove(stationPoint *asp, int size_a);
  };

}

#endif
