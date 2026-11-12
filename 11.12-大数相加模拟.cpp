/*题目描述
给出两个非负整数，位数可能很多。请用字符数组逐位相加（从个位开始，处理进位），输出它们的和。
不要把整个数直接读进一个普通整型变量，位数最多有 200 位。
输入描述
共两行。每行一个非负整数，长度在 1 到 200 之间。除了数字 0 本身以外，不会有前导 0。
输出描述
输出一行，两个数的和。不要输出前导 0。*/
#include<iostream>
using namespace std;
int main(){
    int a1;
    int a2;
    cin>>a1>>a2;
    int sum1 = 0;
    int sum2 = 0;
    while(a1/10 == 0){
        a1 /= 10;
        sum1++;
    }

    while(a2/10 == 0){
        a2 /= 10;
        sum2++;
    }

    int b[201] = {};
    for(int i = 0;i<sum1;i++){
        b[i] = a1 % 10;
        a1 = a1 / 10;
    }

    int c[201] = {};
    for(int i = 0;i<sum2;i++){
        c[i] = a2 % 10;
        a2 = a2 /10;
    }

    int d[201] = {};
    int max = sum1;
    if(sum2 > sum1){
        max = sum2;
    }

    for(int i = 0;i<max;i++){
        d[i] = b[i] + c[i];
        if(d[i] >= 10){
            d[i] = d[i] - 10;
            d[i+1] = 1;
        }
    }

    if(d[max] != 0){
        for(int i = max;i>=0;i--){
            cout<<d[i];
        }
    }else if(d[max] = 0){
        for(int i = max - 1;i>=0;i--){
            cout<<c[i];
        }
    }

    
}