'''
1002. 写出这个数 (20)

时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，
但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
'''
num = input()
sum1=0
for i in range(len(num)):
    sum1+=int(num[i])

list1=[]
pinyin = ['ling','yi','er','san','si','wu','liu','qi','ba','jiu']
sum1=str(sum1)
for i in range(len(sum1)):
    list1.append(pinyin[int(sum1[i])])
print(" ".join(list1))
