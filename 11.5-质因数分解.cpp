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
    int sum;
    int m = 2;
    for(int i = 2;i < n;i++){
        if(n % i == 0){
           sum++;
        }
    }
        if(sum == 0){
            cout<<n<<"="<<n<<endl;
        }else if(sum != 0){
            cout<<n<<" = ";
            for(int q = 2;q < n;q++){
                if(n % q == 0){
                    cout<<q<<;
                    n = n / q;
                }
            }
            while(n > 1){
                if(n % m == 0){
                    cout<<" "<<m;
                    n = n / m;
                }else if(n % m != 0){
                    m++;
                }
            }
        }


    
}