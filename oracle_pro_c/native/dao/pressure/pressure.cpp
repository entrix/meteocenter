#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"pressure.h"

namespace npr {

  pressure::pressure()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  pressure::~pressure()
  {
    delete [] dateTime;
  }

  ull pressure::getId()
  {
    return pressureId;
  }

  void pressure::setId(ull id)
  {
    pressureId = id;
  }

  us pressure::getPointId()
  {
    return pointId;
  }

  void  pressure::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *pressure::getDateTime()
  {
    return dateTime;
  }

  void pressure::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us pressure::getPrediction()
  {
    return prediction;
  }

  void  pressure::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double pressure::getValue()
  {
    return value;
  }

  void  pressure::setValue(const double value)
  {
    this->value = value;
  }

}
