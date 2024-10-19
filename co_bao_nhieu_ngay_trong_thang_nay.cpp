#include<iostream>
using namespace std;
int main(){
    cout<<"nhap vao thang va nam di: ";
    int a,b;
    cin>>a>>b;
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        cout<<"co 31 ngay";
    }
    else if (a==4||a==6||a==9||a==11){
        cout<<"co 30 ngay";
    }
    else if (a==2){
        if ((b%4==0 && b%100!=0)||b%400==0){
            cout<<"co 29 ngay";
        }
        else{
            cout<<"co 28 ngay";
        }
    }
    else{
        cout<<"Dau vao khong hop le";
    }
}