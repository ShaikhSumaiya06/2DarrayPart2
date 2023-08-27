/*
program to print the matrix in wave form
i/p:
n = 4
o/p:
1 2 3 4 
12 13 14 5
11 16 15 6
10 9 8 7 
*/
#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter no. of rows & cols : ";
    // cin>>n;
    // int a[n][n];
    int a[4][4];
    int n=4;
    int i=0 , j , k=1;
    while(k<=n*n){
        j=i;
        // left - right
        while(j<n){
            a[i][j++] = k++;
        }
        // top - bottom
        j = i+1;
        while(j<n-i){
            a[j++][n-i-1]=k++;
        }
        // right - left
        j = n-i-2;
        while(j>i){
            a[n-i-1][j--]=k++;
        }
        // bottom - top
        j = n-i-1;
        while(j>i){
            a[j--][i]=k++;
        }
        i++;
    }
    // printing the spiral matrix
    cout<<"\nSpiral matrix ; \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    
}