#include<iostream>
using namespace std;
int main(){
    int m,n,dem;
    cin>>m>>n;
    int a[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        dem=0;
        for (int j=0;j<m;j++){
            if (a[j][i]%2==0){
                dem++;
            }
        }
        cout<<dem<<" ";
    }
}