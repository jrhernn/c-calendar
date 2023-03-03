#include <stdio.h>
#include <stdlib.h>

int dayZero(int year)
{
    int day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

    return day;
}

int main()
{
    int year, daysPerMonth, weekDay = 0, firstDay;
    printf("\nEnter the year:");
    scanf("%d", &year);

    char *months[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
    {
        days_month[1] = 29;
    }

    firstDay = dayZero(year);

    // Month Loop
    for (int i = 0; i < 12; i++)
    {
        daysPerMonth = days_month[i];
        printf("\n\n===============%s===============\n", months[i]);
        printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

        // Week day loop to start on the correct day each month
        for (weekDay = 0; weekDay < firstDay; weekDay++)
        {
            printf("     ");
        }

        // Day Loop
        for (int j = 1; j <= daysPerMonth; j++)
        {
            printf("%5d", j);

            if (++weekDay > 6)
            {
                printf("\n");
                weekDay = 0;
            }
            firstDay = weekDay;
        }
    }
}