#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[100][100];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int i=m/2;
    int max=a[i][0];
    
    for (int j=1;j<n;j++){
        if (a[i][j]>max){
            max=a[i][j];
        }
    }
    cout<<max;
    return 0;
}



