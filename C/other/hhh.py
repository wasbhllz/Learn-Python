import os
import random
from datetime import datetime

# 设置您的笔记文件夹路径
notes_directory = 'C:/Users/Administrator/AppData/Local/Programs/Learn-Python/C/other'

# 获取所有笔记文件
all_notes = [file for file in os.listdir(notes_directory) if file.endswith('.md')]

# 随机选择一篇笔记
random_note = random.choice(all_notes)

# 获取当前日期
today = datetime.now().strftime('%Y-%m-%d')

# 创建或更新一个文件，记录今天打开的笔记
with open('daily_note.txt', 'w') as file:
    file.write(f"{today}: {random_note}\n")

# 打开选中的笔记（确保Obsidian已注册为.md文件的默认程序）
os.startfile(os.path.join(notes_directory, random_note))
