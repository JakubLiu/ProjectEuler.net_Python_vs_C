/*
 he sum of the squares of the first ten natural numbers is 385

 The square of the sum of the first ten natural numbers is 3205

 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 2640
 .

 Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

 QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------
 */


#include<stdio.h>
int main()
{
	int sum;
	int sum_of_sqr;
	int diff;
	int i;

	sum = 0;
	sum_of_sqr = 0;

	for (i = 1; i<= 100; ++i)
	{
		sum = sum + i;
		sum_of_sqr = sum_of_sqr + i*i;
	}

	diff = sum*sum - sum_of_sqr;
	printf("%d\n", diff);
	return(0);
}
