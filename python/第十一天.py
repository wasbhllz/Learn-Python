# 布尔表达式
kk = (7,3,1)
if kk[0] != 3:
	print('True')

if kk[1] < 1:
	print('True')
else:
	print('False')

if kk[2] or kk[1] < 10:
	print('True')

if kk[0] and kk[1] != 7:
	print('True')
else:
	print('False')
	
ww = 7
if ww > 4:
	price = '1'
elif ww > 10:
	price = '2'
else:
	price = ''
print('你需要'+price+'个冰淇淋')
