#include"../../types.h"

#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

namespace ntm {

  class temperature {
    ull temperatureId;
    us pointId;
    us type;
    char *dateTime;
    us   prediction;
    double value;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    temperature();
    ~temperature();

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
    double getValue();
    void setValue(const double value);
  };

}

#endif
