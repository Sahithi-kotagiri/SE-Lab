#include <iostream>


int main() {
    // Declare variables
    int a = 5;
    int b = 3;

    // Perform arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = static_cast<float>(a) / b; // Ensure float division

    // Output results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
