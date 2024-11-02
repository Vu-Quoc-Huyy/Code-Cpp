#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    std::string firstName, lastName;

    std::cout << "Enter first name: ";
    std::cin >> firstName;
    // Bỏ qua ký tự '\n' còn lại trong bộ đệm
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Full name: " << firstName << " " << lastName << std::endl;

    return 0;
}
