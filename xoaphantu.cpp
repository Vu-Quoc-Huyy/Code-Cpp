#include<iostream>
using namespace std;
//xóa phần tử tại vị trí k trong mảng
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"nhap vi tri muon xoa: ";
    cin>>x;
    for (int i=x-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    --n;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}