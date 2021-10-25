
typedef struct Stats
{
  float average;
  float max;
  float min;
} computedStats;

Stats compute_statistics(const float* numberset, int setlength);
