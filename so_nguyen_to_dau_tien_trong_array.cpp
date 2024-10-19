#include<iostream>
using namespace std;
bool is_prime(int n){
    if (n<2){
        return 0;
    
    }
    else{
        for (int i=2;i*i<=n;i++){
            if (n%i==0){
                return 0;
            }
        }
    return 1;
    }


}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (is_prime(a[i])){
            cout<<"so nguyen to dau tien la so: "<<a[i]<<" o vi tri thu: "<<i+1;
            break;
        }

    }
}