#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n,tong;
    cin>>n;
    int a[1000];
    tong=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (pow(sqrt(a[i]),2)==a[i]){
            tong+=a[i];
        }
    }
    cout<<tong;
    

}