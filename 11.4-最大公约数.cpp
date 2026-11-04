/*给定两个正整数 a 和 b，求它们的最大公约数。
最大公约数是能同时整除 a 和 b 的最大正整数。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行两个整数 a、b（1 ≤ a, b ≤ 1000000）。
输出描述
输出一个整数，表示 gcd(a, b)。*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int max_val = 1;
    for(int i = 1; ;i++){
        if(a%i == 0 && b%i == 0){
            max_val = i;
        }
    }
    cout<<max_val<<endl;
    return 0;
}