#include<iostream>
using namespace std;
int main() {
    int n, m,max=0; // rows, cols
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }
    int ans = 0; // Biến lưu kết quả
    for (int i=0;i<n;i++){
      for (int j=0;j<n;j++){
        if (arr[i][j]=='#'){
          ans+=1;
        }
        if (arr[i][j]=='.'){
          if (ans>max){
            max=ans;
          }else{
            ans=0;
          }
        }
      }
    }
    cout << max; 
}