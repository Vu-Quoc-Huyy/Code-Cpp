#include<iostream>
using namespace std;
int demuocso(int a){
    int dem=0;
    for (int i=1;i*i<=a;i++){
        if (a%i==0){
            dem++;
            if(a/i!=i){
                dem++;
            }
        }
    }
    return dem;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (demuocso(a[i])==4){
            cout<<a[i]<<" ";
        }
    }

}