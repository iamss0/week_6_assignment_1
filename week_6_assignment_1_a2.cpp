// Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter numer of rows and coloums: ";
    cin>>n>>m;
    int a[n][m];
    //input for a
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"element in array a "<<i<<" "<<j<<": ";
            cin>>a[i][j];
        }
    }


    int b[n][m];
    //input for b
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"element in array b "<<i<<" "<<j<<": ";
            cin>>b[i][j];
        }
    }

    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            a[i][j] += b[i][j];
        }
    }

    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<endl<<endl;
    }
}