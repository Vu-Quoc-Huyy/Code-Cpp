#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n , m;
    cin>>n>>m;
    int a[4][4];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //Duyệt theo hàng, i là hàng, j là cột
    for(int i = 0; i < n; i++){
        int tong = 0;
        for(int j = 0; j < m; j++){
            tong += a[i][j];
        }
        cout << "Tong hang " << i + 1 << " : " << tong << endl;
    }
    //Duyệt theo cột, i là cột, j là hàng
    for(int i = 0; i < m; i++){
        int tong = 0;
        for(int j = 0; j < n; j++){
            tong += a[j][i];
        }
        cout << "Tong cot " << i + 1 << " : " << tong << endl;
    }
    return 0;
}