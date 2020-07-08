#include<stdio.h>
#include "leap_Year.h"
int main()
{
    enum type_WeekDay{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    int tyep_WeekDay = 0;
    enum type_Month{Jan,Fub,Mar,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    int type_Year = 0;
    enum type_WeekDay var_WeekDay = Wednesday;
    int var_Day = 17;
    enum type_Month var_Month = Jun;
    int var_Year = 2000;
    bool leapYear = false;
    char keyPress[4] = "ESC";
    if (var_WeekDay == 0)
    {
        printf("qaz");
    }
    else
    {
        var_WeekDay+=1;
    }
    
    return 0;
}
