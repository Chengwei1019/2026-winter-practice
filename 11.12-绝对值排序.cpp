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

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1-i;j++){
            if(abs(a[j])>abs(a[j+1])){
                int temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
   

/*1.可以直接比较绝对值大小来改变原数组顺序
    使用abs(a[i])但需要前缀#include<cmath>
  2.一组顺序是乱的数，该怎么从小到大排序？

   ①用冒泡排序：比较用绝对值，交换原始数
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1 - i; j++){
            // 比较两个数的绝对值
            if(abs(arr[j]) > abs(arr[j+1])){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
    要注意这里面的两套循环.
   ②
*/