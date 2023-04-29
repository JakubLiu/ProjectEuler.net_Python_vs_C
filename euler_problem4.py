"""
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------
"""

def mirror(num):

    rev_img = 0

    while num != 0:
        mod = num%10
        rev_img = rev_img * 10 + mod
        num = num//10

    return rev_img


palindromes = []
min = 100*100
max = 999*999

for i in range(min, max+1):
    if i == mirror(i):
        palindromes.append(i)
    

print(palindromes[-1])
