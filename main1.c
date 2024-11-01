#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;

    i = -1;
    printf("%ld\n", strlen((char *)&i));
}