#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Get valid height (1–8)
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print pyramid
    for (int row = 1; row <= height; row++)
    {
        // Print spaces
        for (int s = 0; s < height - row; s++)
        {
            printf(" ");
        }

        // Print hashes
        for (int h = 0; h < row; h++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
