## 学习
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
        