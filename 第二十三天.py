""" ## 学习
# input()函数,接受
message = input('等等,要我怎么称呼你呢?')
print('你就是'+message+'吗?很高兴认识你!😊')

# 多行消息提示
message_1 = '我想想,刚才讲到哪了?'
message_1 += '\n你是谁来着?'
a = input(message_1)
print('对哦!你是'+a+'呀!')

# 用int()函数将字符串变成数值
age =input('您的年龄是?')
age = int(age)
if age <= 18:
    print('你真年轻啊!')
else:
    print('长这么大了啊!')

# 判断数字是奇数还是偶数的代码
ab = input('判断数字是奇数还是偶数,\n请输入数字')
ab = int(ab)
if ab %2 ==0:
    print(str(ab)+'是偶数')
else:
    print(str(ab)+'是奇数')

## 练习
p = input('欢迎光临本店,\n您想挑选怎样的花呢?')
print(p+'吗?本店有几个品种哦,跟我来这边看下.') 
# 练习2
a = input('您这边有几个人用餐呢?')
a = int(a)
if a <=8:
    print('这边有空位,您先坐下.')
else:
    print('暂时没有空位了,欢迎下次光临,记得提前预约哦.') 
# 练习3
s = input('判断是否是10的倍数')
s = int(s)
if s%10 ==0:
    print('是10的倍数')
else:
    print('不是10的倍数')

## 学习
# while(循环)关键字应用
m = 1
while m <=5:
    print(m)
    m +=1"""
# 程序退出
message = '输入Q退出本程序.\n请输入'
hh = ''
while hh != 'Q':
    hh = input(message)
    print('你好'+hh)
