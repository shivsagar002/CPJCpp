#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a year to find out wether it is leap year or not: ";
    cin>>x;

    (x%400==0)?cout<<x<<" is a leap year."<<endl:(x%4==0 && x%100!=0)?cout<<x<<" is a leap year."<<endl:cout<<x<<" is not a leap year."<<endl;
    return 0;
}