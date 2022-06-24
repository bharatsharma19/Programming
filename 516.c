#include <stdio.h>

int main()
{
    struct donors
    {
        char name[21];
        char address[41];
        int age;
        char bloodtype;
    };
    struct donors hospital;
    int i;
    FILE *fp;
    fp = fopen("hospital.dat", "wb");
    if (fp == NULL)
    {
        puts("Cannot open file\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nName: ");
        scanf("%s", hospital.name);
        fflush(stdin);
        printf("\nAddress: ");
        scanf("%s", hospital.address);
        fflush(stdin);
        printf("\nAge: ");
        scanf("%d", &hospital.age);
        fflush(stdin);
        printf("\nType: ");
        scanf("%c", &hospital.bloodtype);
        fflush(stdin);
        fwrite(&hospital, sizeof(hospital), 1, fp);
    }

    fcloseall();
    
    return 0;
}
