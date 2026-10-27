#include <iostream>

int main() {
    double x;
    int n;

    std::cin >> x >> n;

    double result = 1;

    for (int i = 0; i < n; i++) {
        result = result * x;
    }
    std::cout << result << std::endl;

    return 0;
}

#include <iostream>

    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "error, n must be non-negative" << std::endl;
        return 0;
    }
    unsigned long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    std::cout << factorial << std::endl;

    return 0;