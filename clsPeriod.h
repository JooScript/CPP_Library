#pragma once
#include "clsDate.h"

class clsPeriod : public clsDate
{
public:
    clsDate StartDate;
    clsDate EndDate;

    clsPeriod(clsDate StartDate, clsDate DateTo)
    {
        this->StartDate = StartDate;
        this->EndDate = EndDate;
    }

    static bool IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2)
    {
        return IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) ? false : (IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate) ? false : true);
    }

    bool IsOverLapWith(clsPeriod Period2)
    {
        return IsOverlapPeriods(*this, Period2);
    }

    void Print()
    {
        cout << "Period Start: ";
        StartDate.Print();

        cout << "Period End: ";
        EndDate.Print();
    }
};
