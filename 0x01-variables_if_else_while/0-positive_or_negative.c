#include <stdio.h>
#include <stdlib.h>
int main()
{
	srand(time(0));

	int n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("n is negative %d", n);
	}
	else if (n > 0)
	{
		printf("n is positive %d", n);
	}
	return 0;
}
