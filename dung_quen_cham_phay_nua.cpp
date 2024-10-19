#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b,c,delta,x,y;
    cout<<"nhap vao ba tham so cua phuong trinh bac hai ";
    cin>>a>>b>>c;
    delta= b*b-4*a*c;
    if (delta>0){
        cout<<"hai nghiem cua phuong trinh la: ";
        x=(-b+sqrt(delta))/(2*a);
        y=(-b-sqrt(delta))/(2*a);
        cout<<a<<" "<<b;
    }
    else if(delta==0){
        cout<<"phuong trinh co nghiem kep la: ";
        x=-b/(2*a);
        cout<<x;
   }
   else{
    cout<<"phuong trinh vo nghiem";
   }



}