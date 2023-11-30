# 字典，可以储存任意数量的信息{}
ken = {'流浪者':'风散','神之眼':'风系'}
print(ken['流浪者'])
print(ken['神之眼'])
me = ken['流浪者']
print('我最爱的是'+me+'！')

# 添加字典中的元素：字典[添加键]=添加值
ken['性格'] = '傲娇'
ken['性别'] = '男'
print(ken)

# 更改字典：键中的值
ken['性格'] = '毒舌'
print(ken)

# 练习1
ints = {'color':'green','age':20}
ints['生命值'] = 100
print(str(ints))

# 练习2
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

# 练习3
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

# 遍历字典(返回值的顺序，与字典存储的顺序不同)
date = {
    '魈':'璃月',
    '散兵':'稻妻',
    '达达利亚':'至冬',
    '莱欧斯利':'枫丹',
    '魈':'璃月',
    }
for key,h in date.items():# .items()方法，用于返回字典中的键值对列表,需要添加两个变量存储
    print(key + ':' + h)
    print(key+'原来是'+h+'国的人！') # 同时遍历

# 遍历字典中的键，返回列表（不需要值的情况）
favorite = ['散兵','达达利亚'] # 创建列表，指定特定范围内的键
for y in date.keys():
    print(y)
    if y in favorite:
        print('\n我喜欢的'+y+'原来是'+h+'国的人！')
# 遍历后不包含在该字典中，弹出消息
if '温迪' not in date.keys():
    print('温迪差一点成为我喜欢的人')
# 用sorted()函数给返回的列表排序
'''
排序规则：从小到大排序；对于字符串，按字母表顺序排序；对于元组，则按照元组中元素的自然顺序进行排序。
'''
for e in sorted(date.keys()):
    print(e)
# 用valuse()方法返回值的列表
for q in date.values():
    print(q)
# 用set()函数来调出无序，且不重复的数据集合
for a in set(date.values()):
    print(a)

# 综合练习
dictionary = {'keys':'返回键',
              'values':'返回值',
              'set':'合集',
              'items':'返回键值对',
              'sorted':'排序',
              }
for m,n in dictionary.items():
    print(m + ':'+ n) # 忘记需要添加两个变量
dictionary['title'] = '标题化'
dictionary['upper'] = '转大写'
dictionary['lower'] = '转小写'
print(dictionary)
for her in dictionary.keys():
    print(her+'是我要好好掌握的函数及方法')
for song in dictionary.values():
    print(song)
new_function = ('range','pop','append') # 循环时使用元组作为字典的键,不然用列表会报错(这个错误通常发生在你试图用不可哈希（即可变）的类型作为集合（set）或字典（dict）的键,元组（tuple）,列表（list）和字符串（str）是不可哈希的类型)
if new_function not in dictionary.keys():
    for king in new_function:
        print(king + '是我还没有完全掌握的函数')
# 嵌套:将字典存储在列表或者将列表存储在字典中
# 字典列表
# 方法1，适合少量添加
hilichurl_1 = {'color':'green','经验':'5'}
hilichurl_2 = {'color':'red','经验':'10'}
hilichurl_3 = {'color':'blue','经验':'15'}
collection = [hilichurl_1,hilichurl_2,hilichurl_3]
for hilichurl in collection:
    print(hilichurl)
# 批量将字典存储为列表
list = []
for number in range(30):
    num = {'color':'red','经验':'10'} # 循环的内容
    list.append(num)
for li in list[:5]: # 打印前5个
    print(li)


