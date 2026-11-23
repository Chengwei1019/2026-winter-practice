#include<iostream>
using namespace std;
void swap(int num1,int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return;

}


int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<b;
    return 0;
}