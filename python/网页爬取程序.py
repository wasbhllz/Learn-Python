# 导入需要的库
import requests
from bs4 import BeautifulSoup
import pandas as pd

# 定义一个空的列表，用来存储爬取到的数据
data = []

# 定义一个函数，用来爬取一个网页的数据
def crawl_page(url):
    # 发送请求，获取响应
    response = requests.get(url)
    # 判断响应状态码是否为200
    if response.status_code == 200:
        # 解析响应内容，得到一个BeautifulSoup对象
        soup = BeautifulSoup(response.text, "html.parser")
        # 找到所有的视频列表项，得到一个Tag列表
        videos = soup.find_all("li", class_="video-item matrix")
        # 遍历每个视频列表项，提取需要的数据
        for video in videos:
            # 提取播放量
            play = video.find("span", class_="so-icon watch-num").text.strip()
            # 提取点赞数
            like = video.find("span", class_="so-icon hide").text.strip()
            # 提取评论数
            comment = video.find("span", class_="so-icon comment").text.strip()
            # 提取关注数
            follow = video.find("span", class_="so-icon favorite").text.strip()
            # 提取转发数
            share = video.find("span", class_="so-icon share").text.strip()
            # 提取标题
            title = video.find("a", class_="title").text.strip()
            # 提取评论
            comments = []
            # 找到所有的评论列表项，得到一个Tag列表
            comment_list = video.find_all("div", class_="comment-list")
            # 遍历每个评论列表项，提取评论内容
            for c in comment_list:
                comments.append(c.text.strip())
            # 把提取到的数据组成一个字典，添加到列表中
            data.append({
                "play": play,
                "like": like,
                "comment": comment,
                "follow": follow,
                "share": share,
                "title": title,
                "comments": comments
            })

# 定义一个变量，用来记录当前爬取的页数
page = 1

# 定义一个循环，用来爬取多个网页的数据，直到达到目标数量或没有更多网页为止
while True:
    # 打印当前爬取的页数和数据量
    print(f"正在爬取第{page}页，已经爬取{len(data)}条数据。")
    # 拼接网页的url，根据关键词和页数进行替换
    url = f"https://search.bilibili.com/all?keyword=%E5%8E%9F%E7%A5%9E%E4%BA%8C%E5%88%9B&from_source=nav_search_new&page={page}"
    # 调用函数，爬取一个网页的数据
    crawl_page(url)
    # 判断是否达到目标数量，如果是，就跳出循环
    if len(data) >= 5000:
        break
    # 判断是否还有下一页，如果没有，就跳出循环
    if page == 50:
        break
    # 增加页数，继续循环
    page += 1

# 打印最终爬取的数据量
print(f"最终爬取了{len(data)}条数据。")

# 把列表转化为DataFrame对象
df = pd.DataFrame(data)

# 把DataFrame对象保存为xlsx文件，指定文件名和位置
df.to_excel("b站原神二创数据.xlsx", index=False)

# 打印保存成功的提示信息
print("文件已保存在桌面上。")
