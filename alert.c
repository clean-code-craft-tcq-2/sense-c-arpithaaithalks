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

check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats)
{
    int arraysize;
    arraysize = sizeof(alerters);
	
    if (computedStats.max > maxThreshold)
    {
        for(loop = 0; loop < arraysize; loop++)
        {
            alerters[loop]();
        }
    }
}
