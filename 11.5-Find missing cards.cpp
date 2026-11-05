/*题目描述
太郎打算玩一个卡牌游戏。
但是，一套本该有 52 张的牌，他现在手里只有一部分牌（不含大小王）。这 52 张牌包含四种花色，每种花色各有 13 个点数：黑桃、红桃、梅花、方块。
输入描述
第一行输入一个整数，表示现有的卡牌数量。
接下来若干行，依次给出每张卡牌的信息。每张卡牌由一个字符和一个整数组成，分别代表花色和点数。花色用 S、H、C、D 依次代表黑桃、红桃、梅花、方块。点数为 1 到 13 之间的整数。
输出描述
输出缺失的卡牌。格式和输入保持一致，每张卡牌单独一行，花色和点数之间用空格隔开。缺失卡牌按如下优先级排序：
输出顺序依次为黑桃、红桃、梅花、方块。
花色相同时，点数小的先输出。*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[52] = {};
    int suit,rank;
    int sid;
    while(cin>>suit>>rank){
        int id;
        if(suit == 'S'){
            sid = 0;
        }else if(suit == 'H'){
            sid = 1;
        }else if(suit == 'C'){
            sid == 2;
        }else if(suit == 'D'){
            sid = 3;
        }
        int id = (suit-id * 13) + (rank - 1);
        a[id] = id + 1;
    }

    for(int i = 0;i < 52;i++){
        if(a[i] == 0){
            rank = (i + 1)%13;
            sid = (i + 1)/13;
            if(sid == 0){
                suit = 'S';
            }else if(sid == 1){
                suit = 'H';
            }else if(sid == 2){
                suit = 'C';
            }else if(sid == 3){
                suit = 'D';
            }
            cout<<suit<<" "<<rank<<endl;

        }
    }
    return 0;
}