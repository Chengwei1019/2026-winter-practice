/*教务处拿到一张成绩表：n 名学生，每人 m 门课。请给每名学生算总分，给每门课算平均分，并找出总分最高的学生。
请用二维数组存储成绩表，练习按行、按列两种遍历。
输入描述
第 1 行两个整数 n 和 m（1 ≤ n ≤ 50，1 ≤ m ≤ 10）；
接下来 n 行，每行 m 个整数（0～100），第 i 行是第 i 名学生各门课的成绩。
输出描述
先输出 n 行：每名学生的总分；
再输出 1 行：m 门课的平均分，保留 2 位小数，以一个空格分隔；
最后输出 1 行：总分最高的学生的编号（从 1 开始；若并列，输出编号最小者）。*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mark;
    int a[50][10] = {};
    double b[50] = {};
    for(int i = 0;i<n;i++){
        double total = 0;
        for(int k = 0;k<m;k++){
            cin>>mark;
            a[i][k] = mark;
            total += mark;
            b[i] = total;
        }cout<<total<<endl;

    }

    double average;
    for(int i = 0;i<n;i++){
            average = b[i]/n;
            cout<<fixed<<setprecision(2)<<average<<" ";
    }
    cout.unsetf(ios::fixed);

    double max = b[0];
    int max_num = 1;
    for(int i=1;i<n;i++){
        if(b[i] > b[0]){
           max = b[i];
           max_num = i + 1;
        }
    }

    cout<<endl<<max_num<<endl;



    return 0;
}