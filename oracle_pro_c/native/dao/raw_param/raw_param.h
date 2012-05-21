#include"../../types.h"

#ifndef __RAWPARAM_H__
#define __RAWPARAM_H__

namespace nrp {

  class rawParam {
    ull  rawParamId;
    us   pointId;
    char *dateTime;
    us   prediction;
    char *vorticityAdvection;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    rawParam();
    ~rawParam();

    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getPointId();
    void setPointId(const ull pointId);
    char *getDateTime();
    void setDateTime(const char *dateTime);
    us getPrediction();
    void setPrediction(const us prediction);
    char *getVorticityAdvection();
    void setVorticityAdvection(const char *value);
  };

}

#endif
