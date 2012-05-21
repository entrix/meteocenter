#include"types.h"
#include"wind.h"

#ifndef __WINDDAO_H__
#define __WINDDAO_H__

namespace nwd {

  class windDao {
    //copying parameters
    ull  cId;
    us cPointId;
    us cType;
    char cDateTime[20];
    us cPrediction;
    double cCourse;
    double cForce;

    void copy(wind *wd);
    void acopy(wind *awd, int size_a);
  public:
    //scalar case
    wind *findById(ull id);
    void insert(wind *wd);
    void update(wind *wd);
    void remove(wind *wd);
    //vector case
    wind *findById(ull *aid, int size_a);
    void insert(wind *awd, int size_a);
    void update(wind *awd, int size_a);
    void remove(wind *awd, int size_a);
  };

}

#endif
