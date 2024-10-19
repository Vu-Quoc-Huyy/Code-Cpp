#include<iostream>
using namespace std;
int main(){
    int row,col;
    bool check=true;
    cin>>row>>col;
    int a[20][20];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if ((i==j&&a[i][j]!=1)||(i!=j&&a[i][j]!=0)){
                check=false;
                i=row;
                break;
            }
        }
    }
    if (check) cout<<"ma tran don vi";
    else cout<<"khong phai ma tran don vi";
}