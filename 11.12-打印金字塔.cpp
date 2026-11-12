/*题目描述
显示一个金字塔。
输入格式
输入一个1～9之间的整数，代表金字塔的行数。
输出格式
如示例所示，数字之间没有空格。输出的行数即为输入的整数。*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=2*n - 1){
            if(j <= n-i||j >= n+i){
                cout<<" ";
            }else if(j == n){
                cout<<"1";
            }else if(j>n - i&&j<n){
                for
            }
        }
    }
}