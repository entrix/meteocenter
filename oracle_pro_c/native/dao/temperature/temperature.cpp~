#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"wind.h"

namespace nwd {

  wind::wind()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  wind::~wind()
  {
    delete [] dateTime;
  }

  ull wind::getId()
  {
    return windId;
  }

  void wind::setId(ull id)
  {
    windId = id;
  }

  us wind::getPointId()
  {
    return pointId;
  }

  void  wind::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *wind::getDateTime()
  {
    return dateTime;
  }

  void wind::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us wind::getType()
  {
    return type;
  }

  void  wind::setType(const us type)
  {
    this->type = type;
  }

  us wind::getPrediction()
  {
    return prediction;
  }

  void  wind::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double wind::getCourse()
  {
    return course;
  }

  void  wind::setCourse(const double course)
  {
    this->course = course;
  }


  double wind::getForce()
  {
    return force;
  }

  void  wind::setForce(const double force)
  {
    this->force = force;
  }

}
