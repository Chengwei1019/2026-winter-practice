#include<iostream>
using namespace std;

bool m(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0)) return false; 
    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return x == rev || x == rev / 10;   
}

int main(){
    int x;
    cin>>x;
    x2 = x
}