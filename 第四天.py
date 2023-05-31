# 综合练习（包含列表的修改、添加、弹出、删除）
you = ['阳光','雨露','微风']
print(you[0]+'\n'+you[1]+'\n'+you[2])
print( )
print(you)
print(you[2])
print( )
you[2] = '明月' #修改元素
print(you[0]+'\n'+you[1]+'\n'+you[2]+'\n')

you.insert(0,'浮云') #添加
you.insert(2,'天空')
you.append('星辰')
print(you[0]+'\n'+you[1]+'\n'+you[2]+'\n'+you[3]+'\n'+you[4]+'\n'+you[5])
message = '真的很喜欢'
print('这两个我'+message+'。\n')

a = you.pop() #弹出
b = you.pop()
c = you.pop()
d = you.pop()
print(message+a+'!')
print(message+b+'!')
print(message+c+'!')
print(message+d+'!')
print( )
print(you)
h = '我爱'
print(h+you[0])
print(h+you[1])
print(len(you))
del you[0] #删除
del you[0]
print(you)

# 1.一般作用于原列表排序sort()，无返回值，会改变原列表元素的值
# 按字母正序
Genshin = ['lumine','aether','barbatos','morax']
Genshin.sort()
print(Genshin)
# 按字母倒序+(reverse=True)
Genshin.sort(reverse=True)
print(Genshin)

# 2.对任意可迭代对象进行排序sorted(),有返回值，不会改变原列表元素的值
# 按字母正序
print(sorted(Genshin))
# 按字母倒序+(reverse=True)
print(sorted(Genshin,reverse=True))

# 3.颠倒列表元素的排列顺序，无返回值，会改变原列表元素的值
are = ['2','1','6','3']
are.reverse()
print(are)
are.reverse()
print(are)
# 4.用len()确定列表长度
print(len(are))

# 综合练习2
difang = ['东京','名古屋','西藏','云南','皇后镇']
print(difang)
print(sorted(difang)) #不改变
print(sorted(difang,reverse=True))
difang.reverse() #对原列表进行的修改，无返回值
print(difang)
difang.reverse()
print(difang)
difang.sort() #对原列表进行排序，无返回值
print(difang)
difang.sort(reverse=True)
print(difang)
del difang[2]
print(difang)
print(len(difang))

# 用for循环打印个性化语句（注意加冒号和缩进）
for di in difang:
	print('我超想去'+di+'!')
	print('真的吗？'+di+',有这么好玩吗？\n')
print('当然很好玩啊!\n')

# 综合练习3
t = ['阿贾克斯','公子','达达利亚']
for ti in t:
	print(ti)
	print('我喜欢'+ti+'!')
print('我爱'+ti+'的自信和狂妄！\n实在是太吸引我了！\n')
