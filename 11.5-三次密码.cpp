/*第一行是正确密码(一个int整数)。后面恰好有 3 次尝试。只要某一次和密码相同，就输出 Correct 并结束；三次都不对，输出 Locked。
本题只使用变量、分支和循环。
输入描述
共四行，每行一个整数。第一行是密码，后三行是三次尝试（也是输入整数）。
所有整数的绝对值不超过 1000000。
输出描述
Correct 或 Locked。*/
#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int a;
    int sum = 0;
    for(int i = 1;i <= 3;i++){
        cin>>a;
        if(a == key){
            cout<<"Correct"<<endl;
            break;
        }if(a != key){
            sum++;
        }
    }
    if(sum == 3){
        cout<<"Locked"<<endl;
    }
    return 0;
}

/*总是在= 和 ==中出错，以后打完代码或者报错了，先检查一遍。
改进方法：可不可以不用sum来表示错误次数然后再表示locked
#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int a;
    for(int i = 1;i <= 3;i++){
        cin>>a;
        if(a == key){
            cout<<"Correct"<<endl;
            return 0;
        }
    }
        cout<<"Locked"<<endl;
}
        return 0的作用就是直接离开cheng'xv
*/