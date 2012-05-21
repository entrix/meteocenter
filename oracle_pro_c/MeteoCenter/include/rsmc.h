#include"types.h"

#ifndef __RSMC_H__
#define __RSMC_H__

namespace nrs {

  class rsmc {
    ull rsmcId;
    us  rsmcType;
    char *rsmcName;
  
  public:
    //constructor with no parameters
    //for the java pojo classes ideology
    rsmc();
  
    //standart getters and setter for class fields
    ull getId();
    void setId(const ull id);
    us  getType();
    void setType(const us type);
    char *getName();
    void setName(const char *name);
  };

}

#endif
