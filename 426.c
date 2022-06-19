#include <stdio.h>
#include <string.h>
void add();
void display();
void author();
void title();
void count();
void access();
struct book
{
    int a; // a=accession number
    char name[30], title[30], flag[6];
    float price;
} b[100];
int d;
void main()
{
    int i, n, c;
    printf("Enter number of book\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter information of book no. %d\n", i + 1);
        printf("Accession number ");
        scanf("%d", &b[i].a);
        printf(" Name of author ");
        scanf("%s", b[i].name);
        printf("Title of book ");
        scanf("%s", b[i].title);
        printf("Price ");
        scanf("%f", &b[i].price);
        printf("Issue status yes/no: ");
        scanf("%s", b[i].flag);
    }
    d = i;
    printf("****menu*****");

    printf("\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. list the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n 7.Exit\n");
    printf("Choose an option\n");
    scanf("%d", &c);
    while (c != 7)
    {
        if (c == 1)
            add();
        if (c == 2)
            display();
        if (c == 3)
            author();
        if (c == 4)
            title();
        if (c == 5)
            count();
        if (c == 6)
            access();
        if (c != 1 && c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
            printf("Invalid Input\nPlease enter valid input\n");
        printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. list the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n 7.Exit\n");
        printf("Choose an option\n");
        scanf("%d", &c);
    }
}
void add()
{
    int i, n;
    printf("Enter number of book added\n");
    scanf("%d", &n);
    for (i = d; i < n + d; i++)
    {
        printf("Enter information of additional book no. %d\n", i - d + 1);
        printf("Accession number ");
        scanf("%d", &b[i].a);
        printf(" Name of author ");
        scanf("%s", b[i].name);
        printf("Title of book ");
        scanf("%s", b[i].title);
        printf("Price ");
        scanf("%f", &b[i].price);
        printf("Issue status yes/no: ");
        scanf("%s", b[i].flag);
    }
    d = d + n;
}
void display()
{
    printf("Accession number Name title price issue status\n");
    for (int j = 0; j < d; j++)
        printf("%d %s %s %f %s\n", b[j].a, b[j].name, b[j].title, b[j].price, b[j].flag);
}

void author()
{
    char A[30], j, c;
    printf("Enter author name ");
    scanf("%s", A);
    printf("Accession number Name title price issue status\n");
    for (int j = 0; j < d; j++)
    {
        c = strcmp(A, b[j].name);
        if (c == 0)
            printf("%d %s %s %f %s\n", b[j].a, b[j].name, b[j].title, b[j].price, b[j].flag);
    }
}

void title()
{
    char t[30];
    int c, i, j;
    printf("Enter Title of a book ");
    scanf("%s", t);
    for (i = 0; i < d; i++)
    {
        c = strcmp(t, b[i].title);
        if (c == 0)
        {
            printf("Accession number Name title price issue status\n");
            printf("%d %s %s %f %s\n", b[i].a, b[i].name, b[i].title, b[i].price, b[i].flag);
        }
    }
}

void count()
{
    printf("no. of books in libarary is %d\n", d);
}

void access()
{
    int i, j, E[100], c[100], a;
    for (i = 0; i < d; i++)
    {
        E[i] = b[i].a;
        c[i] = i;
    }
    for (i = 0; i < d; i++)
        for (j = i; j < d; j++)
            if (E[i] > E[j])
            {
                a = E[i];
                E[i] = E[j];
                E[j] = a;
                a = c[i];
                c[i] = c[j];
                c[j] = a;
            }
    printf("Accession number Name title price issue status\n");
    for (j = 0; j < d; j++)
        printf("%d %s %s %f %s\n", b[c[j]].a, b[c[j]].name, b[c[j]].title, b[c[j]].price, b[c[j]].flag);
}
