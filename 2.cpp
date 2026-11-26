#include<iostream>
using namespace std;
long long gcd(long long n,long long m){
    long long min = n;
    long long gcd;
    if(n>m){
        min = m;
    }
    for(int i = 1;i<=min;i++){
        if(n % i == 0&&m % i == 0){
            gcd = i;
        }
    }
}