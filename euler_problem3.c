/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

QBA LIU 2023 ---------------------------------------------------------------------------------------------------------------------------------------------------

*/

#include<stdio.h>


char prime_test(int num)
{
	int prime;
	int non_prime;
	int i;

	prime = 1;
	non_prime = 0;

	for (i=2; i < num; ++i)
	{
		if (num%i == 0)
		{
			return non_prime;
		}
	}
	return prime;
}

int main()
{
	int i;
	int number;
	number = 6008343;

	for (i = 1; i <= number; ++i)
	{
		if (i != 1 && number%i == 0 && prime_test(i) == 1)
		{
			printf("The prime factor of %d is:\t", number);
			printf("%d\n", i);
		}

	}
	
	return 0;
}

