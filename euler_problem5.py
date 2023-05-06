"""
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*I changed to search for the smallest positive number that is evenly divisable by all numbers form 1 to 15 due to computational time*

QBA LIU 2023 ---------------------------------------------------------------------------------------------------------------------------
"""

def even_divide(number, range_min, range_max):
    exit = 'evenly_dividable'
    for i in range(range_min, range_max + 1):
        if number%i != 0:
            exit = 'not_evenly_dividable'
    return exit




def search(min, max, min_divisor, max_divisor):
    exit = 'No such number in given range.'
    for num in range(min,max + 1):
        if even_divide( number = num, range_min = min_divisor, range_max = max_divisor) == 'evenly_dividable':
            exit = 'The largest evenly dividable number in the given range is ' + str(num) + '.'
            break
    return exit


print(search(min = 1, max = 120000000, min_divisor = 1, max_divisor = 20))