'''
1007. 素数对猜想 (20)

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
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
'''
import math
def isSushu(n):
    if n<12:
        if n in [2,3,5,7,11]:
            return True
        else:
            return False
    else:
        if n%2==0 or n%3==0 or n%5==0 or n%7==0 or n%11==0:
            return False
        for i in range(2, int(math.sqrt(n))+1):
            if n%i==0:
                return False
        return True

num = int(input())

dui = 0
s1,s2,su=2,2,0
for i in range(2,num+1):    
    if(isSushu(i)):
        su+=1
        if su%2!=0:
            s1=i
            if s1-s2==2:
                dui+=1
        else:
            s2=i
            if s2-s1==2:
                dui+=1


print(dui)
