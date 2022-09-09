#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  *main - prints whether the variable n is positive or negative
  *return: 1 if the number is positive , 0 otherwise
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
