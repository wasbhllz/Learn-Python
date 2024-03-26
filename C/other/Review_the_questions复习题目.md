# 复习题目
// 12.20
## 1．C语言的基本模块是什么？
包含外部文件的函数头和花括号中声明和语句的函数体

## 2．什么是语法错误？写出一个英语例子和C语言例子。
将关键字作为变量使用

## 3．什么是语义错误？写出一个英语例子和C语言例子。
C语法正确,但表达的代码指令有偏差,是错误的

## 4．Indiana Sloth编写了下面的程序，并征求你的意见。请帮助他评定。
- 外部文件忘记打尖括号
- main主函数的括号错误
- 声明后忘记打分号
- 函数体的括号没结尾且错误
- 变量赋值符合有误
- 引用变量时错误
- 字符串没有打双引号

## 6．在main、int、function、char、=中，哪些是C语言的关键字？
int和char是关键字,main是函数名,function是函数名,=是赋值符号

## 7.请问，在执行完第7、第8、第9行后，程序的状态分别是什么？
a = 5,b = 2
b = 5,a = 5
b = 5,a = 5

// 12.21
## 8.指出下面各种数据使用的合适数据类型(有些可使用多种数据类型
a.East Simpleton 的人口
b.DVD 影碟的价格
c.本章出现次数最多的字母
d，本章出现次数最多的字母次数
整型(int)或长整型(long)
浮点型(float)
字符类型(char)
整型(int)

## 9.在什么情况下要用 long 类型的变量代替 int 类型的变量?

超过int类型的范围

## 10.Dottie Cawm 编写了一个程序，请找出程序中的错误
include <stdio.h>
main
float g; h;float tax, rate;
g=e21;
tax = rate*g;

## 11.指出下列常量的类型和含义(如果有的话):
a.'\b' //~~整型~~（转义字符） **字符常量**
b.1066 //整数常量 **（十进制数值）**
c.99.44 //浮点常量**（小数数值）**
d.0XAA //（十六进制）**整数常量**
e.2.0e30
浮点型~~（指数数值）~~**（科学计数法数值）**

## 12.写出下列常量在声明中使用的数据类型和在 printf() 中对应的转换说明:
12 //int,%d
0X3 //int,%x
'c' //char,%c
2.34E07 //float,%f
'\040' //**转义字符:char,%c**
7.0 //float,%f
6L //~~double~~,%f **long**
6.0f //double,%f **floar**
0x5.b6p12 // **float,%a**

## 13.求两个数的较大值
一个函数求两个整数的较大值如:
输入:10 20
输出较大值:20

// 24.03.26
## 14.假设下列示例都是完整程序中的一部分，它们打印的结果分别是什么?
```C
a.printf("He sold the painting for $%2.2f.\n",2.345e2);
b.printf("%c%c%c\n",'H',105,'\41');
c. #define Q "His Hamlet was funny without being vulgar."
printf("%s\nhas %d characters.\n",Q,strlen(Q));
d. printf("Is %2.2e the same as %2.2f?\n",1201.0,1201.0);
```
- He sold the painting for $234.50.
- Hi!
- His Hamlet was funny without being vulgar.
has 42 characters.
- Is 1.201e+3 the same as 1201.00?

## 15.在第2题的c中，要输出包含双引号的字符串Q，应如何修改?
修改为printf("\"%s\"",Q);

## 16.找出下面程序中的错误
