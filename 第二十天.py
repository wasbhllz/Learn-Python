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

print('测试')
print('测试2')
print('测试3')
print('测试4')