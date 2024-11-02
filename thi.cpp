#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
            cin>>a[i]; 
    }
    int count[2001]={0};
    for (int i=0;i<n;i++){
        count[a[i]+1000]++;
    }
    int output;
    for (int i=0;i<2001;i++){
        if (count[i]>2){
            output++;
        }
    }
    cout<<output;
}

