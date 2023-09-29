// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size of sq matrix:  ";
    cin>>n;
    int a[n][n];
    //input
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==(n/2) || j==(n/2)) cout<<a[i][j]<<"  ";
            else cout<<"   ";
        }

        cout<<endl<<endl;
    }



}