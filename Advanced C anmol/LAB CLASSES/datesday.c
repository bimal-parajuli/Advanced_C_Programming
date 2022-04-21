
//including the header files
#include<stdio.h> 
#include<stdlib.h> 
int valid_date(int date, int mon, int year);

int main(void)
{   //here we initialize the variables as integers
    int dayfirst, monthfirst, yearfirst, daysecond, monthsecond, yearsecond;

    int day_diff, mon_diff, year_diff;
    int finalDays;         

    printf("Enter start date (MM/DD/YYYY): \n");
    scanf("%d/%d/%d", &monthfirst, &dayfirst, &yearfirst);

    printf("Enter end date (MM/DD/YYYY): \n");
    scanf("%d/%d/%d", &monthsecond, &daysecond, &yearsecond);

    if(!valid_date(dayfirst, monthfirst, yearfirst))
    {
        printf("First date is invalid.\n");        
    }

    if(!valid_date(daysecond, monthsecond, yearsecond))
    {
        printf("Second date is invalid.\n");
        exit(0);
    }       

    if(daysecond < dayfirst)
    {      
        // borrow days from february
        if (monthsecond == 3)
        {
            //  check whether year is a leap year
            if ((yearsecond % 4 == 0 && yearsecond % 100 != 0) || (yearsecond % 400 == 0)) 
            {
                daysecond += 29;
            }

            else
            {
                daysecond += 28;
            }                        
        }

        // borrow days from April or June or September or November
        else if (monthsecond == 5 || monthsecond == 7 || monthsecond == 10 || monthsecond == 12) 
        {
           daysecond += 30; 
        }

        // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
        else
        {
           daysecond += 31;
        }

        monthsecond = monthsecond - 1;
    }

    if (monthsecond < monthfirst)
    {
        monthsecond += 12;
        yearsecond -= 1;
    }       

    day_diff = daysecond - dayfirst;
    mon_diff = monthsecond - monthfirst;
    year_diff = yearsecond - yearfirst;

    finalDays = year_diff * 365 + mon_diff*30 ;

    printf("Difference: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);

    return 0; // return 0 to operating system
}

// function to check whether a date is valid or not

int valid_date(int day, int mon, int year)    
{
    int is_valid = 1, is_leap = 0;

    if (year >= 1800 && year <= 9999) 
    {

        //  check whether year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            is_leap = 1;
        }

        // check whether mon is between 1 and 12
        if(mon >= 1 && mon <= 12)
        {
            // check for days in feb
            if (mon == 2)
            {
                if (is_leap && day == 29) 
                {
                    is_valid = 1;
                }
                else if(day > 28) 
                {
                    is_valid = 0;
                }
            }

            // check for days in April, June, September and November
            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) 
            {
                if (day > 30)
                {
                    is_valid = 0;
                }
            }

            // check for days in rest of the months 
            // i.e Jan, Mar, May, July, Aug, Oct, Dec
            else if(day > 31)
            {            
                is_valid = 0;
            }        
        }

        else
        {
            is_valid = 0;
        }

    }
    else
    {
        is_valid = 0;
    }

    return is_valid;

}