/*一个整数去掉最后一位，就变成一个“更小的同类问题”——这正是递归的典型场景。
读入一个非负整数 N，用递归完成两件事：
求 N 的各位数字之和；
输出 N 的二进制表示。
要求：两个函数都用递归实现，不得使用循环；不得使用 bitset / to_string 等现成转换工具。
输入描述
一行一个整数 N（0 ≤ N ≤ 10^18）。
输出描述
输出 2 行：第 1 行是 N 的各位数字之和，第 2 行是 N 的二进制表示（N = 0 时输出 0）*/
#include<iostream>
using namespace std;

int A1(int N){
    int temp;
    int sum = 0;
    while(N/10 != 0){
        int temp = N % 10;
        sum += temp; 
        N = N / 10;
    }
    return sum;
}

int A2(int N){
    
}