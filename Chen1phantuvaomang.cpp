#include<iostream>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    int a[100];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]<x && x<a[i+1]){
            for(int j = n; j >i; j--) {
                a[j] = a[j-1];}
            a[i+1]=x;
            ++n;
            break;
        }
        }
    int mid=(n+1)/2;    
    cout<<a[mid];
    return 0;
        }
    
