#include <cs50.h>
#include <stdio.h>

void print_leading_space(int row, int height);
void print_block(int current_row);

int main(void)
{
    // validation for negative, and greater than 8 values
    int height = 0;
    do
        (height = get_int("Height : "));
    while (height < 1 || height > 8);

    // to iterate once for each row
    for (int current_row = 0; current_row < height; current_row++)
    {
        print_leading_space(current_row + 1, height);
        print_block(current_row + 1);
        printf("  ");
        print_block(current_row + 1);
        printf("\n");
    }
}

// to print leading spaces
void print_leading_space(int current_row, int height)
{
    for (int i = 0; i < height - current_row; i++)
    {
        printf(" ");
    }
}

// to print # blocks
void print_block(int current_row)
{
    for (int i = 0; i < current_row; i++)
    {
        printf("#");
    }
}
