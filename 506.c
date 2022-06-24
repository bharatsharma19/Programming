#include <stdio.h>

int main()
{
    FILE *fp;
    char names[20];
    int i;
    fp = fopen("students.dat", "wb");
    for (i = 0; i <= 10; i++)
    {
        puts("\nEnter name: ");
        gets(names);
        fwrite(names, sizeof(names), 1, fp);
    }

    close(fp);

    return 0;
}
