#include "alert.h"
#include "math.h"

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

check_and_alert(maxThreshold, alerters, computedStats)
{
	int arraysize;
	
	arraysize = sizeof(alerters);
	
	if (computedStats.max > maxThreshold)
	{
		for(loop = 0; loop < arraysize; loop++)
		{
			alerters[loop];
		}
	}
}
