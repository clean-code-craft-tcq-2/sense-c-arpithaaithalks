
typedef struct Stats
{
  float average;
  float max;
  float min;
};

extern struct Stats computedStats;

Stats compute_statistics(const float* numberset, int setlength);
