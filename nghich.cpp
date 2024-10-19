#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
   double a,b,c,d,e;
   cin>>a>>b>>c;
   d=(a+b+c)/3;
   e = ((d-a)*(d-a)+(d-b)*(d-b)+(d-c)*(d-c))/3;
   cout<< sqrt(e);

  
}