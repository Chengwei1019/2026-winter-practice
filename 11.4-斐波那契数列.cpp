/*斐波那契数列定义为：第 1 项是 1，第 2 项是 1，从第 3 项起每一项等于前两项之和。
给定 n，输出前 n 项。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行一个整数 n（1 ≤ n ≤ 40）。
输出描述
在一行中输出前 n 项，相邻两项之间用一个空格分隔，行末不要有多余空格。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp1,temp2;
    int num;
    for(int i = 1;i <= n;i++){
        if(i == 1 || i == 2){
            num = 1;
            cout<<num<<" ";
        }else if(i != 1 || i != 2){
            
        }
    }
}