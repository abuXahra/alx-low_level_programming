#include <stdio.h>
#include <stdlib.h>
int main()
{
    srand(time(0));

    int n = rand();
    if (n < 0)
    {
        printf("n is negative %d", n);
    }
    else if (n > 0)
    {
        printf("n is positive %d", n); 
    }
    else
    {
        printf("n is zero %d", n);
    }

    return 0;
}

