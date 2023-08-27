/*
program to print the matrix in wave form
i/p:
1 2 3 
4 5 6 
7 8 9
o/p:
 7 4 1 2 5 8 9 6 3
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
    cout<<"Wave form : \n";
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
    }
}