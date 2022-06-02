#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    printf("\n");
    for (int i = 0; i < (n - 1); i++)
    {

        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {2, 64, 32, 128, 81, 27, 1, 18, 6235, 986};
    int n = 10;
    printf("Printing the array before sorting --> \n");
    printArray(A, n);
    bubbleSort(A, n);
    printf("\n");
    printf("Printing the array after Sorting --> \n");
    printArray(A, n);
    return 0;
}
