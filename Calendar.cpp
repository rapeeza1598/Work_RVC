#include <stdio.h>
enum type_WeekDay
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
enum type_Month
{
    Jan,
    Fub,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};
enum type_WeekDay var_WeekDay;
int var_Day = 17;
enum type_Month var_Month;

int Laep_Year()
{
    bool leapYear = false;
    int tpre_Year = 0;
    // scanf("%d",&tpre_Year);
    if (tpre_Year % 400 == 0)
    {
        leapYear = true;
        printf("\n");
    }
    else if (tpre_Year % 100 == 0)
    {
        leapYear = false;
        printf("44\n");
    }
    else if (tpre_Year % 4 == 0)
    {
        leapYear = true;
        printf("49\n");
    }
    return leapYear;
}
int chackMonth(int var_Day, int var_Month, int month)
{
    if (month == 6)
    {
        if (var_Day == 31)
        {
            var_Day = 1;
            var_Month += 1;
            printf("61\n");
        }
        else
        {
            var_Day = var_Day + 1;
            printf("66\n");
        }
    }
    else if (month == 10)
    {
        if (var_Day == 30)
        {
            var_Day = 1;
            var_Month += 1;
            printf("75\n");
        }
        else
        {
            var_Day += 1;
            printf("80\n");
        }
    }
    return var_Day, var_Month;
}
int main()
{
    int var_WeekDay = Wednesday;
    int var_Month = Jun;
    int var_Year = 2020;
    bool leapYear = false;
    char keyPress[4] = "ESC";
    int month = 0;
    while (1)
    {
        if (var_WeekDay == 6)
        {
            var_WeekDay = 0;
            printf("98\n");
        }
        else
        {
            var_WeekDay += 1;
            printf("103\n");
        }
        switch (var_Month)
        {
        case Jan:
        case Mar:
        case May:
        case Jul:
        case Aug:
        case Oct:
            month = 6;
            chackMonth(var_Day, var_Month, month);
            break;
        case Apr:
        case Jun:
        case Sep:
        case Nov:
            month = 10;
            chackMonth(var_Day, var_Month, month);
            break;
        case Dec:
            if (var_Day == 31)
            {
                var_Day = 1;
                var_Month += 1;
                var_Year += 1;
                printf("129\n");
            }
            else
            {
                var_Day += 1;
                printf("133\n");
            }
            break;
        case Fub:
            if (!leapYear)
            {
                leapYear = Laep_Year();
            }
            if (leapYear)
            {
                if (var_Day == 29)
                {
                    var_Day = 1;
                    var_Month += 1;
                    printf("148\n");
                }
                else
                {
                    var_Day += 1;
                    printf("153\n");
                }
                if (var_Day == 28)
                {
                    var_Day = 1;
                    var_Month += 1;
                    printf("159\n");
                }
                else
                {
                    var_Day += 1;
                    printf("164\n");
                }
            }
            break;
        default:
            break;
        }
        printf("%d/%d/%d\n", var_Day, var_Month, var_Year);
        getchar();
    }

    return 0;
}