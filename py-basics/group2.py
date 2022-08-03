"""
Basic Operators
"""
x = 1
y = 2
z = 3
# arithmetic operators
sum = x + y 
sub = x - y 
mul = x * y 
div = x/y
div2 = x // y #floor division
power = x ** y # exponential
modulo = x % y # modulus

print(f"subtraction:{sub} \n multiplication:{mul} \n division:{div} \n floor_division:{div2} \n exponential:{power} \n modulus:{modulo}")

# comparision Operators
print('Equal: ', x==y)
print('NOT equal: ', x!=y)
print('greater than: ', x>y)
print('greater than or equal: ', x>=y)
print('less than: ', x<y)
print('less than or equal: ', x<=y)


# logical operators

print('and', x and y)
print('or', y or x)
print('not', not x )
print("--------")
print('and', (x==y) and ( y == 2))
print('or', True or False)
print('not', not x )

# bitwise Operators
print("-----")
print("bitwise operators")
print("-----")
print('Binary and', x & y)
print('Binary or', y | x)
print('binary Xor',y ^ x )
print('binary ones compliment', ~x )
print('binary right shift', x>>y) 
print('binary left shift', x<<y) 


# assignment operators
w=4
print("assign",w)
# w = w+1
# w++
w+=1
print("increment",w)
w-=1
print("decrement",w)

# identity operators

# membership