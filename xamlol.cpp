#include<iostream>
#include<math.h>
using namespace std;
bool is_perfect_square(int n){
    double square =sqrt(n);
    if (square == int(square)){
        return 1;
    }
    return 0;
}
bool so_thuan_nghich(int input){
    int m=0;
    int n=input;
    while(n>0){
        m=n%10+10*m;
        n/=10;
        } 
    return (input==m);
    }

int main(){
    int stop=0;
    do{
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<n;i++){
            if(so_thuan_nghich(a[i])&&is_perfect_square(a[i])&&a[i]%2==0){
                cout<<a[i]<<" ";
                stop=1;
            }
        }
    }while(stop==0);
}