#include <iostream>
using namespace std;

int main()
{
    cout<<"Demo for post increment operator"<<endl;
    int x;
    cout<<"Give me a number: ";
    cin>>x;

    cout<<"Your given value is: "<<x<<endl;

    cout<<"Value printed using post increment operator: "<<x++<<endl;
    cout<<"Value printed after using post increment operator: "<<x<<endl;

    cout<<"Demo for post decrement operator"<<endl;
    int y;
    cout<<"Give me a number: ";
    cin>>y;

    cout<<"Your given value is: "<<y<<endl;

    cout<<"Value printed using post decrement operator: "<<y--<<endl;
    cout<<"Value printed after using post decrement operator: "<<y<<endl;
 
    return 0;
}