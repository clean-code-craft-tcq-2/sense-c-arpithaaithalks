#include "alert.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void emailAlerter(void)
{
    emailAlertCallCount++;
}

void ledAlerter(void)
{
    ledAlertCallCount++;
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
