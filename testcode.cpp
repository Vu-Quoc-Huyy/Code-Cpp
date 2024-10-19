#include <iostream>

using namespace std;

int find(int a, int b, int c = 3, int d=7){
    cout << a << " " << b << " " << c << " " << d << endl;
    return a + b + c + d;
}

int main(){
    cout << find(1, 2) << endl;
    cout << find(1, 2, 10) << endl;
    cout << find(1, 2, 10, 20) << endl;
    return 0;
}