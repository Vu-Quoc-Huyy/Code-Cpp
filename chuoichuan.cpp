#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int demsotu(char s[]){
    int n=strlen(s),dem=0;
    for (int i=0;i<n;i++){
        if (s[i]==' '&&isalpha(s[i+1])) dem++;
    }
    return dem+1;
}
int main(){
    char s[50];
    cin.getline(s,50);
    int n=strlen(s);
    
    bool kt=true;
    if (s[0]==' '|| s[n-1]==' ') kt=false;

    for (int i=0;i<n;i++){
        if (s[i]==' ' && s[i+1]==' '){
            kt=false;
            break;
        }   
    }

    if (kt) cout<<"chuoi nay co "<<demsotu(s)<<" tu";
    else cout<<"chuoi nay khong chuan";
}