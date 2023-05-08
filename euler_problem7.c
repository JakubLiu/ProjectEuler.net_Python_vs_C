/*
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

 What is the 10 001st prime number?

 QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------
 */


#include<stdio.h>

int prime_test(int num)
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
	int counter;
	int i;
	int last_prime;

	counter = 0;
	i = 2;

	while (counter < 10001)
	{
		if (prime_test(i) == 1)
		{
			counter = counter + 1;
			last_prime = i;
		}
		
		i = i + 1;
	}

	printf("%d\n", last_prime);
	return(0);
}
