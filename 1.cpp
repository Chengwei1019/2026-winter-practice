#include<iostream>
using namespace std;

long long m1(int n,long long x){
    long long power = 1;
   \
    if(n == 0){
        power = 1;
        cout<<power<<endl;
    }else{
        for(int i = 1;i<=n;i++){
            power *= x;
            cout<<power<<endl;
        }
    }
}

int main(){
    int n;
    long long x;
    cin>>x>>n;
    if(x == -1&&n == -1){
        return 0;
    }else{
    m1(n,x);
    }    
return 0;
}
