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
        print('再来一次!') 

# 用while循环来实现for循环的效果
qq = ['散兵','达达利亚','魈','巴巴托斯']
e = 0
r = len(qq)-1
while e <= r:
    z = qq[e]
    print('我好喜欢'+z+'!')
    e += 1
"""
import tkinter as tk
from tkinter import messagebox
import random

# 创建主窗口
root = tk.Tk()
root.title("猜数字游戏")

# 游戏逻辑
class GuessNumberGame:
    def __init__(self, master):
        self.master = master
        self.secret_number = random.randint(1, 100)  # 随机生成1到100之间的数字
        self.attempts = 0

        # 创建标签和输入框
        self.label = tk.Label(master, text="猜一个1到100之间的数字：")
        self.label.pack()

        self.entry = tk.Entry(master)
        self.entry.pack()

        # 创建按钮
        self.guess_button = tk.Button(master, text="猜数字", command=self.guess)
        self.guess_button.pack()

        self.result_label = tk.Label(master, text="")
        self.result_label.pack()

    def guess(self):
        try:
            guess = int(self.entry.get())  # 获取用户输入的数字
            self.attempts += 1  # 尝试次数加1
            if guess < self.secret_number:
                self.result_label.config(text="太小了，再试试！")
            elif guess > self.secret_number:
                self.result_label.config(text="太大了，再试试！")
            else:
                self.result_label.config(text=f"恭喜你，猜对了！你总共尝试了{self.attempts}次。")
                self.guess_button.config(state="disabled")  # 禁用按钮，结束游戏
        except ValueError:
            self.result_label.config(text="请输入一个有效的数字！")

# 创建游戏实例
game = GuessNumberGame(root)

# 运行主循环
root.mainloop()