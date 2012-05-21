#include"../../types.h"

#ifndef __PRESSURE_H__
#define __PRESSURE_H__

namespace npr {

  class pressure {
    ull pressureId;
    us  pointId;
    char *dateTime;
    us   prediction;
    double value;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    pressure();
    ~pressure();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getPointId();
    void setPointId(const ull pointId);
    char *getDateTime();
    void setDateTime(const char *dateTime);
    us getPrediction();
    void setPrediction(const us prediction);
    double getValue();
    void setValue(const double value);
  };

}

#endif
