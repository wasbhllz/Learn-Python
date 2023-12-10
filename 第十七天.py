# python属于强类型、动态类型的语言

# 使用type来确定数据类型
# input生成提示，并接受一个参数作为输入，返回值总为字符串
print(type("haha"))
print(type (1+1))
print(type(1.2))

# eval函数将用户输入作为代码处理,可以将字符串转为数字，列表，字典等
logs = input("请输入 ")
num = eval(logs)
print(num)
print(type(num))

for a in range(1,5):
    for s in range(1,5):
        for d in range(1,5):
            if (a != s) and (a != d) and (s != d):
                print(a,s,d) 

# 格式化字符：
# %s：字符串，%d：十进制整数，%f：浮点数
age = 12
name = "flora"
# 使用 % 符号作为占位符
print("我的名字是%s，我今年%d岁了"%(name,age))
# str.format() 方法
print("我的名字是{0}，我今年{1}岁了".format(name,age))
# f-string 方法
print(f"我的名字是{name},我今年{age:.2f}岁了")

# 写入文件,打开再写入
with open("pip.txt","w") as f:
    f.write("hhhhh")
    