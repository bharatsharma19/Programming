#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Folks!", target[30] = "Hello, ";

    strcat(target, source);

    printf("Source String : %s\n", source);
    printf("Target String : %s\n", target);

    return 0;
}
