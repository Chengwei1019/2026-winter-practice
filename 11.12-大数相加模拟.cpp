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
    char s1[201];
    char s2[201];
    cin>>s1;
    cin>>s2;
    int len1 = (int)strlen(s1);
    int len2 = (int)strlen(s2);

    int b[201] = {};
    for(int i = 0;i<len1;i++){
        b[i] = s1[len1 - 1 - 1]-'0';
    }

    int c[201] = {};
    for(int i = 0;i<len2;i++){
        c[i] = s2[len2 - 1 - i]-'0';
    }

    int d[201] = {};
    int max = len1;
    if(len2 > len1){
        max = len2;
    }

    for(int i = 0;i<max;i++){
        d[i] = b[i] + c[i];
        if(d[i] >= 10){
            d[i] = d[i] - 10;
            d[i+1] = 1;
        }
    }

    if(d[max] != 0){
        for(int i = 0;i;i--){
            cout<<d[i];
        }
    }else if(d[max] == 0){
        for(int i = 0;i<max;i--){
            cout<<c[i];
        }
    }
    return 0;

    
}