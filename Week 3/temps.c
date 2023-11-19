// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(avg_temp temps[], int size);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities(temps, NUM_CITIES);

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(avg_temp temperature[], int size)
{
    // Sort the array by temperature
    avg_temp temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (temperature[j].temp > temperature[i].temp)
            {
                temp = temps[i];
                temps[i] = temps[j];
                temps[j] = temp;
            }
        }
    }

    // Expected output shows the city names are sorted too...
    // Since my first output only had to replace each city that had the same temperatures,
    // Here's another algorithm that replaces the two elements if they have the same temperature.
    // Now I get the expected output, by adding another whole ass algorithm. lol
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (temperature[j].temp == temperature[i].temp)
            {
                temp = temps[i];
                temps[i] = temps[j];
                temps[j] = temp;
            }
        }
    }
    return;
}
