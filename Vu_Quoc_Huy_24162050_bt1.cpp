#include<iostream>
using namespace std;
int main()
{
    double price,quantity,pretax,aftertax;
    const double tax = 0.1;
    cout<<"nhap don gia: ";
    cin>>price;
    cout<<"nhap so luong: ";
    cin>>quantity;
    pretax=price*quantity;
    aftertax=pretax*(1+tax);
    cout<<"tong tien truoc thue: "<<pretax<<endl;
    cout<<"tien thue: "<<pretax*tax<<endl;
    cout<<"tong tien sau thue: "<<aftertax<<endl;

}