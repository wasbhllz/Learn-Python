# 游乐项目
age = 12
if 8 <= age < 18:
	price = 5
	t = ('未成年人')
elif 65 > age >=18:
	price = 10
	t = ('成年人')
elif 100 >= age >= 65:
	price = 8
	t = ('老年人')
else:
	print('您不适合玩这些游乐项目')
print(t+'的票价是'+str(price)+'元')

# 练习1
color = 'red'
if color == 'red':
	y = 5
	print('你获得了'+str(y)+'个点')

color_1 = 'yellow'
if color_1 == 'green' :
	print('你获得了'+str(y)+'个点')
	
# 练习2
if color == 'red':
	y = 5
else:
	y = 10
print('你获得了'+str(y)+'个点')

if color == 'yellow':
	y = 5
else:
	y = 10
print('你获得了'+str(y)+'个点')

# 练习3
hh = 'red'
r = ['green','yellow','red']
if hh == r[0]:
	y = 5
elif hh == r[1]:
	y = 10
else:
	y = 15
print('你获得了'+str(y)+'个点')

# 练习4
age = 52
if age < 2:
	print('婴儿')
elif 2 <= age < 4:
	print('蹒跚学步')
elif 4 <= age < 13:
	print('儿童')
elif 13 <= age < 20:
	print('青少年')
elif 20 <= age < 65:
	print('成年人')
elif 65<= age:
	print('老年人')
