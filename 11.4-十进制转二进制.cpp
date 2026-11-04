/*给定一个非负整数 n，输出它的二进制表示。
不要输出前导 0。n = 0 时输出 0。
本题只使用变量、分支和循环，不需要数组、函数或字符串。不要用数组把余数存起来再倒着输出，请从高位开始确定每一位。
输入描述
一行一个整数 n（0 ≤ n ≤ 1000000000）。
输出描述
输出 n 的二进制，不含前导 0。*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    // 先找最高位的权
    long long w = 1;
    while(w * 2 <= n)
    {
        w = w * 2;
    }
    // 从高位到低位逐位输出
    while(w > 0)
    {
        if(n >= w)
        {
            cout << 1;
            n = n - w;
        }
        else
        {
            cout << 0;
        }
        w = w / 2;
    }
    return 0;
}
