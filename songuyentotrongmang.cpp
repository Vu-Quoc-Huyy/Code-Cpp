#include<iostream>
#include<vector>
using namespace std;
vector<bool> sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false; // 0 và 1 không phải là số nguyên tố

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}
int main(){
    int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
    for(int i=0;i<n;i++){
        if ((a[i])){
            cout<<a[i]<<" ";
        }
    }
}