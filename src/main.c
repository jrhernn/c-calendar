#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, daysPerMonth;
    printf("\nEnter the year:");
    scanf("%d", &year);

    char *months[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 != 0)
    {
        for (int i = 0; i < 12; i++)
        {
            daysPerMonth = days_month[i];
            printf("\n%s", months[i]);
            printf("\n   Sun   Mon   Tues   Wed  Thurs   Fri   Sat\n");
        }
    }
}