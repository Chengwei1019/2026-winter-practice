/*老师批完卷子，把分数一个个念给你，念到 -1 表示念完了（-1 本身不是成绩）。你要汇报：一共几份、最高多少、平均多少。
这是典型的“哨兵值结束输入”模式：事先不知道有多少个数，用一个不可能作为正常数据出现的特殊值标记结束。
输入描述
若干个整数，用空格或换行隔开：前面是 0～100 之间的成绩（可能一个也没有），最后一个数是 -1，表示输入结束。成绩个数不超过 1000。
输出描述
如果没有任何成绩，输出一行 No data。
否则输出三行：成绩个数、最高分、平均分（保留两位小数）。*/
#include<iostream>
using namespace std;
int main(){
    double n = 0;
    double average;
    double total = 0;
    int max;
    int a[1000] = {};
    int i;
    while(cin>>i){
        if(i >= 0){
            a[n] = i;
            n ++;
            total += i;
        }else if(i == -1) {
            break;
        }
    }
    if(n == 0)
}