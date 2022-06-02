#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *)malloc(tsize * sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void setValue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {

        printf("Enter Element %d : ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running Setvalue now \n");
    setValue(&marks);
    printf("We are running Show now \n");
    show(&marks);
    return 0;
}
