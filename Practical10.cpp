#include <iostream>
using namespace std;

int main(){
    char x;
    cout<<"Choose any option from A,B,C & D: ";
    cin>>x;
    switch (x) {
    case 'A':
        cout << "Your choice is A";
        break;
    case 'a':
        cout << "Your choice is A";
        break;
    case 'B':
        cout << "Your choice is B";
        break;
    case 'b':
        cout << "Your choice is B";
        break;
    case 'C':
        cout << "Your choice is C";
        break;
    case 'c':
        cout << "Your choice is C";
        break;
    case 'D':
        cout << "Your choice is D";
        break;
    case 'd':
        cout << "Your choice is D";
        break;
    default:
        cout << "Your choice is other than A, B, C and D";
        break;
    }
    return 0;
}