// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
// Input 1:
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9
// Output 1: 9

#include<iostream>
using namespace std;

int main(){
    int m, n;
    int larg_num = INT8_MIN;
    cout<<"No. of rows required: ";
    cin>>m;
    cout<<"No. of coloumns required: ";
    cin>>n;
    int a[m][n];
    //input
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    //finder
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            if(larg_num<a[i][j]) larg_num = a[i][j];
        }
    }
    cout<<"The largest num in this 2d array is: "<<larg_num; 

}