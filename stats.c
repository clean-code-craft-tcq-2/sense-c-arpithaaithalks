#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int loop;
    float sum=0;
    float max=0;
    float min=0;
    
    for(loop = 0; loop < setlength; loop++) 
    {
      sum += *(numberset + loop);
      if(*numberset > max)
      {
         max = *numberset;
      }
      else(*numberset < min)
      {
         min = *numberset;
      }
    } 
    s.average = (float)sum/setlength;
    s.min = min;
    s.max = max;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
