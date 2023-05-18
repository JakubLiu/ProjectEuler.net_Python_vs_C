"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

QBA LIU 2023 --------------------------------------------------------------------------------------------
"""

import time

start = time.time()

def prime_test(num):
  for i in range(2,num):
    if num%i == 0:
      return False
  return True

prime_sum = 0

for number in range(2,500000):
    if prime_test(number) == True:
        prime_sum = prime_sum + number

print(prime_sum)

end = time.time()

print(end - start)