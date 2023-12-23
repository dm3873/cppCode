#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows for the equilateral triangle: ";
    std::cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }

        // Inner loop for asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}