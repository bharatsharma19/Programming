#include <stdio.h>
#include <conio.h>

static int error = 0;

void grd(int *a) // checking the 3x3 grids
{
    int i, j, x, p, sum = 0;
    for (p = 0; p <= 54; p += 27) /*Moving dowbn the grid*/
    {
        for (x = 0; x <= 6; x += 3) /*Moving right of the grid*/
        {
            sum = 0;
            for (i = 0; i <= 18; i += 9) // Moving down the column in a gird
                for (j = 0; j <= 2; j++) // Moving right of row ina grid
                    sum += *(a + i + j + x + p);
            if (sum != 45)
            {
                error += 1;
                return;
            }
        }
    }
}

void row(int *a) // checking the rows
{
    int i, j, sum = 0;
    for (i = 0; i <= 72; i += 9) /*Moving donw the row*/
    {
        sum = 0;                 // reinitialisation of sum
        for (j = 0; j <= 8; j++) // Moving right of the row
            sum += *(a + i + j);
        if (sum != 45)
        {
            error += 1; // if there's error
            return;
        }
    }
}

void col(int *a) // checking the columns
{
    int i, j, sum = 0;
    for (i = 0; i <= 8; i++) // Moving right of the column
    {
        sum = 0;                     // reinitialisation of sum
        for (j = 0; j <= 72; j += 9) // Moving down of the column
            sum += *(a + i + j);
        if (sum != 45)
        {
            error += 1; // if ther's error
            return;
        }
    }
}

int main()
{
    int gam[9][9] = {
        5, 3, 4, 6, 7, 8, 9, 1, 2,
        6, 7, 2, 1, 9, 5, 3, 4, 8,
        1, 9, 8, 3, 4, 2, 5, 6, 7,
        8, 5, 9, 7, 6, 1, 4, 2, 3,
        4, 2, 6, 8, 5, 3, 7, 9, 1,
        7, 1, 3, 9, 2, 4, 8, 5, 6,
        9, 6, 1, 5, 3, 7, 2, 8, 4,
        2, 8, 7, 4, 1, 9, 6, 3, 5,
        3, 4, 5, 2, 8, 6, 1, 7, 9};

    grd(gam[0]);
    row(gam[0]);
    col(gam[0]);

    if (error)
        printf("\n\nThe Solution of your sudoku is wrong.\n");
    else
        printf("\n\nSolution of you sudoku is right.\n");

    return 0;
}
