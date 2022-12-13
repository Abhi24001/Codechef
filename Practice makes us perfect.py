def by_three(n):
    if n % 3 == 0:
     return cube(n)
    else:
     return False

def cube(n):
    pow_three = n**3
    return pow_three

by_three(11)
by_three(12)
by_three(13)
