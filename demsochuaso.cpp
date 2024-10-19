#include<iostream>
using namespace std;
int main(){
    int n,dem;
    dem=0;
    cin>>n;
    while (n!=0){
        n/=10;
        dem++;

    }
    cout<<dem;
}