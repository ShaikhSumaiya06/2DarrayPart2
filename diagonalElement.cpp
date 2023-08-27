/*
 program to print the elements of both the diagonals in a square matrix
 i/p : 
 1 2 3 
 4 5 6
 7 8 9
 o/p : 
 1   3
   5  
 7   9
*/
#include<iostream>
using namespace std;
int main(){
    int a[5][5]={1,2,3,4,5,6,7,8,9,1,0,3,4,2,1,3,5,3,1,6,4,7,3,6,2};
    int n=5;
    cout<<"Original matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Diagonals of Matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<a[i][j]<<" ";
            else if((i+j)== n-1) cout<<a[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}