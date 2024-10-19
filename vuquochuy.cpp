#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec; // Khai báo vector rỗng

    // Thêm phần tử vào vector
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(3);

    // Hiển thị các phần tử trong vector
    std::cout << "Các phần tử trong vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Thêm một phần tử mới vào vector
    vec.push_back(4);

    // Hiển thị các phần tử sau khi thêm
    std::cout << "Các phần tử trong vector sau khi thêm: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
