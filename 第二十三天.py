## 学习
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