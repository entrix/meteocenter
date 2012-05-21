#include"../../types.h"

#ifndef __PRECIPITATION_H__
#define __PRECIPITATION_H__

namespace npc {

  class precipitation {
    ull precipitationId;
    us pointId;
    us type;
    char *dateTime;
    us   prediction;
    double quantity;
    double frequency;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    precipitation();
    ~precipitation();

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
    double getQuantity();
    void setQuantity(const double quantity);
    double getFrequency();
    void setFrequency(const double frequency);
  };

}

#endif
