#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize <= startSize);

    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    int currentSize = startSize;

    while (endSize >= currentSize)
    {
        int born = currentSize / 3;
        int deceased = currentSize / 4;
        currentSize = currentSize + born - deceased;
        n++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", n);
}
