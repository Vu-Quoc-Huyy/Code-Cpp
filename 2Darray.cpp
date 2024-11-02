#include<iostream>
using namespace std;
int main(){
    int n,m,x,y,a[101][101];
    cin>>n>>m>>x>>y;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    long long tong=0;
    int i=x,j=y;
    while (i<n && j<m){
        tong+=a[i++][j++];}
    int k=x-2,l=y-2;
    while (k>=0 &&l>=0){
        tong+=a[k--][l--];
    }
    i =x-1;
    j=y-1;
    while (i<n&&j>=0){
        tong+=a[i++][j--];
    }
    k=x-2;
    l=y;
    while (k>=0 && l<m){
        tong+=a[k--][l++];
    }
    cout<<tong;
    
}