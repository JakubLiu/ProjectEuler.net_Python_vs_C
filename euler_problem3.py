"""
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

QBA LIU 2023 ---------------------------------------------------------------------------------------------------------------------------
"""

number = 13195
factors = []

for i in range(1,number):
    if i != 1 and number/i == number//i:
        factors.append(i)

def prime_test(num):
  for i in range(2,num):
    if num%i == 0:
      return False
  return True


prime_factors = []

for factor in factors:
    if prime_test(factor) == True:
        prime_factors.append(factor)

print(prime_factors)
