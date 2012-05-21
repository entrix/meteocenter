#include"../../types.h"

#ifndef __STATIONPOINT_H__
#define __STATIONPOINT_H__

namespace nsp {

  class stationPoint {
    ull stationPointId;
    us pointId;
    double latitude;
    double longitude;
    double seaHeight;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    stationPoint();
    ~stationPoint();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
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
