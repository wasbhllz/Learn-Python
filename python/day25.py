""" ## 练习
for i in range(1,11):
    if i % 2 == 0:
        continue
    print(i)
# 猜数字游戏
w = 7
x = 0
while True:
    p = int(input('猜数字游戏开始!\n请输入一个数字'))
    x += 1
    if p == w:
        print('猜对了!好棒!')
        break
    elif x == 3:
        print('很遗憾你猜错了,下次再来吧!')
        break
    else:
        print('再来一次!') """

# 用while循环来实现for循环的效果
qq = ['散兵','达达利亚','魈','巴巴托斯']
e = 0
r = len(qq)-1
while e <= r:
    z = qq[e]
    print('我好喜欢'+z+'!')
    e += 1
