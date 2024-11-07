//MT1-Array1D-2022-11-21-Bai5
#include<iostream>
using namespace std;
int main(){
    int n,a[102],max_sum,current_sum;
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    max_sum=current_sum = a[0];
    for (int i=1;i<n;i++){
        current_sum=max(a[i],current_sum+a[i]);
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum;
}