#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			prinf("is positive");
		else
			if (n == 0)
				prinf("is zero");
			else
				if (n < 0)
					prinf("is negative");

		/* your code goes there */
		return (0);
}