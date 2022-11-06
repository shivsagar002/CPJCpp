#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int x;
    cout<<"Give me a number: ";
    cin>>x;

    cout<<"Your given value is: "<<x<<endl;

    cout<<"Value printed using Pre increment operator: "<<++x<<endl;
    cout<<"Value printed after using Pre increment operator: "<<x<<endl;
 
    return 0;
}