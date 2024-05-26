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
```C
define B booboo
define X 10
main(int)
{
    int age;
    char name;
    printf("Please enter your first name.");
    scanf("%s",name);
    printf("All right,%c,what's your age?\n",name);
    scanf("%f",age);
    xp= age + X;
    printf("That's a %s!You must be at least %d.\n",B, xp);
    return 0;
}
```

1.define 没有#号
2.main(int) 应该为int main()
3.scanf 没有取地址&
4.%c 应该为%s
未发现：
5.name应该用数组存储
6.px没有在使用前声明

## 17.假设一个程序的开头是这样:
```c
#define B00K "War and Peace"
int main(void)
{
float cost =12.99;
float percent =80.0;
```
请构造一个使用 BOOK、cost和percent的printf()语句，打印以下内容:
This copy of "War and Peace" sells for $l2.99.
That is 80% of list.

```C
printf("This copy of \"%s\" sells for $%.2f.\nThat is %d\% of list.",BOOK,cost,percent);
```
## 18.打印下列各项内容要分别使用什么转换说明?
a.一个字段宽度与位数相同的十进制整数
b.一个形如8A、字段宽度为4的十六进制整数
c.一个形如232.346、字段宽度为10的浮点数
d.一个形如2.33e+002、字段宽度为12的浮点数
e.一个字段宽度为30、左对齐的字符串

%d
%04x // 0表示当字符数少于4时，用0填充，而不是空格
%10.3f
%12e
%-30s // 左对齐

## 19.打印下面各项内容要分别使用什么转换说明?
a.字段宽度为15的unsigned long 类型的整数
b.一个形如0x8a、字段宽度为4的十六进制整数
c.一个形如2.33E+02、字段宽度为12、左对齐的浮点数
d.一个形如+232.346、字段宽度为10的浮点数e.
e.一个字段宽度为8的字符串的前8个字符

%15d
%04x
%-12e
%10.3f
%8.8s //后面的.8表示显示字符串的前8位

## 20.打印下面各项内容要分别使用什么转换说明?
a.一个字段宽度为6、最少有4位数字的十进制整数
b.一个在参数列表中给定字段宽度的八进制整数
c.一个字段宽度为2的字符
d.一个形如+3.13、字段宽度等于数字中字符数的浮点数
e.一个字段宽度为7、左对齐字符串中的前5个字符

%6d
%

## 21.分别写出读取下列各输入行的scanf()语句，并声明语句中用到变量和数组。
a. 101
b.22.32 8.34E-09
c. linguini
catch 22
e. catch 22(但是跳过catch)

## 22.什么是空白?
## 23.下面的语句有什么问题?如何修正?
printf("The double type is $z bytes..n",sizeof(double));

## 24.假设要在程序中用圆括号代替花括号，以下方法是否可行?
#define ( {
#define ) }
应使用数字字母下划线来命名宏

## 25.假设下面是完整程序中的一部分，它们分别打印什么?
```c
a.
    int x=0;
    while(++x < 3){
    printf("%4d"，x);
    }
b.
    int x= 100;
    while (x++ < 103){
    printf("$4d\n",x);
    printf("&4d\n",x);
    }
c.
    char ch='s';
    while (ch < 'w')
    {
    printf("%c",ch);
    ch++;
    }
    printf("%c\n",ch);
```
   1   2
 100 101 101 102 102 103
从's'的ASCII码值开始，逐渐+1打印出对应的字符，直到'w'停止
