#include<iostream>
#include<string>

#define max_name_length 20
using namespace std;

int main(){
    char name[max_name_length];
    int num;

    cout<<"Enter your name: ";
    cin.getline(name,max_name_length);

    cout<<"How many times you want to print your name?";
    cin>>num;

    while(num--){
        cout<<name<<endl;
    }
    return 0;
}