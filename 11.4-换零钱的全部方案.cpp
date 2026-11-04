/*有面值为 10 元、5 元、1 元的纸币，数量不限。给定金额 n 元，输出把 n 元恰好换开的全部方案。
设 10 元用 x 张，5 元用 y 张，1 元用 z 张，则 10x + 5y + z = n，且 x、y、z 都是非负整数。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行一个整数 n（1 ≤ n ≤ 50）。
输出描述
第一行输出方案数。
接下来每行一种方案，格式为 x y z，表示 10 元、5 元、1 元的张数。
按 x 从大到小；x 相同则按 y 从大到小。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    m = n/10;
    int sum = 0;
    int z;
    for(int x = m;x>= 0;x--){
        int q = (n - (10*x))/5;
        for(int y = q;y>=0;y--){
             z = n - (10*x) - (5*y);
            sum++;
        }
    }
    cout<<sum<<endl;
    for(int x = m;x>= 0;x--){
        int q = (n - (10*x))/5;
        for(int y = q;y>=0;y--){
            z = n - (10*x) - (5*y);
            cout<<x<<" "<<y<<" "<<z<<" "<<endl;
        }
    }
    return 0;
}

/*z是自动就生成的了，不需要再循环了
如果需要先生成一遍算总数，再分开每一循环进行，那就可以进行两次大循环。*/