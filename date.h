
#ifndef DATE
#define DATE

class Date
{
    int day;
    int month;
    int year;

    public:
    
    int setday(int day)
    {
        this->day=day;
    }
    int setmonth(int month)
    {
        this->month=month;
    }
    int setyear(int year)
    {
        this->year=year;
    }
    
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }

};

#endif
