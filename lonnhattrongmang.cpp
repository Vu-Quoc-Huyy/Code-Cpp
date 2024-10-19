#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap so phan tu cua array: ";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cout<<"nhap array["<<i<<"]: ";
        cin>>a[i];

    }
    int max=a[0];
    cout<<"cac vi tri lon nhat trong array la: ";
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if (a[i]==max){
            cout<<i<<" ";
        }
    }
    //cout<<max;
    return 0;
}
