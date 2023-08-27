/*
program to rotate the matrix 90degree by anti-clockwise
i/p:
1 2 3 
4 5 6
7 8 9
o/p:
3 6 9
2 5 8
1 4 7
*/
#include<iostream>
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    cout<<"Original matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    /*
    transpose method-2
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                int temp = a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
            
        }
    }
    */
    // column reverse
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp = a[j][i];
            a[j][i] = a[k][i];
            a[k][i] = temp;
            j++;
            k--;
        }
    }
    /*
    column reverse method-2
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(a[i][j],a[n-i-1][j]);
        }
    }
    */
    // printing after rotation 
    cout<<"After rotation : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}