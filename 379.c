#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Spiral", target[20];

    strcpy(target, source);

    printf("Original String : %s\n", source);
    printf("Copied String : %s\n", target);

    return 0;
}
