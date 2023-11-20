#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    if (input[0] == '\0')
    {
        return 0;
    }

    int last_index = 0;
    while (input[last_index + 1] != '\0')
    {
        last_index++;
    }

    int n = input[last_index] - 48;
    input[last_index] = '\0';

    return convert(input) * 10 + n;
}
