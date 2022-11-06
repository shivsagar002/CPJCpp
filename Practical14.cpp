#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;

    (a>b)?cout<<a<<" is max. ":(a<b)?cout<<b<<" is max. ":cout<<"Both are equal.";
    return 0;
}