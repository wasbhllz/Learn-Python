old_list = [1,2,4,5,6,7,8,9]
new_list = []
for q in old_list:
	new_list.append(q*2)
print(new_list)

lst = [2,4,4,5,2,7,4,]
for new in set(lst):
	print(new,'一共出现了',lst.count(new),'次')

lsts = [2,4,4,5,2,7,4,]
lsts.sort()
print(lsts)
