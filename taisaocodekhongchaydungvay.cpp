#include <iostream>
#include <string>
#include<vector>
using namespace std;
int main() {
    string s;
    string temp="";
    int first_max,second_max;
    vector<int> myVector;
    getline(cin, s);//dữ liệu nhập vào từ bàn phím được xử lí dưới dạng chuỗi.
//fail vì không xử lí được số có 2 chữ số.
    for (int i=0;i<s.size();i++){
      if (s[i] !=' '){
       
       temp+=s[i];
      }else{
        myVector.push_back(stoi(temp));
        temp="";
      }
    first_max=0;
    second_max=0;
      }
    for (int num:myVector){
        if (num > first_max) {
            second_max = first_max;
            first_max = num;
        } else if (num > second_max && num < first_max) {
            second_max = num;
        }

    }
    if (second_max==first_max){
        return 0;
    }else{
        cout<<second_max-'0';
    }
    return 0;
}