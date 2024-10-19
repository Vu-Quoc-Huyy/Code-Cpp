#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,c;
    char b;
    cin>>a>>b>>c;
    switch(b){
        case '+':
            cout<<"="<<a+c;
            break;
        case '-':
            cout<<"="<<a-c;
            break;
        case '*':
            cout<<"="<<a*c;
            break;
        case '/':
            cout<<"="<<a/c;
            break;
        case '^':
            cout<<"="<<pow(a,c);
            break;



    }
    

}