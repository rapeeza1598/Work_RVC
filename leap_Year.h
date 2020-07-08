// #include <stdio.h>
int Laep_Year()
{
    
    
}
int Laep_YearisTrue(){
    int var_Day = 29;
    if (var_Day == 29)
    {
        var_Day = 1;
        var_Month = 
    }
    
}
int Laep_YearisFalse(){
    bool leapYear = false;
    int tpre_Year = 0;
    // scanf("%d",&tpre_Year);
    if (tpre_Year%400==0)
    {
        leapYear = true;
        // printf("True01");
    }
    else if (tpre_Year%100==0)
    {
        leapYear = false;
        // printf("False02");
    }
    else if (tpre_Year%4==0)
    {
        leapYear = true;
        // printf("True03");
    }
    return leapYear;
}
