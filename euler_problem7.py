"""
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

QBA LIU 2023 -------------------------------------------------------------------------------------------------------------------------
"""


def prime_test(num):
  for i in range(2,num):
    if num%i == 0:
      return 'not prime'
  return 'prime'


prime_numbers = []
i = 2

while len(prime_numbers) < 10001:
    if prime_test(num = i) == 'prime':
        prime_numbers.append(i)
    i = i + 1

print(prime_numbers[-1])

