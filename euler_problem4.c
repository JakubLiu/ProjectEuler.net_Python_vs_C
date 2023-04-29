/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------
 */







#include <stdio.h>
#include <stdlib.h>
  
int mirror(int num)
{

	int rev_img;
	int mod;

	rev_img = 0;

	while(num != 0)
	{
		mod = num%10;
		rev_img = rev_img * 10 + mod;
		num /= 10;
	}

	return rev_img;

}







int main()
{
	 int* palindrome_array;
	 int size;
	 int min;
	 int max;
	 int i;
	 int j;
	 int n;

	 min = 100*100;
	 max = 999*999;
	 size = 0;
	 n = 0;


	 // allocate enough space for the array
	 for(i = min; i < max; ++i)
	 {
	 	size = size + 1;
	 }
	 
	 palindrome_array = (int*)malloc(size * sizeof(int));

	 // populate the array with palindromes
	 for(j = min; j <= max; ++j)
	 {
	  	if(j == mirror(j))
		{
			palindrome_array[n] = j;
			n = n + 1;
		}
	 }


	// due to the fact, that the array is sorted in increasing order, print out the last element of the array
	printf("%d\n", palindrome_array[n-1]);

	return 0;
}
