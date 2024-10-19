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
long long demuocsochan(long long a){
    long long dem=0;
    for (long long i=1;i*i<=a;i++){
        if (a%i==0&&i%2==0){
            dem++;
            long long thuongg=a/i;
            if (thuongg!=i &&thuongg%2==0) dem++;
        }
    }
    return dem;
}
// int main(){
//     int n,nhieuuocsonhat,output;
//     nhieuuocsonhat=0;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for (int i=0;i<n;i++){
//         if (demuocso(a[i])>nhieuuocsonhat){
//             nhieuuocsonhat=demuocso(a[i]);
//             output=a[i];
//         }
//     }
//     cout<<output;

// }
int main(){
    cout<<demuocsochan(48);
}