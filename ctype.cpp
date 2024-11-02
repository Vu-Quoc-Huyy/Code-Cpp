#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(){
    char str[50];
    int n= strlen(str)+1,dem_dau_cach,dem_chu_cai,dem_chu_so,dem_ki_tu_DB;
    dem_dau_cach=dem_chu_cai=dem_chu_so=dem_ki_tu_DB=0;
    cin.getline(str,n);
    for (int i=0;i<n;i++){
        if (isspace(str[i])) dem_dau_cach++;
    }
    cout<<dem_dau_cach<<endl;

    for (int i=0;i<n;i++){
        if (isalpha(str[i])) dem_chu_cai++;
    }
    cout<<dem_chu_cai<<endl;

    for (int i=0;i<n;i++){
        if (isdigit(str[i])) dem_chu_so++;

    }
    cout<<dem_chu_so<<endl;

    // for (int i=0;i<n;i++){
    //     if ((int(str[i])>=32 && int(str[i])<=47) ||(int(str[i])>=58&&int(str[i])<=64)||(int(str[i])>=91&&int(str[i])<=96)||(int(str[i])>=123&&int(str[i])<=126)){
    //         dem_ki_tu_DB++;
    //     }
    // }
    for( int i=0;i<n;i++){
        if ((!isalpha(str[i]))&&(!isdigit(str[i]))&&(!isspace(str[i]))) dem_ki_tu_DB++;
    }
    cout<<dem_ki_tu_DB<<endl;
}