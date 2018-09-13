#include <iostream>
#include "gcd.hpp"

int gcd(const int a, const int b) {
    if (a == 0){
        return b;
    } else {
    return gcd(b % a, a);
    }
}

int main() {
    std::cout << gcd(10, 25) << std::endl;
    return 0;
}