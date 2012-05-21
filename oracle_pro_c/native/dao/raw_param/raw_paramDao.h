#include"../../types.h"
#include "raw_param.h"

#ifndef __RAWPARAMDAO_H__
#define __RAWPARAMDAO_H__

namespace nrp {

  class rawParamDao {
    //copying parameters
    ull  cId;
    us cPointId;
    char cDateTime[20];
    us cPrediction;
    char cVorticityAdvection[20];
  
    void copy(rawParam *rp);
    void acopy(rawParam *arp, int size_a);
  public:
    //scalar case
    rawParam *findById(ull id);
    void insert(rawParam *rp);
    void update(rawParam *rp);
    void remove(rawParam *rp);
    //vector case
    rawParam *findById(ull *aid, int size_a);
    void insert(rawParam *arp, int size_a);
    void update(rawParam *arp, int size_a);
    void remove(rawParam *arp, int size_a);
  };

}

#endif
