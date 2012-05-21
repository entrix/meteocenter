#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"tropopause.h"

namespace ntp {

  tropopause::tropopause()
  {
    dateTime = new char[20];
  
    for (int i = 0; i < 20; ++i) {
      dateTime[i] = '\0';
    }

  }  

  tropopause::~tropopause()
  {
    delete [] dateTime;
  }

  ull tropopause::getId()
  {
    return tropopauseId;
  }

  void tropopause::setId(ull id)
  {
    tropopauseId = id;
  }

  us tropopause::getPointId()
  {
    return pointId;
  }

  void  tropopause::setPointId(const ull pointId)
  {
    this->pointId = pointId;
  }

  char *tropopause::getDateTime()
  {
    return dateTime;
  }

  void tropopause::setDateTime(const char *dateTime)
  {
    if (strlen(dateTime) > 20)
      return;

    strcpy(this->dateTime, dateTime);
  }

  us tropopause::getPrediction()
  {
    return prediction;
  }

  void  tropopause::setPrediction(const us prediction)
  {
    this->prediction = prediction;
  }

  double tropopause::getHeight()
  {
    return height;
  }

  void  tropopause::setHeight(const double height)
  {
    this->height = height;
  }

  double tropopause::getThickness()
  {
    return thickness;
  }

  void  tropopause::setThickness(const double thickness)
  {
    this->thickness = thickness;
  }

  double tropopause::getVerticalWindShear()
  {
    return verticalWindShear;
  }

  void  tropopause::setVerticalWindShear(const double verticalWindShear)
  {
    this->verticalWindShear = verticalWindShear;
  }

}
