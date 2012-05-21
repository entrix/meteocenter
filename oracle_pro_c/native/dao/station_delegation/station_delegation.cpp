#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"station_delegation.h"

namespace nsd {

  stationDelegation::stationDelegation()
  {
  }  

  stationDelegation::~stationDelegation()
  {
  }

  ull stationDelegation::getId()
  {
    return stationDelegationId;
  }

  void stationDelegation::setId(ull id)
  {
    stationDelegationId = id;
  }

  us stationDelegation::getRsmcId()
  {
    return rsmcId;
  }

  void  stationDelegation::setRsmcId(const ull rsmcId)
  {
    this->rsmcId = rsmcId;
  }

  us stationDelegation::getPointId()
  {
    return pointId;
  }

  void  stationDelegation::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

}
