#include <iostream>
    int main() {
        int n;
        std::cin >> n;
        int count = 0;
        while (n > 0) {
            if (n % 10 >= 0) {
                count++;
            }
            n /= 10;
        }
        std::cout <<" "<< count;
        return 0;
    }