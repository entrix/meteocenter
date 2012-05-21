#include<cstdio>
#include<cstring>
#include<cstdlib>
#include"rsmc.h"

namespace nrs {

  rsmc::rsmc()
  {
    rsmcName = new char[21];
  
    for (int i = 0; i < 21; ++i)
      rsmcName[i] = '\0';
  }  

  ull rsmc::getId()
  {
    return rsmcId;
  }

  void rsmc::setId(ull id)
  {
    rsmcId = id;
  }

  char *rsmc::getName()
  {
    return rsmcName;
  }

  void rsmc::setName(const char *name)
  {
    if (strlen(name) > 20)
      return;

    strcpy(rsmcName, name);
  }

  us rsmc::getType()
  {
    return rsmcType;
  }

  void  rsmc::setType(const us type)
  {
    rsmcType = type;
  }

}
