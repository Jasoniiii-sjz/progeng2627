#include <iostream>

int main() {
    int n;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    if (n == 0) {
        std::cout << "no numbers entered" << std::endl;
        return 0;
    }
    int curmax = n;
    int curmin = n;
    while (n != 0) {
        if (n > curmax) {
            curmax = n;
        }
        if (n < curmin) {
            curmin = n;
        }
        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;
    }

    std::cout << "final maximum: " << curmax << std::endl;
    std::cout << "final minimum: " << curmin << std::endl;

    return 0;
}

#include <limits>

int main() {
    long long n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "error, enter a positive integer" << std::endl;
        return 0;
    }

    int steps = 0;
    long long maximum = n;

    std::cout << "sequence: ";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            // Check that 3 * n + 1 will fit in long long.
            if (n > (std::numeric_limits<long long>::max() - 1) / 3) {
                std::cout << "\nerror, number too large" << std::endl;
                return 0;
            }

            n = 3 * n + 1;
        }

        std::cout << n << " ";
        steps++;

        if (n > maximum) {
            maximum = n;
        }
    }

    std::cout << std::endl;
    std::cout << "steps: " << steps << std::endl;
    std::cout << "maximum: " << maximum << std::endl;

    return 0;
}

int main() {
    int n;
    std::cout << "please enter an integer:" << std::endl;
    std::cin >> n;

    bool found_factor = false;

    for (int cf = 2; (cf <= n / cf) && !found_factor; cf++) {
        if (n % cf == 0) {
            found_factor = true;
        }
    }

    if ((n > 1) && !found_factor) {
        std::cout << "the number is prime" << std::endl;
    }
    else {
        std::cout << "the number is not prime" << std::endl;
    }

    return 0;
}