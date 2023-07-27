# 编码方式错误应对方法
# -- coding: UTF-8 --

# 转标题、大、小写
name = "ww fhkjl"
print(name.title())
print(name.upper())
print(name.lower())

# 2.举一反三：将昨天打印的字符串标题化
print("hello python world!".title())

# 打印  
message = "Hello Phthon world!"
print(message)
message = "Hello Python Crash world!"
print(message)
new_message = "I love you!"
print(new_message)
print("zoo")

# 合并（拼接）字符串
first_name = "与"
last_name = "鹤"
full_name = first_name+""+last_name
print(full_name)
first_name_1 = "阿"
last_name_1 = "帽"
full_name_1 = first_name_1+""+last_name_1
print(full_name_1)
message_1 = full_name+"和"+full_name_1+"在一起了!"
print(message_1)

you = "散兵"
me = "旅行者"
print ('\U0001F600')
print ('😀')

import emoji
print(emoji.emojize('Python is :thumbs_up:'))
print(emoji.demojize('Python is "👍"'))
print(emoji.emojize('Python is :thumbsup:', language='alias'))
print(emoji.demojize('Python is "👍"'))
print(emoji.demojize('Python is 👍'))
print (emoji.emojize ('Python is :thumbs_up:'))
print(emoji.emojize("Python is fun :red_heart:"))
print (emoji.emojize ('Python is fun "❤"'))
print(emoji.emojize("Python is fun :red_heart:", variant="emoji_type"))
print (emoji.emojize ('Python is fun "❤️" #red heart, not black heart'))
print(emoji.is_emoji("👍"))
True

