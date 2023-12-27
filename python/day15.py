zoo = list(range(1,10))
for zo in zoo:
	if zo == 1:
		z = '1st'
	elif zo == 2:
		z = '2nd'
	elif zo == 3:
		z = '3rd'
	else:
		z = str(zo)+'th'
	print(z)

# 运算里的加减乘除
c = 328
d = 7
print(c+d)
print(c-d)
print(c*d)
print(c/d)
print(c//d) #整除运算
print(c**d) #幂运算
print(c%d) #求模(余)运算
""" 
整除和求模的应用场景
行和列位置的应用 
"""

#
a = int(input('a = '))
b = int(input('b = '))
print('%d + %d = %d' % (a, b, a + b))
print('%d - %d = %d' % (a, b, a - b))
print('%d * %d = %d' % (a, b, a * b))
print('%d / %d = %f' % (a, b, a / b))
print('%d // %d = %d' % (a, b, a // b))
print('%d %% %d = %d' % (a, b, a % b))
print('%d ** %d = %d' % (a, b, a ** b))

num = 10
num += 5
# num = num + 5
print(num)

# id是内存地址的标识符
name = 15
print(id(num))

# is是比较id标识符是否相等的比较运算
print(num is name)

# 非布尔的值，如果作为真假来判定，非零即真，非空即真
print(name and num)