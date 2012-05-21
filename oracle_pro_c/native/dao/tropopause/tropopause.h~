#include"../../types.h"

#ifndef __HUMIDITY_H__
#define __HUMIDITY_H__

namespace nhm {

  class humidity {
    ull humidityId;
    us pointId;
    char *dateTime;
    us   prediction;
    double absolute;
    double relative;
    double specific;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    humidity();
    ~humidity();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getPointId();
    void setPointId(const ull pointId);
    char *getDateTime();
    void setDateTime(const char *dateTime);
    us getPrediction();
    void setPrediction(const us prediction);
    double getAbsolute();
    void setAbsolute(const double absolute);
    double getRelative();
    void setRelative(const double relative);
    double getSpecific();
    void setSpecific(const double specific);
  };

}

#endif
