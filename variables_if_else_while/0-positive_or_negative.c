#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
/* determind whether number positive or negative */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d\n is negative\n", n);
	else
	  printf("%d\n is zero\n", n);
	/* your code goes there */
	return (0);
}
