## 复习 
g = [b**3 for b in range(3,10,2)]
print(g)

## 综合练习1
for e in range(1,21):
	print(e)
	
a = []
for b in range(1,101):
	a.append(b)
print(a)
print(min(a))
print(max(a))
print(sum(a))

for x in range(1,21,2):
	print(x)
h = [v//3 for v in range(3,31,3)]
print(h)
j = [w**3 for w in range(1,11)]
print(j)
u =[c**2 for c in range(1,11)]
print(u)

## 学习
# 1.[:]切片,是指从列表中获取一部分元素的操作,从:左边开始索引,到右边的终止范围
k = ['new bing','chat gpt','gpt-3.5','gpt-4']
print(k[-3:])

# 2.历遍切片：遍历序列中的每个元素
for o in k[:3]:
	print(o.title())

# 3.复制列表
y = ['迪玛希','邓紫棋','毛不易','周深']
song = y[:]
print(song)
print(y)
y.append('坂本龙一')
song.append('Aimer')
print(y)
print(song)

## 综合练习2
print('The first three items in the list are:')
print(y[:3])
print('The itens three items in the list are:')
print(y[3:6])
print('The last three items in the list are:')
print(y[-3:])

t = k[:]
print(k)
print(t)
k.append('文言一心')
t.append('小爱同学')
print('I like use:')
for r in k:
	print(r)
print('I really enjoy using:')
for o in t:
	print(o)

