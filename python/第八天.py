# 元组(),不能被修改。
k = (200,9)
print(k[0])
print(k[1])
for o in k:
	print(o)

# 元组变量赋值
k = (400,100)
for o in k:
	print(o)

# 综合练习
pizza = ('榴莲','奥尔良','香辣','红烩','芝士')
print(pizza)
pizza = ('番茄','牛肉','香辣','红烩','芝士')
for w in pizza:
	print(w)

# 列表
def modify_list(nums): # list == 列表
	q = []
	for num in nums: # ==比较运算符，=赋值运算符
		if num % 2 == 0: # %返回除法的余数，无余数时代表可以被整除
			q.append(num // 2) # //为地板除法，返回结果的最大整数
	nums.clear() # clesr()删除列表中所有的元素
	nums.extend(q) # extend()一次性在列表末尾追加数据

# 示例测试
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
modify_list(nums)
print(nums)
