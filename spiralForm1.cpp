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
    int minr = 0 , minc = 0;
    int maxr = n-1 , maxc = n-1;
    int k=1;
    while(k<=n*n){
        // while(minr<=maxr && minc<=maxc){

        // }
        // left-right
        for(int i=minc;i<=maxc;i++){
            a[minr][i]=k++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // up - down
        for(int i=minr;i<=maxr;i++){
            a[i][maxc]=k++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        // right-left
        for(int i= maxc ; i>=minc ;i--){
            a[maxr][i]=k++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        // down-up
        for(int i=maxr ; i>=minr;i--){
            a[i][minc]=k++;
        }
        minc++;
    }
    // printing the spiral matrix
    cout<<"\nSpiral matrix ; \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    
}