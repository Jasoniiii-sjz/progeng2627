#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1,
                    const std::vector<int>& vin2,
                    std::vector<int>& vout) {
    std::vector<int> result;

    for (int i = 0; i < vin1.size(); i++) {
        result.push_back(vin1[i]);
    }

    for (int i = 0; i < vin2.size(); i++) {
        result.push_back(vin2[i]);
    }

    vout = result;
}

int main() {
    std::vector<int> v1 = {1, 7, 3, 4};
    std::vector<int> v2 = {2, -2, 19};
    std::vector<int> vout;

    append_vectors(v1, v2, vout);

    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}


void filter_v(const std::vector<double>& vin, double t,
              std::vector<double>& vout) {
    std::vector<double> result;

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            result.push_back(vin[i]);
        }
    }

    vout = result;
}

int main() {
    std::vector<double> vin = {10, 3.5, 8, -2, 15};
    std::vector<double> vout;
    double t = 9;

    filter_v(vin, t, vout);

    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}