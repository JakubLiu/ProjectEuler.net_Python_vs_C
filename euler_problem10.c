/*
"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

QBA LIU 2023 --------------------------------------------------------------------------------------------
"""
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

	int prime_sum = 0;
	int number;
	int limit;

	printf("Enter the upper boundary: ");
    	scanf("%d", &limit);

	for (number = 2; number < limit; ++number){
		if (prime_test(number) == 1){
			prime_sum = prime_sum + number;
		}
	
	}
printf("%d\n", prime_sum);

//clock_t end = clock();
//double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

}
