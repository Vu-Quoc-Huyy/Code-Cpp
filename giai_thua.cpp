#include<iostream>
using namespace std;
int main()
{
    int n,giaithua;
    giaithua = 1;
    cout<<"Tinh giai thua: ";
    cin>>n;
    for (int i=2;i<=n;i++){
        giaithua*=i;
    }
    cout<<giaithua;
}