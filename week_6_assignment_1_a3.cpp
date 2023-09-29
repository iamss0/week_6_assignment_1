// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).

#include<iostream>
using namespace std;

int main(){
    int l1 = 1, r1 = 2 , l2 = 3 , r2 = 3, n, m;
    int sum =0;
    cout<<"Enter cotrdinates l1,r1; ";
    cin>>l1>>r1;
    cout<<"Enter cotrdinates l2,r2; ";
    cin>>l2>>r2;
    cout<<"No. of rows required: ";
    cin>>n;
    cout<<"No. of coloumns required: ";
    cin>>m;
    int a[n][m];
    //input
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    for(int i = l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += a[i][j];
        }
    }
    cout<<sum;
}