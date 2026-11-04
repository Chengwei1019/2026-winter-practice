/*哥德巴赫猜想说：每个不小于 4 的偶数，都可以写成两个质数之和。
给定这样的偶数 n，输出所有满足 p + q = n 且 p ≤ q 的质数对。
本题只使用变量、分支和循环，不需要数组、函数或字符串。还没有学习函数，判断质数的循环需要写两遍。
输入描述
一行一个偶数 n（4 ≤ n ≤ 1000）。
输出描述
按 p 从小到大，每行输出一对 p q。
若没有这样的对，输出 None。在本题的数据范围内，不小于 4 的偶数都会有解。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n >= 4 && n % 2 == 0){
        for(int p = 1;p <= n;p++){
            int q = n - p;
            int sum = 0;
            int aum = 0;
            for(int i = 1;i <= p;i++){
                if(p % i == 0){
                    sum++;
                }
            }
            for(int m = 1;m <= q;m++){
                if(q % m == 0){
                    aum++;
                }
            }
            if(sum = aum = 2){
                cout<<p<<" "<<q<<endl;
            }
        }
    }else if(n < 4 || n % 2 == 1){
        cout<<"None"<<endl;
    }
    return 0;
}