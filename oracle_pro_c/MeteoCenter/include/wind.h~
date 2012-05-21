#include"types.h"

#ifndef __WIND_H__
#define __WIND_H__

namespace nwd {

  class wind {
    ull windId;
    us pointId;
    us type;
    char *dateTime;
    us   prediction;
    double course;
    double force;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    wind();
    ~wind();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getPointId();
    void setPointId(const ull pointId);
    us  getType();
    void setType(const us type);
    char *getDateTime();
    void setDateTime(const char *dateTime);
    us getPrediction();
    void setPrediction(const us prediction);
    double getCourse();
    void setCourse(const double course);
    double getForce();
    void setForce(const double force);
  };

}

#endif
