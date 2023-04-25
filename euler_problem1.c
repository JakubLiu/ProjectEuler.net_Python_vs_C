
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

QBA LIU 2023 -----------------------------------------------------------------------------------------------------------------------------------------------------

*/

#include <stdio.h>
int main() {
int sum;
float k;
int n;

sum = 0;

for (k = 0, n = 0; k < 1000, n < 1000; ++k, ++n)
{
	if (k/3 == n/3 || k/5 == n/5)
	{
	
		sum = sum + n;
		// sum = sum + k;
	
	}

}

printf("sum = %d\n", sum);
return 0;
}
