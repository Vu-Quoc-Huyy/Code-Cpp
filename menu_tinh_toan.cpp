#include <iostream>
#include<math.h>
using namespace std;
void hinh_chu_nhat(double a,double b){
    cout<<a+b+a+b<<endl;
    cout<<a*b;
}
void hinh_tron(double r){
    cout<<2*3.14*r<<endl;
    cout<<r*r*3.14;
}
void hinh_vuong(double a){
    cout<<4*a<<endl;
    cout<<a*a;
}
void hinh_tam_giac(double a,double b,double c){
    cout<<a+b+c<<endl;
    double p=(a+b+c)/2;
    cout<<sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    int choose;
    double a,b,c;
    cout<<"1.Hinh tam giac\n2.Hinh tron\n3.Hinh vuong\n4.Hinh chu nhat\n";
    cin>>choose;
    switch(choose){
        case 1:
        cout<<"nhap do dai ba canh di: ";
        cin>>a>>b>>c;
        hinh_tam_giac(a,b,c);
        break;
        case 2:
        cout<<"nhap ban kinh di: ";
        cin>>a;
        hinh_tron(a);
        break;
        case 3:
        cout<<"nhap do dai canh hinh vuong di: ";
        cin>>a;
        hinh_vuong(a);
        break;
        case 4:
        cout<<"nhap do dai hai canh di: ";
        cin>>a>>b;
        hinh_chu_nhat(a,b);
        break;
        default:
        cout<<"chay lai di thang loz: "


    }
}