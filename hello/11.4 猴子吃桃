/*猴子第 1 天早上有若干个桃子。此后每一天，它都吃掉当天早上桃子数量的一半多一个。到第 n 天早上，只剩下 1 个桃子。
也就是说，若某天早上有 x 个，吃掉 x/2 + 1 个后，剩下 x/2 - 1 个，这个剩下的数就是第二天早上的桃子数。x 一定是偶数。
给定 n，求第 1 天早上有多少个桃子。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行一个整数 n（1 ≤ n ≤ 30）。
输出描述
输出一个整数，表示第 1 天早上的桃子数。*/
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum = 1;
    for(int i = 1;i <= (n-1);i++){
        int temp = (sum+1)*2;
        sum = temp;
    }
    cout<<sum<<endl;
    return 0;
}