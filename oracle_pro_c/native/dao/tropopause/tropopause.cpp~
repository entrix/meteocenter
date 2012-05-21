#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"humidity.h"

namespace nhm {

  humidity::humidity()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  humidity::~humidity()
  {
    delete [] dateTime;
  }

  ull humidity::getId()
  {
    return humidityId;
  }

  void humidity::setId(ull id)
  {
    humidityId = id;
  }

  us humidity::getPointId()
  {
    return pointId;
  }

  void  humidity::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *humidity::getDateTime()
  {
    return dateTime;
  }

  void humidity::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us humidity::getPrediction()
  {
    return prediction;
  }

  void  humidity::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double humidity::getAbsolute()
  {
    return absolute;
  }

  void  humidity::setAbsolute(const double absolute)
  {
    this->absolute = absolute;
  }

  double humidity::getRelative()
  {
    return relative;
  }

  void  humidity::setRelative(const double relative)
  {
    this->relative = relative;
  }

  double humidity::getSpecific()
  {
    return specific;
  }

  void  humidity::setSpecific(const double specific)
  {
    this->specific = specific;
  }

}
