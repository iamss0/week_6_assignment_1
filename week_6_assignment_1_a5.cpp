// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 1

#include<iostream>
using namespace std;

int main(){
    int n, m;
    int sum_row =0;
    int s =0;
    int store_row_num = 0;
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
    for(int i = 0; i<m; i++){
        int sum_row =0;
        for(int j=0; j<n; j++){
            sum_row += a[i][j];
        }
        if(sum_row>s){
            store_row_num = i;
            s = sum_row;
        }
    }
    cout<<"The row with largest sum is "<<store_row_num;
}