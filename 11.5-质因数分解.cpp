/*给定整数 n（n ≥ 2），把它分解成质因数相乘的形式。
质因数从小到大输出，相同的质因数要重复写出。例如 60 = 2 × 2 × 3 × 5。
本题只使用变量、分支和循环，不需要数组、函数或字符串。
输入描述
一行一个整数 n（2 ≤ n ≤ 1000000）。
输出描述
输出 n=p1*p2*...*pk。质因数从小到大，乘号为 *，不要空格。
n 本身是质数时，输出 n=n，例如 7=7。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 2;i < n;i++){
        if(n % i == 0){
            break;
            cout<<n<<"="<<n<<endl;
        }
        if(n % i != 0){
            cout<<n<<" = "<<i;
            n = n / i;
            int m = 2;
            while(n == 1){
                
                }

            }
        }
    }
}