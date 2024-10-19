#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   unsigned int c;
    double f;
    cin>>c;
    f=(c*9/5)+32;
    cout << fixed << setprecision(2) << f << endl;
}