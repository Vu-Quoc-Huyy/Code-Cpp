#include<bits/stdc++.h>
using namespace std;
struct monhoc{
    string mamh;
    string tenmon;
    float diem;
    int sotc;
};
struct sinhvien{
    string masv;
    string hoten;
    int somh;
    monhoc kq[100];
    int tongtc;
    int tongtctl;
    float dtbc;

    float dtctl;
};
void nhapmonhoc(monhoc &a){
    cin.ignore();
    getline(cin,a.mamh);
    getline(cin,a.tenmon);
    cin>>a.diem;
    cin>>a.sotc;
}
void nhapmonhoc(monhoc a[],int n){
    for (int i=0;i<n;i++){
        nhapmonhoc(a[i]);
    }
}
void nhapsinhvien(sinhvien &a){
    cin.ignore();
    getline(cin,a.masv);
    getline(cin,a.hoten);
    cin>>a.somh;
    nhapmonhoc(a.kq,a.somh);
}
void inmonhoc(monhoc a){
    cout<<a.mamh<<endl;
    cout<<a.tenmon<<endl;
    cout<<a.diem<<endl;
    cout<<a.sotc<<endl;
}
void inmonhoc(monhoc a[],int n){
    for (int i=0;i<n;i++){
        inmonhoc(a[i]);
    }
}
void insinhvien(sinhvien a){
    cout<<a.masv<<endl;
    cout<<a.hoten<<endl;
    cout<<a.somh<<endl;
    inmonhoc(a.kq,a.somh);
}
int main(){
    monhoc a[3];
    nhapmonhoc(a,3);
    
}