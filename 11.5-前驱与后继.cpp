/*输入一个字符。如果它是小写字母，输出它在字母表中的前一个和后一个字母，中间用一个空格隔开。a 的前一个是 z，z 的后一个是 a。
如果它不是小写字母，输出 Invalid。
本题只使用变量、分支和循环。
输入描述
一行一个字符。
输入是一个可见字符。
输出描述
一行两个小写字母，或 Invalid。*/
#include<iostream>
using namespace std;
int main(){
    char letter,left,right;
    cin>>letter;
    if(letter > 'a' && letter < 'z'){
        left = letter - 1;
        right = letter + 1;
        cout<<left<<" "<<right;
    }else    