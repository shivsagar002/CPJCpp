#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;

    if(a>b){
        cout<<b<<" is not greater than "<<a<<endl;
    }else if(a<b){
        cout<<a<<" is not greater than "<<b<<endl;
    }else{
        cout<<"Both are equal"<<endl;
    }
    return 0;
}