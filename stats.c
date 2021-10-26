#include "stats.h"

Stats compute_statistics(const float* numberset, int setlength) {
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
      if(*numberset < min)
      {
         min = *numberset;
      }
    } 
    s.average = (float)sum/setlength;
    s.min = min;
    s.max = max;
    return s;
}

void check_and_alert(float maxThreshold, alerter_funcptr* alerters, Stats computedStats)
{
    int arraysize;
    int loop;
    arraysize = sizeof(alerters);
	
    if (computedStats.max > maxThreshold)
    {
        for(loop = 0; loop < arraysize; loop++)
        {
            alerters[loop]();
        }
    }
    return;
}