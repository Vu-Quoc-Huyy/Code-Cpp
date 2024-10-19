#include<iostream>
using namespace std;
int main(){
    int sosochan,sosole,n;
    sosochan=0;
    sosole=0;
    int mc[100];
    int ml[100];
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            mc[sosochan]=a[i];
            sosochan++;
        }else{
            ml[sosole]=a[i];
            sosole++;
        }
    }

    for (int i=0;i<sosochan;i++){
        cout<<mc[i]<<" ";}
    cout<<endl;
    for(int i=0;i<sosole;i++){
        cout<<ml[i]<<" ";
    }
    }
