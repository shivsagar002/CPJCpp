#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"Choose any option from +, -, * & /: ";
    cin>>x;
    float a,b;
    
    switch (x) {
    case '+':
        cout<<"Enter two number for "<<x<<": ";
        cin>>a>>b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<a+b<<endl;
        break;
    case '-':
        cout<<"Enter two number for "<<x<<": ";
        cin>>a>>b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<a-b<<endl;
        break;
    case '*':
        cout<<"Enter two number for "<<x<<": ";
        cin>>a>>b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<a*b<<endl;
        break;
    case '/':
        cout<<"Enter two number for "<<x<<": ";
        cin>>a>>b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<a/b<<endl;
        break;
    default:
        cout << "Your choice is other than +, -, * & /";
        break;
    }
    return 0;
}