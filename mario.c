#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, space, num, count, count2;
    do
    {
        height = get_int("Height: ");
    }
    while ((height <= 0) || (height > 8));

    num = 0;

    while (num != height)
    {
        num += 1;
        space = height - num;
        count = height - num;
        count2 = count;
        while (space != 0)
        {
            printf(" ");
            space -= 1;
        }
        while (count != height)
        {
            printf("#");
            count += 1;
        }
        printf("  ");
        while (count2 != height)
        {
            printf("#");
            count2 += 1;
        }
        printf("\n");
    }
}
