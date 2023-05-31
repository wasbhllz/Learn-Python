# 条件测试==布尔表达式，布尔值：True和False的返回结果
cars = ['audi','bmw','subaru','toyota']
for car in cars:
	if car == 'bmw':	# 值为True执行if语句中的代码
		print(car.upper())
	else:				# 值为False则执行else块的代码
		print(car.title())
b = cars[0]	
for b in cars:
	if b.title() == 'Audi':
		print('True')
else:
		print('False')
	
# ！=不等号
# 使用and检查多个条件，都通过才会表示
# 使用关键字or检查多个条件，一个通过就会表示
# 使用关键词in检查特定值是否包含在列表

banned_user = ['anny','ming','yuhe']
user = 'wuwang'
if user not in banned_user:
	print(user.title()+'欢迎您留言！')

love = 'app'
if love or user not in bannend_user:
	print(love)

digit = [4,5,8,32,61,1,20,]
a = '4'+'5'
if a == 10:
	print('True')
else:
	print('False')
