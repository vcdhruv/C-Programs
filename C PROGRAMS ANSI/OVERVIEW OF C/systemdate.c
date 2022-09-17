//system date is in control of operating system....
#include<stdio.h>
#include<windows.h>
void main()
{
    SYSTEMTIME stime;
    //SYSTEMTIME is a structure
    //windows has its own SYSTEMTIME structure which stores information on the date and time
    /*
    typedef struc_SYSTEMTIME{
        WORD wYear;
        WORD wMonth;
        WORD wDayOfWeek;
        WORD wDay;
        WORD wHour;
        WORD wMinute;
        WORD wSecond;
        WORD wMilliseconds;
    }
    */
    GetSystemTime(&stime);
    printf("%d / %d / %d ",stime.wDay,stime.wMonth,stime.wYear);
}