
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
