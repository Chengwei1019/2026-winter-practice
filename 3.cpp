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
    int x,x2,x3;
    cin>>x;
    x2 = x*x;
    x3 = x*x*x;
    if(m(x)== 1&&m(x2) == 1&&m(x3) == 1){
        cout<<
    }

}