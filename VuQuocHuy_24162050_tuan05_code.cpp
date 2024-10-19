//From VU QUOC HUY with love to Mrs.Trang
#include<iostream>
#include<math.h>
using namespace std;
long long demuocso(long long a){
    long long dem=0;
    for (long long i=1;i*i<=a;i++){
        if (a%i==0){
            dem++;
            if(a/i!=i){
                dem++;
            }
        }
    }
    return dem;
}
long long demuocsochan(long long a){
    long long dem=0;
    for (long long i=2;i<=a;i++){
        if (a%i==0&&i%2==0){
            dem++;
        }
    }
    return dem;
}
bool lachinhphuong(long long n){
    if (n<0) return false;
    long long can_bac_hai=sqrt(n);
    if (can_bac_hai*can_bac_hai==n) return true;
    return false;
}
bool laSoDoiXung(long long n) {
	long long temp = 0, m = n;
	while (n != 0) {
		temp = temp * 10 + n % 10;
		n/=10;
	}
	if (m == temp) return true;
	return false;
}
int main(){
    long long n,u;
    cout<<"nhap so phan tu cua mang di: ";
    while (1){
        cin>>n;
        if (n>0) break;
        cout<<"nhap lai \n";   
    }
    cout<<"nhap "<<n<<" so nguyen cach nhau boi dau cach: "; 
    long long a[8386];
    for (long long i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Chao ban den voi chuong trinh thuc hien cac thao tac voi mang 1 chieu\n";
    while (1){
        cout<<"1.Chen mot so vao mang \n2.Sap xep mang \n3.Xoa mot phan tu khoi mang \n4.Liet ke cac so chinh Phuong chia het cho 5\n5.Liet ke cac so co nhieu hon 5 uoc so chan\n6.Liet ke cac so doi xung co nhieu uoc so nhat \nBan chon thao tac nao? ";
        cin>>u;
        if (u==1||u==2||u==3||u==4||u==5||u==6){
            if (u==1){ 
            //chen phan tu vao mang
            long long x,k;
            cout<<"nhap so can chen va vi tri can chen: ";
            cin>>x>>k;
            for (long long i=n-1;i>=k;i--){
                a[i+1]=a[i];
            }
            a[k]=x;
            n++;
            //in mảng
            cout<<"mang sau khi chen so vao la: ";
            for (long long i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            
        
            }else if (u==2){
                //sap xep mang theo thu tu tang dan
                for (int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if (a[i]>a[j]){
                            long long temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }                        
                    }
                }
                //in mảng
                cout<<"mang sau khi sap xep la: \n";
                for (int i=0;i<n;i++){
                    cout<<a[i]<<" ";}
                
            }
            else if (u==3){
                //xoa mot so khoi mang
                cout<<"nhap so can xoa khoi mang: ";
                long long numToDelete;
                cin >> numToDelete;

                // kiem tra va xoa so khoi mang
                bool found = false;
                for (long long i = 0; i < n; i++) {
                    if (a[i] == numToDelete) {
                        found = true;
                        for (long long j = i; j < n - 1; j++) {
                            a[j] = a[j + 1];
                        }
                        a[n - 1] = 0;
                        i--;
                        n--; 
                    }
                }

                if (found) {
                    cout << "mang sau khi xoa: \n";
                    for (long long i = 0; i < n; i++) {
                        cout << a[i] << " ";
                    }
                } else {
                    cout << "So da nhap khong co trong mang.\n";
                }
                


            }else if (u==4){
                //liet ke so chinh phuong chia het cho 5
                bool nofound=true;
                for(long long i=0;i<n;i++){
                    if (lachinhphuong(a[i])&&a[i]%5==0){
                        cout<<a[i]<<" ";
                        nofound=false;
                    }
                
                }
                if (nofound){
                    cout<<"mang khong co so chinh phuong chia het cho 5!\n";
                }

            }else if (u==5){
                //liet ke cac so co nhieu hon 5 uoc so chan
                bool nofound=true;
                for(long long i=0;i<n;i++){
                    if (demuocsochan(a[i])>5){
                        cout<<a[i]<<" ";
                        nofound=false;
                    }
                }
                if (nofound) cout<<"mang khong co so can tim!\n"; 

            }else if (u==6){
                //liet ke cac so doi xung co nhieu uoc so nhat
                
                long long nhieuuocsonhat=0;
                for (long long i=0;i<n;i++){
                    if (laSoDoiXung(a[i])){
                        if (demuocso(a[i])>nhieuuocsonhat){
                            nhieuuocsonhat=demuocso(a[i]);
                            }
                    }
                
                }
                
                if (nhieuuocsonhat==0){
                    cout<<"mang khong co so can tim\n";
                }else{
                    for (long long i=0;i<n;i++){
                        if (laSoDoiXung(a[i])&&demuocso(a[i])==nhieuuocsonhat){
                            cout<<a[i]<<" ";
                        }
                    }
                }

            }
            cout<<"\nban co muon lam tiep khong?\n";
            cout<<"chon yes de tiep tuc hoac nhan phim khac de thoat\n";
            string answer;
            cin>>answer;
            if (answer=="yes" ||answer=="YES"){
                continue;
            }else{
                cout<<"ban da hoan thanh chuong trinh\n";
                break;
            } 


            
    }else cout<<"Nhap lai!\n";

    
}}