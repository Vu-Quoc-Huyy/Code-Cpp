#include <iostream>

using namespace std;

int main() {
  //Khai báo biến John
  int John = 10;
  //In ra địa chỉ bộ nhớ mà giá trị của John được lưu
  cout << "John Address = " << &John << endl;
  //In ra giá trị của John
  cout << "John Value = " << John << endl;
  return 0;
}