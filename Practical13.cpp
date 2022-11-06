#include<iostream>
using namespace std;

int main(){
    int mat1[10][10], mat2[10][10], mat3[10][10],m,n;
    cout<<"Enter row and columns of your matrix: ";
    cin>>m>>n;

    cout<<"Enter elements of first matrix: ";
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter elements of second matrix: ";
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>>mat2[i][j];
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"Addition of your two matrix is: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}