/*题目描述
输入 n 个整数，按绝对值从小到大排序后输出。绝对值相同的数，保持它们在输入里的先后顺序。
本题用数组和循环即可完成，例如冒泡排序时用绝对值比较大小。
输入描述
第一行一个整数 n。
第二行 n 个整数。
输出描述
一行，输出排序后的 n 个整数，相邻两个数之间用一个空格隔开。*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    int a[100] = {};
    for(int i = 0;i<n;i++){
        cin>>num;
        a[i] = num;
    }

    for(int i = 1;i<n;i++){
        for(int j = 1;j<n-j){
            if(abs(a[i])>abs(a[i+j])){
                int temp;
                temp = a[i+j];
                a[i+j] = a[i];
                a[i] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
   