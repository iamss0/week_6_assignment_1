// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix(5,vector<int>(5));
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            matrix[i][j] = 10;
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl<<endl;
    }
}