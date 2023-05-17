"""
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

# QBA LIU 2023 ---------------------------------------------------------------------------------------------------------------------
"""

for a in range(1,1000+1):                                     # loop through b, such that a > 0 and a <= 1000

    for b in range(a,1000+1):                                 # loop through b such that a < b <= 1000

            for c in range(b,1000+1):                         # loop through c such that a < b < c <= 1000

                    if a+b+c == 1000 and a**2+b**2 == c**2:   # check required properties

                        print(a,'*',b,'*',c, ' ---> ', a*b*c)
            