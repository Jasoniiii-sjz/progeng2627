#include <iostream>

void rectangle(double length, double width,
               double& perimeter, double& area) {
    perimeter = 2 * (length + width);
    area = length * width;
}

int main() {
    double length = 5;
    double width = 3;
    double perimeter, area;

    rectangle(length, width, perimeter, area);

    std::cout << "perimeter: " << perimeter << std::endl;
    std::cout << "area: " << area << std::endl;

    return 0;
}

void integer_division(int a, int b,
                      int& quotient, int& remainder) {
    quotient = a / b;
    remainder = a % b;
}

int main() {
    int a = 17;
    int b = 5;
    int quotient, remainder;

    integer_division(a, b, quotient, remainder);

    std::cout << "quotient: " << quotient << std::endl;
    std::cout << "remainder: " << remainder << std::endl;

    return 0;
}