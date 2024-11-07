//041_Dãy nón
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    bool kt;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        kt=true;
        for (int j=i;j<n-1;j++){
            if (a[j]<=a[j+1]){
                kt=false;
                break;
            }
        }
        for (int j=i-1;j>0;j--){
            if (a[j]<=a[j-1]){
                kt=false;
                break;
            }
        }
        if (kt) break;
    }
    if (kt) cout<<"YES";
    else cout<<"NO";
}
//047_Ma trận xoắn ốc
#include<iostream>
using namespace std;
int main(){
    int n,m,count=1;
    cin>>n>>m;
    int a[102][102];
    int left=0,right=m-1,top=0,bottom=n-1;
    while (left<=right && top<=bottom){
        for (int i=left;i<=right;i++){
            a[top][i]=count;
            count++;
        }
        top++;
        for (int i=top;i<=bottom;i++){
            a[i][right]=count;
            count++;
        }
        right--;
        if (top<=bottom){
            for (int i=right;i>=left;i--){
                a[bottom][i]=count;
                count++;
            }
            bottom--;
        }
        if (left<=right){
            for (int i=bottom;i>=top;i--){
                a[i][left]=count;
                count++;
            }
            left++;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }}
//026_Chênh lệch liên tiếp
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,max_differnt=0;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];

    }
    for (int i=0;i<n-1;i++){
        int temp=abs(a[i+1]-a[i]);
        if (max_differnt<temp){
            max_differnt=temp;
        }

    }
    cout<<max_differnt;
}
// 035_Mảng con dương
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
     
    int temp=0,max=0;
    for (int i=0;i<n;i++){
        if (a[i]>0){
            temp++;
            if (temp>max) max=temp;
        }else{
            
            temp=0;
        }
    }
    cout<<max;
    
   
}
//030_Lớn thứ hai
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
     
    
    for (int i=0;i<n-1;i++){
    
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
        

    }
    cout<<a[n-2];
    
}
//033_Mảng Palindrome
#include <iostream>
using namespace std;
bool kiemtradoixung(int a[],int n){
    int start=0,end=n-1;
    while (start<end){
        if (a[start]!=a[end]) return false;
        start++;
        end--;
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if (kiemtradoixung(a,n)) cout<<"YES";
    else cout<<"NO";  
}
//MT1-Array1D-2022-11-21-Bai5
#include<iostream>
using namespace std;
int main(){
    int n,a[102],max_sum,current_sum;
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    max_sum=current_sum = a[0];
    for (int i=1;i<n;i++){
        current_sum=max(a[i],current_sum+a[i]);
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum;
}
//6_M1C_DemKoSNTLonX_GK2_09_10_3
#include <iostream>
using namespace std;
bool languyento(int n){
    if (n<2) return false;
    for (int i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}
int main(){
    int n,x,dem=0;
    cin>>n>>x;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (!languyento(a[i]) && a[i]>x){
            dem++;
        }
    }
    cout<<dem;

}
//7_MT_MaxDongGiua_CK1_13_14
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
//8_M1C_ChuTrinh_CK1_14_15
#include<iostream>
using namespace std;
int main(){
        int n,k;
        cin>>n>>k;
        int a[100];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        if (a[0]!=a[n-1]){
            cout<<-1;
        }else{
            for (int i=k;i<n;i++){
                cout<<a[i]<<" ";
            }
            for (int i=1;i<=k;i++){
                cout<<a[i]<<" ";
            }
        }
        
}