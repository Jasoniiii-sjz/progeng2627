#include <iostream>
#include <cmath>

int main() {
    double x;
    int n;

    std::cin >> x >> n;

    if (n < 0) {
        std::cout <<"error, n is positive"<< std::endl;
        return 0;
    }
    double sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += std::pow(x, i);
    }

    std::cout << sum << std::endl;

    return 0;
}