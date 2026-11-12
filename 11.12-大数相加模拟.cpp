/*题目描述
给出两个非负整数，位数可能很多。请用字符数组逐位相加（从个位开始，处理进位），输出它们的和。
不要把整个数直接读进一个普通整型变量，位数最多有 200 位。
输入描述
共两行。每行一个非负整数，长度在 1 到 200 之间。除了数字 0 本身以外，不会有前导 0。
输出描述
输出一行，两个数的和。不要输出前导 0。*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[201], s2[201];
    cin >> s1 >> s2;

    int len1 = (int)strlen(s1);
    int len2 = (int)strlen(s2);

    int b[201] = {};
    for(int i = 0; i < len1; i++){
        b[i] = s1[len1 - 1 - i] - '0'; // 修正：用i做偏移
    }

    int c[201] = {};
    for(int i = 0; i < len2; i++){
        c[i] = s2[len2 - 1 - i] - '0';
    }

    int d[201] = {};
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0; // 单独维护进位

    // 逐位相加，进位参与运算
    for(int i = 0; i < max_len; i++){
        int sum = b[i] + c[i] + carry;
        d[i] = sum % 10;
        carry = sum / 10;
    }
    // 处理最高位的进位
    if(carry != 0){
        d[max_len] = carry;
        max_len++;
    }

    // 倒序输出，跳过前导零    205大小空间，后面会有很多零。
    int i = max_len - 1;
    while(i > 0 && d[i] == 0){
        i--;
    }
    for(; i >= 0; i--){
         cout<< d[i];
    }
    cout<<endl;

    return 0;
}

/*用carry维护进位，重点关注。
还要看是怎么从字符数组转化到逐位的整型数组
*/