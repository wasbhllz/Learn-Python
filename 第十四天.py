# 综合练习
user = ['感觉','意识','思想','感情','觉悟']
if user:
	for user_1 in user:
		if user_1 == '感情':
			print('我有'+user_1)
		else:
			print('我没有'+user_1)
else:
		print('我是机器')

#综合练习2
new_user = ['muzi','lulu','Au','bing','siyao']	
new_user1 = ['Muzi','mama','baba','Bing']
a = [new for new in new_user1]
for a in new_user1:
	if a.lower() in new_user:
		print('您的用户名已被使用')
	else:
		print('您可以使用该用户名')
		
