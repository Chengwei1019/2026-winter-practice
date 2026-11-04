/*给定非负整数 a、b 和正整数 p，计算 a^b mod p，也就是 a 的 b 次方除以 p 的余数。
约定 0^0 = 1。当 p = 1 时，任何数的余数都是 0。
b 可能很大，不能把 a 连乘 b 次。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行三个整数 a、b、p（0 ≤ a, b ≤ 10^9，1 ≤ p ≤ 10^9）。
输出描述
输出一个整数，表示 a^b mod p。*/
#include<iostream>
using namespace std;
int main(){
    long long a,b;
    long long p;
    long long aus = 1;
    cin>>a>>b>>p;
    a = a%p;
    while(b > 0){
        if(b % 2 == 1){
            aus = (aus * a) % p;
    }
       a = (a*a) % p;
       b = b/2;
}
cout<<aus<<endl;
return 0;
}

/*这里面首先就是b很大不能连乘，这一点需要注意
其次这个计算需要一个公式 a*b % p = [(a%p)*(b%p)]%p  */