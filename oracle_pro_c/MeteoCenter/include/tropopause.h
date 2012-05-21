#include"../../types.h"

#ifndef __TROPOPAUSE_H__
#define __TROPOPAUSE_H__

namespace ntp {

  class tropopause {
    ull tropopauseId;
    us pointId;
    char *dateTime;
    us   prediction;
    double height;
    double thickness;
    double verticalWindShear;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    tropopause();
    ~tropopause();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getPointId();
    void setPointId(const ull pointId);
    char *getDateTime();
    void setDateTime(const char *dateTime);
    us getPrediction();
    void setPrediction(const us prediction);
    double getHeight();
    void setHeight(const double height);
    double getThickness();
    void setThickness(const double thickness);
    double getVerticalWindShear();
    void setVerticalWindShear(const double verticalWindShear);
  };

}

#endif
