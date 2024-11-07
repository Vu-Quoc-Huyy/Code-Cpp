#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[1001][1001];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=0;
    for (int j=0;j<n;j++){
        if (a[n/2][j]>max){
            max=a[n/2][j];
        }
    }
    cout<<max;

    
}