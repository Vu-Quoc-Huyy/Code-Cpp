#include <iostream>

using namespace std;
int main() 
{
  int i,tong,k;
  long long n,mu;
  cin>>n;
  i=0;
  tong=0;
  mu=1;
  k=-1;
  while(mu<=n){
    mu*=2;
    ++k;
  }
  if (n==1){
    k==-1;
  }
  if(n==0){
    i=1;}
  else{
    while (n>0){
    tong+= (n%10);
    n/=10;
    ++i;
  }}
  cout<<i<<endl<<tong<<endl<<k;
  return 0;
  }