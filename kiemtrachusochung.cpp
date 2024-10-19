#include<iostream>
using namespace std;
int main(){
    int a,b,output;
    cin>>a>>b;
    output=0;
    for (int i=1;i<=2;i++){
        int n=a%10;
        a/=10;
        for(int i=1;i<=2;i++){
            int m=b%10;
            b/=10;
            if (n==m){
                output+=1;
            }

        }
    }
    if(output==1)
    {cout<<1;}
    else{
        cout<<0;
    }
        
}