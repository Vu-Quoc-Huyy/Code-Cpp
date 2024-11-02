//037_Mảng giống nhau
#include <iostream>
using namespace std;
void sapxepmang(int a[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]) swap(a[i],a[j]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[1001],b[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    
    sapxepmang(a,n);
    sapxepmang(b,n);
    bool kt=true;
    for (int i=0;i<n;i++){
        if (a[i]!=b[i]){
            kt=false;
            break;
        }
    }
    cout<<(kt?"YES":"NO");
}
//038_Độc nhất
#include <iostream>
using namespace std;
void sapxepmang(int a[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]) swap(a[i],a[j]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxepmang(a,n);
    for (int i=0;i<n;i++){
        if (a[i]!=a[i+1]){
            cout<<a[i]<<" ";
        }
    }  
}
//039_Giá trị thường xuyên
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
//040_Giá trị xuất hiện nhiều nhất
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int count[2002]={0};
    for (int i=0;i<n;i++){
        count[a[i]+1000]++;
    }
    int max=0;
    int mostFrequent= -1003;
    for (int i=0;i<2002;i++){
        if (count[i]>max){
            max=count[i];
            mostFrequent=i-1000;
        }else if (count[i]==max && (i-1000)>mostFrequent){
            mostFrequent=i-1000;
        }
    }
    cout<<mostFrequent<<endl;
}
//043_Tổng cột
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[101][101];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (int j=0;j<m;j++){
        long long tong=0;
        for (int i=0;i<n;i++){
            tong+=a[i][j];
        }
        cout<<tong<<" ";
    }
}
//044_Hiện diện
#include<iostream>
using namespace std;
int n, m, x, y, a[10][10], b[10][10];
bool kt;
int main(){
    cin >> n >> m >> x >> y;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin >> a[i][j];
    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++) cin >> b[i][j];
        
    for(int i=0; i<=n-x; i++){
        for(int j=0; j<=m-y; j++){
            bool YES = true;
            for(int l=0; l<x; l++){
                for(int r=0; r<y; r++)
                    if(a[i+l][j+r] != b[l][r]){
                        YES = false;
                        break;
                    }
                if(!YES) break;
            }
            if(YES){
                kt = true;
                break;
            }
        }
        if(kt) break;
    }
    cout << (kt ? "YES" : "NO");
}
//045_Tổng đường chéo
#include<iostream>
using namespace std;
int main(){
    int n,m,x,y,a[101][101];
    cin>>n>>m>>x>>y;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    long long tong=0;
    int i=x,j=y;
    while (i<n && j<m){
        tong+=a[i++][j++];}
    int k=x-2,l=y-2;
    while (k>=0 &&l>=0){
        tong+=a[k--][l--];
    }
    i =x-1;
    j=y-1;
    while (i<n&&j>=0){
        tong+=a[i++][j--];
    }
    k=x-2;
    l=y;
    while (k>=0 && l<m){
        tong+=a[k--][l++];
    }
    cout<<tong;
    
}
//048_Xoay ma trận
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=n-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }}
//049_Tìm kiếm trong mảng
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool kt=false;
    for (int i=0;i<n;i++){
        if (a[i]==m){
            kt=true;
            break;
        }
    }
    string output = (kt)?"YES":"NO";
    cout<<output;
    return 0;
}
//050_Học đếm trong mảng
#include<iostream>
using namespace std;
int main(){
    int n,dem=0,m;
    cin>>n>>m;
    int a[1001];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]==m){
            dem++;
        }
    }
    cout<<dem;
}


