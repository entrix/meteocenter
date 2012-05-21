#ifndef __MAIN_H__
#define __MAIN_H__

//extern ull ull_t;
//extern us us_t;
//extern char *c20_t;

unsigned int ustrlen(unsigned char *str)
{
  unsigned int i = 0;
  
  for (; str[i] != '\0'; ++i) ;
  
  return i;
}

namespace spc {
  //int sub_main();
  int open();
  int close();
}

#endif
