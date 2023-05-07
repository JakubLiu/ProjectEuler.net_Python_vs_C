"""
The sum of the squares of the first ten natural numbers is 385

The square of the sum of the first ten natural numbers is 3205

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 2640
.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------

"""


sum = 0
sum_of_sqr = 0

for i in range(1, 100+1):
    sum = sum + i
    sum_of_sqr = sum_of_sqr + i**2

diff = sum**2 - sum_of_sqr
print(diff)