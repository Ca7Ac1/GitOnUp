#include <stdio.h>

int main()
{
    char helloWorld[] = "Hello World";
    char *ptr = helloWorld;

    for (int i = 0; i < 12; i++)
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}