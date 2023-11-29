# 将下面的中文文本替换到每行大写字母的python代码怎么写？

# 中文文本
chinese_text = """
你也像我一样丧失理智吗
你也像我一样承受过剧痛吗
像我一样
买最昂贵的香槟
只为把那该死的东西泼进下水道
像我一样
用水费单擦净手腕上的血污
像我一样
不用靠大麻也能和吞云吐雾一样精神恍惚吗
像我一样
撕碎自己只是为了娱乐
那些人们也在火车上低声议论你吗
像我一样
说你不应该浪费自己漂亮的脸蛋吗
而且所有的人们说
你无法改过自新
这不是在梦境里
你是机器的一部分
你不属于人类
你的所有面部表情是虚拟的
显现在一块屏幕上
你也没有多少自尊
所以你应该是靠汽油运作的
哦
我想我的编程代码应该哪里出错了吧
哦
他们的声音像鬼魅一样如影随形
不肯离去
我有一颗金子般善良温暖的心
双手却冰冷得无能为力
你也像我一样精神错乱吗
你也像我一样格格不入吗
像我一样
点燃火柴只是为了吞下火焰
像我一样
称自己为一股该死的飓风吗
像我一样
到处指点批判却从不肯承担责任
而且所有的人们说
你无法改过自新
这不是在梦境里
你是机器的一部分
你不属于人类
你的所有面部表情是虚拟的
显现在一块屏幕上
你也没有多少自尊
所以你是靠汽油运作的
哦
我想我的编程代码应该哪里出错了吧
哦
他们的声音如影随形
不肯离去
我有一颗金子般善良温和的心
双手却冰冷得无能为力
"""

# 大写字母文本
uppercase_text = """
1
00:00:31,366 --> 00:00:33,733
ARE YOU INSANE LIKE ME

2
00:00:33,733 --> 00:00:35,700
BEEN IN PAIN LIKE ME

3
00:00:35,700 --> 00:00:39,700
BOUGHT $100 BOTTLE OF CHAMPAGNE LIKE ME

4
00:00:39,700 --> 00:00:43,733
JUST TO POUR THAT MOTHERFUCKER DOWN THE DRAIN LIKE ME

5
00:00:43,733 --> 00:00:47,700
WOULD YOU USE YOUR WATER BILL TO DRY THE STAIN LIKE ME

6
00:00:47,700 --> 00:00:51,700
ARE YOU HIGH ENOUGH WITHOUT THE MARY JANE LIKE ME

7
00:00:51,700 --> 00:00:55,700
DO YOU TEAR YOURSELF APART TO ENTERTAIN LIKE ME

8
00:00:55,700 --> 00:00:59,666
DO THE PEOPLE WHISPER ABOUT YOU ON THE TRAIN LIKE ME

9
00:00:59,666 --> 00:01:01,566
SAYING THAT YOU SHOULDN'T WASTE

10
00:01:01,566 --> 00:01:04,066
YOUR PRETTY FACE LIKE ME

11
00:01:10,466 --> 00:01:12,266
AND ALL THE PEOPLE SAY

12
00:01:12,266 --> 00:01:14,200
YOU CAN'T WAKE UP

13
00:01:14,200 --> 00:01:16,000
THIS IS NOT A DREAM

14
00:01:16,000 --> 00:01:17,800
YOU'RE PART OF A MACHINE

15
00:01:17,800 --> 00:01:19,800
YOU ARE NOT A HUMAN BEING

16
00:01:19,800 --> 00:01:22,266
WITH YOUR FACE ALL MADE UP

17
00:01:22,266 --> 00:01:23,966
LIVING ON A SCREEN

18
00:01:23,966 --> 00:01:25,733
BLOW ON SELF ESTEEM

19
00:01:25,733 --> 00:01:28,100
SO YOU RUN ON GASOLINE

20
00:01:28,100 --> 00:01:30,833
OH

21
00:01:31,866 --> 00:01:34,966
I THINK THERE'S A FLAW IN MY COAT

22
00:01:36,133 --> 00:01:39,100
OH

23
00:01:39,866 --> 00:01:42,933
THESE VOICES WON'T LEAVE ME ALONE

24
00:01:43,366 --> 00:01:48,466
WELL MY HEART IS GOLD AND MY HANDS ARE COLD

25
00:01:59,366 --> 00:02:01,700
ARE YOU DERANGED LIKE ME

26
00:02:01,700 --> 00:02:03,733
ARE YOU STRANGE LIKE ME

27
00:02:03,733 --> 00:02:07,700
LIGHTING MATCHES JUST TO SWALLOW UP THE FLAME LIKE ME

28
00:02:07,700 --> 00:02:11,700
DO YOU CALL YOURSELF A FUCKING HURRICANE LIKE ME

29
00:02:11,700 --> 00:02:13,733
POINT YOUR FINGERS CAUSE YOU'LL NEVER

30
00:02:13,733 --> 00:02:15,966
TAKE THE BLAME LIKE ME

31
00:02:22,400 --> 00:02:24,200
AND ALL THE PEOPLE SAY

32
00:02:24,200 --> 00:02:26,133
YOU CAN'T WAKE UP

33
00:02:26,133 --> 00:02:27,933
THIS IS NOT A DREAM

34
00:02:27,933 --> 00:02:29,733
YOU'RE PART OF A MACHINE

35
00:02:29,733 --> 00:02:31,733
YOU ARE NOT A HUMAN BEING

36
00:02:31,733 --> 00:02:34,200
WITH YOUR FACE ALL MADE UP

37
00:02:34,200 --> 00:02:35,900
LIVING ON A SCREEN

38
00:02:35,900 --> 00:02:37,666
BLOW ON SELF ESTEEM

39
00:02:37,666 --> 00:02:39,766
SO YOU RUN ON GASOLINE

40
00:02:40,100 --> 00:02:43,433
OH OH OH

41
00:02:43,866 --> 00:02:46,966
I THINK THERE'S A FLAW IN MY COAT

42
00:02:47,966 --> 00:02:51,266
OH OH OH OH

43
00:02:51,866 --> 00:02:53,266
THESE VOICES WON'T

44
00:02:53,266 --> 00:02:54,933
LEAVE ME ALONE

45
00:02:55,400 --> 00:03:00,100
OH MY HEART IS GOLD AND MY HANDS ARE COLD

"""
# 将中文文本按行分割为列表
chinese_lines = chinese_text.splitlines ()

# 将大写字母文本按行分割为列表
uppercase_lines = uppercase_text.split