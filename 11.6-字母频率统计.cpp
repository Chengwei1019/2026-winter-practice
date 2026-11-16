/*分析一行英文文本中各字母的使用频率——印刷排版、键盘布局设计、古典密码破译都从这一步开始。
读入一行文本，统计每个英文字母出现的次数（不区分大小写，按小写统计），按 a～z 的顺序输出出现过的字母及其次数。
要求用 char 数组（C 字符串）读入并处理，练习 cin.getline 与 中的函数。
输入描述
输入 1 行文本，长度不超过 1000 个字符，可能包含空格、数字和标点；保证至少包含 1 个英文字母。
输出描述
按 a～z 的顺序，对每个出现次数大于 0 的字母输出一行：小写字母，一个空格，出现次数。*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(char i = 'a';i <= 'z';i++){
        int sum;
        int a = s.find(i);
        while(a != string::npos){
            sum++;

        }
    }
}