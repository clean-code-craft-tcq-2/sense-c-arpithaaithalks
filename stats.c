#include "stats.h"
#include <math.h>

Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int loop;
    float sum=0;
    float max=0;
    float min=0;

    if(setlength == 0)
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    
    for(loop = 0; loop < setlength; loop++) 
    {
      sum += *(numberset + loop);
      if(*(numberset + loop) > max)
      {
         max = *(numberset + loop);
      }
      if(*(numberset + loop) < min)
      {
         min = *(numberset + loop);
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
