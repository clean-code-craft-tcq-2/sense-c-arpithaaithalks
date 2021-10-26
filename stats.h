
struct Stats
{
  float average;
  float max;
  float min;
};


typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern struct Stats computedStats;

Stats compute_statistics(const float* numberset, int setlength);
