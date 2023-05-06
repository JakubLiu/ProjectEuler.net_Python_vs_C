/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

 QBA LIU 2023 -----------------------------------------------------------------------------------------------------------------------------------------------

 */





#include<stdio.h>



int even_divide(int number, int range_min, int range_max)
{
	int exit;
	int i;

	exit = 1;    // 1 <==> number is evenly dividable

	for (i = range_min; i <= range_max; ++i)
	{
		if (number%i != 0)
		{
			exit = 0; // 0 <==> number is not evenly dividable
		}
	}

	return exit;
}





int search(int min, int max, int min_divisor, int max_divisor)
{
	int exit;
	int i;

	exit = 0;

	for (i = min; i <= max; ++i)
	{
		if (even_divide(i, min_divisor, max_divisor) == 1)
		{
			exit = i;
			break;
		}
	}

	return exit;


}



int main()
{

int out;

out = search(1, 300000000, 1, 20);

printf("%d\n", out);

return(0);
}
