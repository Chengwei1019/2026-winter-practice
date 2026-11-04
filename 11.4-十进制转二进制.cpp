/*给定一个非负整数 n，输出它的二进制表示。
不要输出前导 0。n = 0 时输出 0。
本题只使用变量、分支和循环，不需要数组、函数或字符串。不要用数组把余数存起来再倒着输出，请从高位开始确定每一位。
输入描述
一行一个整数 n（0 ≤ n ≤ 1000000000）。
输出描述
输出 n 的二进制，不含前导 0。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i != 0;i++){
        int a;
        a = n%10;
        if(n/10 == 0){
            break;
            cout<<a<<endl;
        }else if(n/)
    }
}