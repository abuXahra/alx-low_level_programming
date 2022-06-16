/*
 * File: 0-reset_to_98.c
 * Auth: Isah Abdulmumin
 */

#include "stdio.h"

/**
 * reset_to_98 - Takes a pointer to an int and updates
 *               the value it points to to 98.
 * @n: The pointer to an int.
 */


void reset_to_98(int *n){

	int p = 98;

	*n = p;
}

int main()
{

	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
