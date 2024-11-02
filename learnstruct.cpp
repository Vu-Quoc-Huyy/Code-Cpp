#include<iostream>
#include<string>
using namespace std;
struct phanso{
    int tu,mau;
};
void nhapgiatri(phanso &a){
    cin>>a.tu;
    do cin>>a.mau;
    while (a.mau==0);
}
void xuatgiatri(phanso a){
    cout<<a.tu<<"/"<<a.mau;
}

unsigned uocchunglonnhat(unsigned a,unsigned b){
    while (a!=b){
        if (a>b) a-=b;
        else b-=a;
    }
    return a;
}
void toigian(phanso &a){
    unsigned ucln=uocchunglonnhat(a.tu,a.mau);
    a.tu/=ucln;
    a.mau/=ucln;
}
phanso tich(phanso a,phanso b){
    phanso kq;
    kq.tu=a.tu*b.tu;
    kq.mau=a.mau*b.mau;
    toigian(kq);
    return kq;
}
phanso tong(phanso a,phanso b){
    phanso kq;
    kq.tu=a.tu*b.mau+b.tu*a.mau;
    kq.mau=a.mau*b.mau;
    toigian(kq);
    return kq;
}
phanso hieu(phanso a,phanso b){
    phanso kq;
    kq.tu=a.tu*b.mau-b.tu*a.mau;
    kq.mau=a.mau*b.mau;
    toigian(kq);
    return kq;
}
phanso thuong(phanso a,phanso b){
    phanso kq;
    kq.tu=a.tu*b.mau;
    kq.mau=a.mau*b.tu;
    toigian(kq);
    return kq;
}
phanso nghichdao(phanso a){
    phanso kq;
    kq.tu=a.mau;
    kq.mau=a.tu;
    toigian(kq);
    return kq;
}
int sosanh(phanso a,phanso b){
    if (a.tu*b.mau>b.tu*a.mau) return 1;
    if (a.tu*b.mau<b.tu*a.mau) return -1;
    return 0;
}


int main(){
    phanso a[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        nhapgiatri(a[i]);
    }
    phanso kq;
    kq.tu=kq.mau=1;
    for (int i=0;i<n;i++){
        
        kq=tich(a[i],kq);
        
    }
    xuatgiatri(kq);
    
    return 0; 

    
}