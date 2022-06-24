#include <fcntl.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[512], source[128], target[128];
    int in, out, bytes;

    printf("Enter source file name : ");
    gets(source);

    in = open(source, O_RDONLY | O_BINARY);

    if (in == (-1))
    {
        puts("Can't open file");
        exit(1);
    }

    printf("Enter target file name : ");
    gets(target);

    out = open(target, O_CREAT | O_BINARY | O_WRONLY | S_IWRITE);

    if (out == (-1))
    {
        puts("Can't open file\n");
        close(in);
        exit(2);
    }

    while ((bytes = read(in, buffer, 512)) > 0)
    {
        write(out, buffer, bytes);
    }

    close(in);
    close(out);

    return 0;
}
