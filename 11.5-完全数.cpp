/*若一个正整数等于它的全部真因子之和，则称它为完全数。真因子是能整除它、且比它小的正整数。
例如 6 = 1 + 2 + 3，28 = 1 + 2 + 4 + 7 + 14。
给定 n，输出所有不超过 n 的完全数。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行一个整数 n（1 ≤ n ≤ 10000）。
输出描述
按从小到大每行输出一个完全数。如果没有，输出 None。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int aum = 1;
    for(int i = 1;i <= n;i++){
        for(int m = 1;m < i;m++){
            if(i % m == 0){
                aum = aum *= m;
            }
        }
        if(aum == i){
            cout<<i<<endl;
            sum ++;
        }
    }
    if(sum == 0){
        cout<<"None"<<endl;
    }
    return 0;

}