#include<string.h>
#include<iostream>
using namespace std;
int main(){
    char str[50];
    int len=5;
    cin.getline(str,50);
    // cin>>str;
    char dest[50];
    strcpy(dest,str);
    
    strcat_s(dest," la sinh vien nganh ATTT");
    

    strlwr(dest); //chuyen mot chuoi thanh chuoi in thuong
    cout<<str<<endl;

    strupr(dest);
    cout<<dest<<endl;


    cout<<strlen(dest)<<endl;
    cout<<sizeof(dest)<<endl;

    // if (strcmp(str,"vu quoc huy")==0) cout<<"hai chuoi giong nhau hoan toan";
    // else cout<<"hai chuoi khong giong nhau";

    if (strcmpi(str,"Vu Quoc Huy")==0) cout<<"hai chuoi giong nhau ve hinh thuc";
    if (strchr(str,'a')!=NULL) cout<<"chuoi vua nhap co ki tu"<<endl;
    if (strstr(str,"An")!=NULL) cout<<"chuoi vua nhap co chuoi An"<<endl;
}