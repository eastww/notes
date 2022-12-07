#include "isLeapYear.h"

bool isLeapYear(int year)
{
    /* 默认是平年 */
    bool flag = false;

    /* 闰年是400整数倍，或者是4的整数倍而非100整数倍 */
    if ((0 == year % 4) || ((0 != year % 100) && (0 == year % 4)))
    {
        flag = true;
    }
    
    return flag;
}