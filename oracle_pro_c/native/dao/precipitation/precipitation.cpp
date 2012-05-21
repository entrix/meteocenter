#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"precipitation.h"

namespace npc {

  precipitation::precipitation()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  precipitation::~precipitation()
  {
    delete [] dateTime;
  }

  ull precipitation::getId()
  {
    return precipitationId;
  }

  void precipitation::setId(ull id)
  {
    precipitationId = id;
  }

  us precipitation::getPointId()
  {
    return pointId;
  }

  void  precipitation::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *precipitation::getDateTime()
  {
    return dateTime;
  }

  void precipitation::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us precipitation::getType()
  {
    return type;
  }

  void  precipitation::setType(const us type)
  {
    this->type = type;
  }

  us precipitation::getPrediction()
  {
    return prediction;
  }

  void  precipitation::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double precipitation::getQuantity()
  {
    return quantity;
  }

  void  precipitation::setQuantity(const double quantity)
  {
    this->quantity = quantity;
  }


  double precipitation::getFrequency()
  {
    return frequency;
  }

  void  precipitation::setFrequency(const double frequency)
  {
    this->frequency = frequency;
  }

}
