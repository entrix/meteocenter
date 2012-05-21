#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"temperature.h"

namespace ntm {

  temperature::temperature()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  temperature::~temperature()
  {
    delete [] dateTime;
  }

  ull temperature::getId()
  {
    return temperatureId;
  }

  void temperature::setId(ull id)
  {
    temperatureId = id;
  }

  us temperature::getPointId()
  {
    return pointId;
  }

  void  temperature::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *temperature::getDateTime()
  {
    return dateTime;
  }

  void temperature::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us temperature::getType()
  {
    return type;
  }

  void  temperature::setType(const us type)
  {
    this->type = type;
  }

  us temperature::getPrediction()
  {
    return prediction;
  }

  void  temperature::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double temperature::getValue()
  {
    return value;
  }

  void  temperature::setValue(const double value)
  {
    this->value = value;
  }

}
