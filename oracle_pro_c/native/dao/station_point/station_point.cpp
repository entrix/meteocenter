#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"station_point.h"

namespace nsp {

  stationPoint::stationPoint()
  {
  }  

  stationPoint::~stationPoint()
  {
  }

  ull stationPoint::getId()
  {
    return stationPointId;
  }

  void stationPoint::setId(ull id)
  {
    stationPointId = id;
  }

  us stationPoint::getPointId()
  {
    return pointId;
  }

  void  stationPoint::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  double stationPoint::getLatitude()
  {
    return latitude;
  }

  void  stationPoint::setLatitude(const double latitude)
  {
    this->latitude = latitude;
  }

  double stationPoint::getLongitude()
  {
    return longitude;
  }

  void  stationPoint::setLongitude(const double longitude)
  {
    this->longitude = longitude;
  }

  double stationPoint::getSeaHeight()
  {
    return seaHeight;
  }

  void  stationPoint::setSeaHeight(const double seaHeight)
  {
    this->seaHeight = seaHeight;
  }

}
