
typedef struct _Stats
{
  float average;
  float max;
  float min;
}Stats;

extern Stats computedStats;

Stats compute_statistics(const float* numberset, int setlength);
