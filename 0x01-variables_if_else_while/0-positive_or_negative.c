
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -" assigns random number to the variable n,
 * each time it is executed, then prints it"
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
	return (0);
}
