#include<iostream>
using namespace std;
int main(){
    int n=0;  
    int a[100];
    while (cin>>a[n]){
        n++;
    }
    int first_max=0;
    int second_max=0;
    for (int i=0;i<n;i++){
        if (a[i]>first_max){
            second_max= first_max;
            first_max= a[i];

        }else if (a[i]>second_max&&a[i]<first_max){
            second_max=a[i];
        }

    }
    if (second_max==0){
        return 0;
    }else{
        cout<<second_max;
    }
    return 0;
}
