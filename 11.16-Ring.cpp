/*Write a program which finds a pattern p in a ring shaped text s.
输入描述
In the first line, the text s is given.
In the second line, the pattern p is given.
1≤lengthofp≤lengthofs≤10000
s and p consists of lower-case letters
输出描述
If p is in s, print ‘Yes’ in a line, otherwise ‘No’.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    string s3;
    getline(cin,s1);
    getline(cin,s2);
    s3 = s1 + s1;
    size_t a = s3.find(s2);
    if(a != string::npos){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}