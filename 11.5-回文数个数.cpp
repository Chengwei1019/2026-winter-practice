/*统计 1 到 n 中有多少个回文数。把一个数的十进制数字倒过来，如果还是它自己，它就是回文数。一位数都是回文数。
本题只使用变量、分支和循环。
输入描述
一行一个整数 n。
1 ≤ n ≤ 9999。
输出描述
一行一个整数，表示回文数的个数*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0; // 统计回文数个数

    // 遍历1到n的每一个数
    for(int i = 1; i <= n; i++){
        int tmp = i;    // 用临时变量保存原数，避免修改i
        int rev = 0;    // 保存反转后的数字

        // 逐位反转数字
        while(tmp > 0){
            int last = tmp % 10;      // 取出最后一位
            rev = rev * 10 + last;    // 把最后一位拼到反转数末尾
            tmp = tmp / 10;           // 去掉最后一位
        }

        // 反转后和原数相等，就是回文数
        if(rev == i){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
/*这步很关键； rev = rev * 10 + last;    // 把最后一位拼到反转数末尾 
while(tmp > 0) 保证一直在取余做除法。*/