#include"../../types.h"
#include "rsmc.h"

#ifndef __RSMCDAO_H__
#define __RSMCDAO_H__

namespace nrs {

  class rsmcDao {
    //copying parameters
    ull  cid;
    us   ctype;
    char cname[21];
  
    void copy(rsmc *rs);
    void acopy(rsmc *ars, int size_a);
  public:
    //scalar case
    rsmc *findById(ull id);
    void insert(rsmc *rs);
    void update(rsmc *rs);
    void remove(rsmc *rs);
    //vector case
    rsmc *findById(ull *aid, int size_a);
    void insert(rsmc *ars, int size_a);
    void update(rsmc *ars, int size_a);
    void remove(rsmc *ars, int size_a);
  };

}

#endif
