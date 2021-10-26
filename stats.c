#include "stats.h"
#include <math.h>

Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int loop;
    float sum=0;
    float max;
    float min;

    if(setlength == 0)
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
	    
    max=*numberset;
    min=*numberset;
	    
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
    }
    return s;
}

void check_and_alert(float maxThreshold, alerter_funcptr* alerters, Stats computedStats)
{	
    if (computedStats.max > maxThreshold)
    {
        alerters[0]();
	alerters[1]();
    }
    return;
}
