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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n - 1; j++){
            // 空格区域
            if(j < n - i + 1 || j > n + i - 1){
                cout << " ";
            }
            // 左半部分：数字从i递减到2
            else if(j < n){
                cout << i - (n - j);
            }
            // 中间列
            else if(j == n){
                cout << "1";
            }
            // 右半部分：数字从2递增到i
            else{
                cout << i - (j - n);
            }
        }
        cout << endl;
    }
    return 0;
}
