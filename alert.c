#include "stats.h"
#include "alert.h"

void emailAlerter(void)
{
    emailAlertCallCount++;
}

void ledAlerter(void)
{
    ledAlertCallCount++;
}
