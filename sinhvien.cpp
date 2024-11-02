#include<bits/stdc++.h>
using namespace std;
#define Max 200
struct SV
{
    char mssv[9];
    char hoten[50];
    int tuoi;
    int somon;
    float diem[Max];
    float dtb;
};
void Nhapsv(SV &a)
{
    
    cout<<"Nhap ma so sinh vien: ";
    cin.getline(a.mssv,9);
    cin.ignore();
    cout<<"Nhap ho ten sinh vien: ";
    cin.getline(a.hoten,50);
    cin.ignore();
    cout<<"Nhap tuoi: ";
    cin>>a.tuoi;
    cin.ignore();
    cout<<"Nhap so mon hoc: ";
    cin>>a.somon;
    cin.ignore();
    cout<<"Nhap diem cac mon hoc: ";
    for(int i=0;i<a.somon;i++)
    {
        cin>>a.diem[i];
        a.dtb+=a.diem[i];
    }
    a.dtb/=a.somon;
}
void Xuat(SV a)
{
    cout<<"Ma so sinh vien: "<<a.mssv<<endl;
    cout<<"Ho ten sinh vien: "<<a.hoten<<endl;
    cout<<"Tuoi: "<<a.tuoi<<endl;
    cout<<"So mon hoc: "<<a.somon<<endl;
    cout<<"Diem cac mon hoc: ";
    for(int i=0;i<a.somon;i++)
    {
        cout<<a.diem[i]<<" ";
    }
    cout<<endl;
    cout<<"diem trung binh: "<<a.dtb<<endl;
}
int main(){
    SV a;
    Nhapsv(a);
    Xuat(a);
}