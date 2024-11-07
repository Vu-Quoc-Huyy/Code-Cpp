//047_Ma trận xoắn ốc
#include<iostream>
using namespace std;
int main(){
    int n,m,count=1;
    cin>>n>>m;
    int a[102][102];
    int left=0,right=m-1,top=0,bottom=n-1;
    while (left<=right && top<=bottom){
        for (int i=left;i<=right;i++){
            a[top][i]=count;
            count++;
        }
        top++;
        for (int i=top;i<=bottom;i++){
            a[i][right]=count;
            count++;
        }
        right--;
        if (top<=bottom){
            for (int i=right;i>=left;i--){
                a[bottom][i]=count;
                count++;
            }
            bottom--;
        }
        if (left<=right){
            for (int i=bottom;i>=top;i--){
                a[i][left]=count;
                count++;
            }
            left++;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }}