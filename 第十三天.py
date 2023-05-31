# 练习4
fruit = ['apple','pear','peach']
if 'strawberry' in fruit:
	print('You reslly like strawberry!')
if 'apple' in fruit:
	print('You reslly like apple!')
if 'pear' in fruit:
	print('You reslly like pear!')
if 'peach' in fruit:
	print('You reslly like peach!')
	
# for循环和if语句的共同运用
q = ['青椒','奥尔良','番茄']
for w in q:
	if w == '奥尔良':
		print('抱歉，'+w+'暂时没有供应了。')
	else:
		print('您点了'+w+'!')
	
# 用if检查列表是否为空
y = []
if y:
	for r in y:
		print('您点了'+r+'!')
else:
	print('您是否要点普通披萨?')

# 多个列表的运用
canguan = ['鸡米花','薯条','披萨','可乐','炸鸡']
kehu = ['炸鸡','汉堡','薯条']
for kehus in kehu:
	if kehus in canguan:
		print('有'+kehus+'!')
	else:
		print('抱歉，'+kehus+'没有供应。')
print('请您尽情享用！')
