#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"How many numbers you want to add in your array?"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers to add in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Your array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}