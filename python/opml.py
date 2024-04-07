import re

def md_to_opml(md_content):
    # 将Markdown转换为OPML结构的函数
    opml_content = '<?xml version="1.0" encoding="UTF-8"?>\n<opml version="2.0">\n<body>\n'
    indent_level = 0
    for line in md_content.split('\n'):
        if line.startswith('#'):
            # 根据标题的数量确定缩进级别
            new_indent_level = line.count('#')
            # 关闭之前的标签
            while indent_level >= new_indent_level:
                opml_content += '\t' * indent_level + '</outline>\n'
                indent_level -= 1
            # 打开新的标签
            indent_level = new_indent_level
            title = line.replace('#', '').strip()
            opml_content += '\t' * indent_level + f'<outline text="{title}">\n'
    # 关闭所有打开的标签
    while indent_level > 0:
        opml_content += '\t' * indent_level + '</outline>\n'
        indent_level -= 1
    opml_content += '</body>\n</opml>'
    return opml_content

# 读取Markdown文件
with open('example.md', 'r', encoding='utf-8') as file:
    md_content = file.read()

# 转换为OPML
opml_content = md_to_opml(md_content)

# 写入OPML文件
with open('example.opml', 'w', encoding='utf-8') as file:
    file.write(opml_content)

print('转换完成!')
