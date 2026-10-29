#include<iostream>
#include<vector>

int first(){
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    std::cout<< v[0]*(v[1]+v[2]) << std::endl;
    return 0;
}

#include <iostream>
#include <vector>

int second() {
    int n;
    std::cin >> n;
    std::vector<double> v;
    for (int i = 0; i < n; i++) {
        double value;
        std::cin >> value;
        v.push_back(value);
    }
    double t;
    std::cin >> t;
    for (int i = 0; i < n; i++) {
        if (v[i] < t) {
            std::cout << v[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

int third() {
    int n;
    std::cin >> n;
    std::vector<double> v;
    for (int i = 0; i < n; i++) {
        double value;
        std::cin >> value;
        v.push_back(value);
    }
    double s;
    std::cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]==s) {
            count++;
        }
    }
    std::cout<<count << std::endl;
    return 0;
}