""" ## 学习
# while(循环)关键字,会一直执行下去,直到满足某个条件为止
m = 1
while m <=5:
    print(m)
    m +=1
# 程序退出
message = '输入Q退出本程序.\n请输入'
hh = ''
o = True # 程序运行的开关在由多个事件中的某一件触发:布尔值
while hh != 'Q':
    hh = input(message)
    if hh == 'Q':
        o= False
        print('下次再见!')
        
# break关键字,终止循环语句的执行,跳出当前for和while循环,继续执行下一条语句
pp = '输入您的旅游地址,\n按Q退出'
while True:
    print(input(pp))
    if pp == 'Q':
        break
    else:
        print('再见!yuhe') 

# continue语句会跳转到循环的开头,而不是退出当前循环
mm = 0
while mm < 10:
	mm +=1
	if mm % 2 == 0:
		continue # 跳过除2余数为零的偶数,只输出奇数
	print(mm)
# 务必对while循环进行测试
# 如果程序陷入无限循环，可按Ctrl+C，也可关闭显示程序输出的终端窗口

## 练习
yy = int(input('欢迎您来到电影院,您的年龄是多少?\n这边为您查询票价.'))
if yy < 3:
	print('您的票价全免哦')
elif 3<= yy >=12:
	print('您的票价为10$')
else:
	print('您的票价为15$')"""
# 练习2
while True:
	yy =input('欢迎您来到电影院,您的年龄是多少?\n这边为您查询票价.')
	if yy == 'Q':
		print('祝您观影愉快!')
		break
	i = int(yy)
	if i < 3:
		print('您的票价全免哦')
	elif 3<= i >=12:
		print('您的票价为15$')
	else:
		print('您的票价为15$')

# for循环可以用来遍历不修改列表
