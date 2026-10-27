#include <iostream>
#include <string>

void myswap(std::string& s1, std::string& s2) {
    std::string temp = s1;
    s1 = s2;
    s2 = temp;
}

int main() {
    std::string a = "hello";
    std::string b = "world";

    std::cout << "before: " << a << " " << b << std::endl;

    myswap(a, b);

    std::cout << "after: " << a << " " << b << std::endl;

    return 0;
}