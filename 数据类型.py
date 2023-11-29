''' 
数值的数据类型：
int 整数
float 浮点数
bool 布尔值
complex 复数
'''
# 添加字典中的元素：字典[添加键]=添加值
ints = {'color':'green','age':20}
ints['生命值'] = 100
print(str(ints))

# 字典练习1
a = {"x":0,"y":25,"speed":"中等"}
print("旧位置"+ str(a["x"]))
if a["speed"] == 'slow':
    x_increase = 1 # 增加变量：x增加速度
elif a["speed"] == '中等':
    x_increase = 2
else:
        x_increase = 3
a["x"]= a["x"] + x_increase #新位置=旧位置 +增加速度
print("新速度："+ str(a["x"]))
# 字典练习2
b = {
    '好感度':50,
    '阴暗程度':20,
    '事件':'做拿手菜',
    }
if b['事件'] == '做拿手菜':
    increase = 10
elif b['事件'] == '逛街':
    increase = 5
else:
    increase = -5
b['好感度'] = b['好感度'] + increase
print(str(b['好感度']))
# 字典练习3
computer = {
    'CV':'计算机视觉',
    'ML':'机器学习',
    'DL':'深度学习',
    'NPL':'自然语言处理',
    }
del computer['CV'] # 删除键值对
print(computer)
print('我现在的目标是' + computer['ML'] + '!'+'\n'+'我以后的目标是'+computer['DL']+'，加油！')

'''
经常犯错地方总结：
1.英文拼写错误
2.不同类型的数据不能一起在存储在变量中
3.调用字典中参数的时，需要：字典["键"]
'''
# 遍历字典
date = {'username':'散兵','country':'稻妻','element':'风'}
for key,h in date.items():
    print(key + ':' + h)