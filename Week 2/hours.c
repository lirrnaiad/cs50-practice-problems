#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    float total_hours = 0.0;
    float average;

    if (output == 84)
    {
        for (int i = 0; i < weeks; i++)
        {
            total_hours += hours[i];
        }

        return total_hours;
    }

    else if (output == 65)
    {
        for (int i = 0; i < weeks; i++)
        {
            total_hours += hours[i];
        }

        average = total_hours / (float) weeks;
        return average;
    }

    else
    {
        return 0;
    }
}
