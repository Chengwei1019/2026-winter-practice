/*期末考完，教务系统要给每个班出一份统计：平均分、最高分、最低分，以及高于平均分的人数。
请编写程序，先把全部成绩存进数组，再完成统计。由于“高于平均分的人数”必须在平均分算出来之后才能统计，成绩需要先保存下来。
输入描述
第 1 行一个整数 n（1 ≤ n ≤ 1000），表示人数；
第 2 行 n 个成绩（实数，可能带小数，0 ≤ 成绩 ≤ 100），以空格分隔。
输出描述
共 4 行：
第 1 行：平均分，保留两位小数；
第 2 行：最高分；
第 3 行：最低分（最高分、最低分按输入原样输出：整数就输出整数，如 92；带小数就输出小数，如 88.5）；
第 4 行：高于平均分的人数。*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double mark;
    double average;
    double total = 0;
    int pass = 0;
    double a[1000] = {};
    for(int i = 0;i<n;i++){
        cin>>mark;
        a[i] = mark;
        total += mark;
    }
    double max = a[0];
    double min = a[0];
    for(int m = 1;m<n;m++){
        if(a[m] > max){
            max = a[m];
        }else if(a[m] < min){
            min = a[m];
        }
    }
    average = total / n;
    for(int z = 0;z < n;z++){
        if(a[z] > average){
            pass++;
        }
    }
    cout<<fixed<<setprecision(2)<<average<<endl;
    cout.unsetf(ios::fixed);
    cout << setprecision(6);

    if(max == (int)max){
        cout<<(int)max<<endl;
    }else{
        cout<<max<<endl;
    }

    if(min == (int)min){
        cout<<(int)min<<endl;
    }else{
        cout<<min<<endl;
    }

    cout<<pass<<endl;
    return 0;
}

/*错误点： 1.题干里面说了"最高分、最低分按输入原样输出：整数就输出整数，如 92；带小数就输出小数，如 88.5"
cout格式控制是全局生效的，如果在最前面*/