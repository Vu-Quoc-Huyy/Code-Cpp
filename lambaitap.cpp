#include <iostream>
using namespace std;
int main(){
    int n,test;
    cin>>n;
    test=0;
    for (int i=2;i<n-1;i++){
        if (n%i==0){
            cout<<"NO";
            test+=1;
            break;
        }
    }
    if (test==0){
        cout<<"YES";
    }
}