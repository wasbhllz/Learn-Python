# 遍历字典
date = {'username':'散兵','country':'稻妻','element':'风'}
for key,h in date.items(): #设定2个变量来存储键——值对
    print(key + ':' + h)

# 遍历字典(返回值的顺序，与字典存储的顺序不同)
date = {
    '魈':'璃月',
    '散兵':'稻妻',
    '达达利亚':'至冬',
    '莱欧斯利':'枫丹',
    '魈':'璃月',
    }
for key,h in date.items():# .items()方法，用于返回字典中的键值对列表
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
for q in date.vlause():
    print(q)
# 用set()函数来调出无序，且不重复的数据集合
for a in set(date.vlause()):
    print(a)
for e in sorted(date.keys()):
    print(e)
# 用valuse()方法返回值的列表
for q in date.values():
    print(q)
# 用set()函数来调出无序，且不重复的数据集合
for a in set(date.values()):
    print(a)
