#include <stdio.h>
#include "main.h"

/**
*main - check the code
*
*Return: Always 0
*/

int main(void)
{
        int v = 10;
        int *ptr = &v;
        printf("the value before calling = %d\n",v);
        reset_to_98(ptr);
        printf("the value after the calling = %d\n",v);
        return (0);
}
