#include<iostream>
using namespace std;
string isIncrease(int a[],int n){
    for (int i=0;i<n-1;i++){
       if (a[i]>a[i+1]){
            
            return "khong phai mang tang";
        } 
    }
    return "mang tang";}

bool laamduong(int a[],int n){
    for (int i=0;i<n-1;i++){
        if (a[i]*a[i+1]>0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    int a[3326];
    for (int i=0;i<n;i++){
        cin>>a[i];
        }
    
    cout<<isIncrease(a,n)<<endl;
    if (laamduong(a,n)) cout<<"mang nay am duong xen ke";
    else cout<<"mang nay khong am duong xen ke";
    return 0;
}