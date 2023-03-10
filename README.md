# CPP-Problems

C++的一些题目

# 输入输出和基本计算
## T1 将一个四位数，反顺序输出
题目描述：
将一个四位数，反顺序输出

输入描述：一行，输入一个整数 n(1000 <= n <= 9999)

输出描述：针对每组的输入，反向输出对应的四位数

示例：

输入：2345

输出：5432

## T2 计算 BMI 指数
题目描述：
计算 BMI 指数（身体质量指数）。BMI 指数（即身体质量指数，简称体质指数又称体重，英文为 Body Mass
Index，简称 BMI），是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康
的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI 值是
一个中立而可靠的指标

输入描述：一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔

输出描述：一行，BMI 指数（保留两位小数）

示例：

输入：70 170

输出：24.22

## T3 大小写字母转换
题目描述：
实现字母的大小写转换。多组输入输出

输入描述：多组输入，每一行输入大写字母

输出描述：针对每组输入输出对应的小写字母

示例：

输入：A B

输出：a b

## T4 计算球的体积
题目描述：
给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*π*r^3 ，其中 π= 3.1415926

输入描述：一行，用浮点数表示的球体的半径

输出描述：一行，球体的体积，小数点后保留 3 位

示例：

输入：3.0

输出：113.097

## T5 字符金字塔
题目描述：
输入一个字符，用它构造一个三角形金字塔

输入描述：输入只有一行，一个字符

输出描述：该字符构成的三角形金字塔

示例：

输入：1

输出：

&ensp;&ensp;&ensp;&ensp;1

&ensp;&ensp;&ensp;1&ensp;1

&ensp;&ensp;1&ensp;1&ensp;1

&ensp;1&ensp;1&ensp;1&ensp;1

1&ensp;1&ensp;1&ensp;1&ensp; 1

## T6 总成绩和平均成绩
题目描述：
依次输入一个学生的 3 科成绩，在屏幕上输出该学生的总成绩以及平均成绩

输入描述：
一行，3 科成绩，成绩之间用一个空格隔开

输出描述：
一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开

示例：

输入：
79.5 80.0 98.0

输出：
257.50 85.83

## T7 进制计算
题目描述：
输入一个十六进制数 a 和一个八进制数 b，输出 a+b 的十进制结果

输入描述：
一个十六进制数 a 和一个八进制数 b，中间间隔一个空格

输出描述：
a+b 的十进制结果

示例：

输入：
0x12 05

输出：
23

## T8 移位计算 2 的 n 次方的计算
题目描述：
不使用累计乘法的基础上，通过移位运算（<<）实现 2 的 n 次方的计算

输入描述：
多组输入，每一行输入整数 n（0 <= n < 31）

输出描述：
针对每组输入输出对应的 2 的 n 次方的结果

示例：

输入：
2
10

输出：
4
1024

## T9  计算三角形的周长和面积

题目描述：
根据给出的三角形 3 条边 a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积

输入描述：
三角形 3 条边（能构成三角形），中间用一个空格隔开

输出描述：
三角形周长和面积（保留两位小数），中间用一个空格隔开

示例：

输入：
3 3 3

输出：
circumference=9.00 area=3.90

## T10 Bingo喝酸奶
题目描述：
妈妈买了一箱酸奶，里面有 n 盒未打开的酸奶，Bingo 喜欢喝酸奶，第一时间发现了酸奶。Bingo 每 h 分钟能喝光一盒酸
奶，并且 Bingo 在喝光一盒酸奶之前不会喝另一个，那么经过 m 分钟后还有多少盒未打开的酸奶？

输入描述：
多组输入，每组输入仅一行，包括 n，h 和 m（均为整数）。输入数据保证 m <= n * h

输出描述：
针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数

示例：

输入：
8 5 16

输出：
4

# 选择结构和循环结构
## T11 完美成绩判断
题目描述：
Bingo 想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在 90~100 之
间，如果是则输出“Perfect”

输入描述：
多组输入，每行输入包括一个整数表示的成绩（90~100）

输出描述：
针对每行输入，输出“Perfect”

示例：

输入：
98

输出：
Perfect

## T12 最大公约数和最小公倍数
题目描述：
小明最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题

输入描述：
每组输入包含两个正整数 n 和 m

输出描述：
对于每组输入，输出一个正整数，为 n 和 m 的最大公约数与最小公倍数之和

示例：

输入：
20 30

输出：
70

## T13 竞选社长
题目描述：
假设你们社团要竞选社长，有两名候选人分别是 A 和 B，社团每名同学必须并且只能投一票，最终得票多的人为社长

输入描述：
一行，字符序列，包含 A 或 B，输入以字符 0 结束

输出描述：
一行，一个字符，A 或 B 或 E，输出 A 表示 A 得票数多，输出 B 表示 B 得票数多，输出 E 表示二人得票数相等

示例：

输入：
ABBABBAAB0

输出：
B

## T14 计算一元二次方程
题目描述：
从键盘输入 a, b, c 的值，编程计算并输出一元二次方程 ax^2+bx+c=0 的根，当 a=0 时，输出“Not quadratic equation”，当 a≠0 时，根据 △=b^2-4*a*c 的三种情况计算并输出方程的根

输入描述：
多组输入，一行，包含三个浮点数 a, b, c，以一个空格分隔，表示一元二次方程 ax^2+bx+c=0 的系数

输出描述：
针对每组输入，输出一行，输出一元二次方程 ax^2+bx+c=0 的根的情况

如果 a=0，输出“Not quadratic equation”

如果 a≠0，分三种情况：

△=0，则两个实根相等，输出形式为：x1=x2=...

△>0，则两个实根不等，输出形式为：x1=...;x2=...，其中 x1<x2

△<0，则有两个虚根，则输出：x1=实部-虚部i;x2=实部+虚部i，即 x1 的虚部系数小于等于 x2 的虚部系数，实部为 0 时不可省略。实部=-b/(2*a),虚部= sqrt(-△)/(2*a)所有实数部分要求精确到小数点后 2 位，数字、符号之间没有空格

示例：

输入：

2.0 7.0 1.0

0.0 3.0 3.0

1 2 1

2 2 5

1 0 1

输出：

x1=-3.35;x2=-0.15

Not quadratic equation

x1=x2=-1.00

x1=-0.50-1.50i;x2=-0.50+1.50i

x1=0.00-1.00i;x2=0.00+1.00i

## T15 获取月份天数
题目描述：
Bingo 想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天

输入描述：
多组输入，一行有两个整数，分别表示年份和月份，用空格分隔

输出描述：
针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天

示例：

输入：
2008 2

输出：
29

## T16 三角形判断
题目描述：
Bingo 想知道已经给出的三条边 a，b，c 能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）

输入描述：
题目有多组输入数据，每一行输入三个 a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔

输出描述：
针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”

示例：

输入：

2 3 2

3 3 3

输出：

Isosceles triangle!

Equilateral triangle

## T17 HTTP状态码
题目描述：
Bingo 访问网站，得到 HTTP 状态码，但他不知道什么含义，老师告诉他常见 HTTP 状态码：200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁止），404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）

输入描述：
多组输入，一行，一个整数（100~600），表示 HTTP 状态码

输出描述：
针对每组输入的 HTTP 状态，输出该状态码对应的含义，具体对应如下：

200-OK

202-Accepted

400-Bad Request

403-Forbidden

404-Not Found

500-Internal Server Error

502-Bad Gateway

示例：

输入：
200

输出：
OK

## T18 统计成绩
题目描述：
输入 n 科成绩（浮点数表示），统计其中的最高分，最低分以及平均分

输入描述：
两行，第 1 行，正整数 n（1≤n≤100），第 2 行，n 科成绩（范围 0.0~100.0），用空格分隔

输出描述：
输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留 2 位），用空格分隔

示例：

输入：

5

99.5 100.0 22.0 60.0 88.5

输出：

100.00 22.00 74.00

## T19 直角三角形图案
题目描述：
小明学习了循环，Bingo 老师给他出了一系列打印图案的练习，该任务是打印用“1”组成的直角三角形图案

输入描述：
多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“1”的数量，也表示输出行数

输出描述：
针对每行输入，输出用“1”组成的对应长度的直角三角形，每个“1”后面有一个空格

示例：

输入：
5

输出：

1

1 1

1 1 1

1 1 1 1

1 1 1 1 1 

## T20 公务员面试
题目描述：
Bingo 去面试公务员公务员面试现场打分。有 7 位考官，从键盘输入若干组成绩，每组 7 个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩

输入描述：
一行，输入 7 个整数（0~100），代表 7 个成绩，用空格分隔

输出描述：
一行，输出去掉最高分和最低分的平均成绩，小数点后保留 2 位，每行输出后换行

示例：

输入：
99 45 78 67 72 88 60

输出：
73.00

## T21 X 型图案
题目描述：
小明学习了循环，Bingo 老师给他出了一系列打印图案的练习，该任务是打印用“1”组成的 X 形图案

输入描述：
多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度

输出描述：
针对每行输入，输出用“1”组成的 X 形图案

示例：

输入：
5

输出：

1&ensp;&ensp;&ensp;1

&ensp;1&ensp;1&ensp; 
 
&ensp;&ensp;1
  
&ensp;1&ensp;1&ensp;
 
1&ensp;&ensp;&ensp;1

## T22 空心正方形图案
题目描述：
小明学习了循环，Bingo 老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案

输入描述：
多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“1”的数量

输出描述：
针对每行输入，输出用“1”组成的“空心”正方形，每个“1”后面有一个空格

示例：

输入：
4

输出：

1&ensp;1&ensp;1&ensp;1

1&ensp;&ensp;&ensp;&ensp;&ensp;1

1&ensp;&ensp;&ensp;&ensp;&ensp;1

1&ensp;1&ensp;1&ensp;1

## T23 奇偶数统计
题目描述：
任意输入一个正整数 N，统计 1~N 之间奇数的个数和偶数的个数，并输出

输入描述：
一行，一个正整数 N。（1≤N≤100,000）

输出描述：
一行，1~N 之间奇数的个数和偶数的个数，用空格分开

示例：

输入：
5

输出：
3 2

## T24 求质数个数
题目描述：
小明知道了什么是质数（只能被 1 和他自身整除的数），他现在想知道所有三位整数中，有多少个质数 

输入描述：
无

输出描述：
一行，一个整数，表示所有三位整数中，有多少个质数

## T25 包含 9 的数字
题目描述：
2019 年已经过去了，小明想知道 1~2019 中有多少个包含数字 9 的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“299”等

输入描述：
无

输出描述：
一行，一个整数，表示 1~2019 中共有多少个数包含数字 9

# 指针、数组、字符串、函数
## T26 有序序列插入整数
题目描述：
有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序

输入描述：
第一行输入一个整数 N(0≤N≤50)。第二行输入 N 个升序排列的整数，输入用空格分隔的 N 个整数。第三行输入想要进行插入的一个整数

输出描述：
输出为一行，N+1 个有序排列的整数

示例：

输入：

5

1 6 9 22 30

8

输出：
1 6 8 9 22 30

## T27 杨辉三角
题目描述：
小明知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，他想知道杨辉三角的前 n 行，请编程帮他解答。杨辉三角，本质上是二项式(a+b)的 n 次方展开后各项的系数排成的三角形。其性质包括：每行的端点数为 1， 一个数也为 1；每个数等于它左上方和上方的两数之和

输入描述：
第一行包含一个整数 n。 (1≤n≤30)

输出描述：
包含 n 行，为杨辉三角的前 n 行，每个数输出域宽为 5

示例：

输入：
6

输出：

1

1 1

1 2 1

1 3 3 1

1 4 6 4 1

1 5 10 10 5 1

## T28 序列中整数去重
题目描述：
输入 n 个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置

输入描述：
输入包含两行，第一行包含一个正整数 n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含 n 个整数（范围 1~5000），用空格分隔

输出描述：
输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔

示例：

输入：

5

10 12 93 12 75

输出：

10 12 93 75
## T29 最高分与最低分之差
题目描述：
输入 n 个成绩，换行输出 n 个成绩中最高分数和最低分数的差

输入描述：
两行，第一行为 n，表示 n 个成绩，不会大于 10000。第二行为 n 个成绩（整数表示，范围 0~100），以空格隔开

输出描述：
一行，输出 n 个成绩中最高分数和最低分数的差

示例：

输入：

10

98 100 99 97 95 99 98 97 96 100

输出： 5
## T30 查找数字
题目描述：
给定 n 个整数和一个整数 x，小明想从 n 个整数中判断 x 出现几次，请编程帮他实现

输入描述：共 3 行。第一行，一个整数，表示 n（1 <= n <= 100）。第二行，共输入 n 个整数，两个整数之间用空格分隔。第三行，输入一个整数，表示要查找的整数 x

输出描述：
一行，表示整数 x 出现的次数

示例：

输入：

5

1 1 2 1 3

1

输出：

3
## T31 矩阵元素定位
题目描述：
小明得到了一个 n 行 m 列的矩阵，现在他想知道第 x 行第 y 列的值是多少，请你帮助他完成这个任务

输入描述：
第一行包含两个数 n 和 m，表示这个矩阵包含 n 行 m 列。从 2 到 n+1 行，每行输入 m 个整数，用空格分隔，共输入 n*m 个数，表示矩阵中的元素。接下来一行输入 x 和 y，用空格分隔，表示小明想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)

输出描述：
一行，输出一个整数值，为陈友铭想知道的值

示例：

输入：

2 3

1 2 3

4 5 6

1 2

输出：

2
## T32 最高身高
题目描述：
小明想从 n 行 m 列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务

输入描述：
第一行包含两个整数 n 和 m，表示这个方阵队列包含 n 行 m 列。从 2 到 n+1 行，每行输入 m 个整数，用空格分隔，共输入n*m 个数，表示方阵中的所有人的身高（保证输入身高都不相同）(1≤x≤n≤10，1≤y≤m≤10)

输出描述：
一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号

示例：

输入：

2 2

175 180

176 185

输出：

2 2
## T33 矩阵相等
题目描述：
小明得到了两个 n 行 m 列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)

输入描述：
第一行包含两个整数 n 和 m，表示两个矩阵包含 n 行 m 列，用空格分隔。从 2 到 n+1 行，每行输入 m 个整数，用空格分隔，共输入n * m 个数，表示第一个矩阵中的元素。从 n+2 行到 2n+1，每行输入 m 个整数，用空格分隔，共输入 n*m 个数，表示第二个矩阵中的元素。（1 < n,m < 10）

输出描述：
一行，如果两个矩阵相等输出"Yes"并换行，否则输出"No"并换行

示例：

输入：

2 2

1 2

3 4

1 2

3 4

输出：
Yes
## T34 统计正负数的个数
题目描述：
输入 10 个整数，分别统计输出正数、负数的个数

输入描述：
输入 10 个整数，用空格分隔

输出描述：
两行，第一行正数个数，第二行负数个数

示例：

输入：
-1 2 3 -6 7 8 -1 6 8 10

输出：

positive:7

negative:3
## T35 矩阵交换
题目描述：
小明有一个矩阵，他想知道经过 k 次行变换或列变换后得到的矩阵。请编程帮他解答。

输入描述：
第一行包含两个整数 n 和 m，表示一个矩阵包含 n 行 m 列，用空格分隔。 (1≤n≤10,1≤m≤10)。从 2 到 n+1 行，每行输入 m 个整数，用空格分隔，共输入 n * m 个数，表示第一个矩阵中的元素。接下来一行输入 k，表示要执行 k 次操作（1≤k≤5）。接下来有 k 行，每行包括一个字符 t 和两个数 a 和 b，中间用空格分隔，t 代表需要执行的操作，当 t 为字符'r'时代表进行行变换，当 t 为字符'c'时代表进行列变换，a 和 b 为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10）

输出描述：
输出 n 行 m 列，为矩阵交换后的结果。每个数后面有一个空格

示例：

输入：

2 2

1 2

3 4

1

r 1 2

输出：

3 4

1 2
## T36 找出并输出其中的最大数和最小数
题目描述：
在a[N][N]中输入数字，找出并输出其中的最大数和最小数，以及它们的下标
## T37 马克思手稿中的趣味数学题
题目描述：
马克思手稿中有一道趣味数学题：有 30 个人，其中有男人、女人和小孩，在一家饭馆里吃饭共花了 50 先令，每个男人各花 3 先令，每个女人各花 2 先令，每个小孩各花 1 先令，问男人、女人和小孩各有几人？
## T38 将字符串中的前导#号全部删除，中间和后面的#号不删除
题目描述：
假定输入的字符串中只包含字母和#号。请编写函数 fun()，它的功能是：将字符串中的前导#号全部删除，中间和后面的#号不删除。例如，若字符串中的内容为####A#BC#DEF#G#######，删除后，字符串中的内容则应当是A#BC#DEF#G#######
## T39  同时能被 3 与 7 整除的所有自然数之和的平方根 s
题目描述：
编写函数 fun()，它的功能是求 n 以内(不包括 n)同时能被 3 与 7 整除的所有自然数之和的平方根 s，并做为函数值返回。例如：n 为 1000 时，函数值应为 s＝153.909064
## T40 从字符中删除指定的字符，同一字母的大、小写按不同字符处理
题目描述：
编写函数fun(),该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理
## T41 判断字符串是否为回文
题目描述：
请编写函数 fun()，该函数的功能是：判断字符串是否为回文?若是则函数返回 1，主函数中输出 yes，否则返回 0，主函数中输出 no。回文是指顺读和倒读都是一样的字符串
