#include "alert.h"
struct  Stats
{
  float average;
  float max;
  float min;
} ;

struct Stats computedStats;
Stats compute_statistics(const float* numberset, int setlength);
