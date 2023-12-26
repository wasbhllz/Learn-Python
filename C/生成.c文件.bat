chcp 65001
@echo off
setlocal enabledelayedexpansion
rem 设置起始数字和步长
set /p start=11
set /p step=1
rem 设置文件名的前缀和后缀
set prefix="第"
set suffix="天"
rem 设置要生成或重命名的文件数量
set /p count=10
rem 设置要生成或重命名的文件模式，1为生成，2为重命名
set /p mode=1
rem 根据文件模式执行相应的操作
if %mode%==1 (
    rem 生成新的文件
    echo 正在生成新的文件……
    for /l %%n in (1,1,%count%) do (
        rem 计算文件名中的数字
        set /a num=start+(%%n-1)*step
        rem 格式化文件名中的数字，使其为两位数，如01，10
        if !num! lss 10 (set num=0!num!)
        rem 生成新的文件名
        set newname=%prefix%!num!%suffix%
        rem 检测文件的扩展名，如果没有则默认为.c
        for /f "delims=" %%a in ('dir /b /a-d !newname!.* 2^>nul') do (
            set ext=%%~xa
        )
        if not defined ext (set ext=.c)
        rem 创建新的文件
        echo 这是!newname!!ext!>!newname!!ext!
    )
    echo 文件生成完毕
) else if %mode%==2 (
    rem 重命名已有的文件
    echo 正在重命名已有的文件……
    rem 遍历当前目录下的所有文件
    for %%f in (*) do (
        rem 如果文件名符合指定的格式，就重命名
        if "%%~nf"=="%prefix%!start!%suffix%" (
            rem 计算文件名中的数字
            set /a num=start+step
            rem 格式化文件名中的数字，使其为两位数，如01，10
            if !num! lss 10 (set num=0!num!)
            rem 生成新的文件名
            set newname=%prefix%!num!%suffix%
            rem 检测文件的扩展名
            set ext=%%~xf
            rem 重命名文件
            ren "%%f" "!newname!!ext!"
            rem 更新起始数字
            set start=!num!
        )
    )
    echo 文件重命名完毕
) else (
    rem 输入的文件模式无效
    echo 请输入有效的文件模式（1或2）
)
endlocal
