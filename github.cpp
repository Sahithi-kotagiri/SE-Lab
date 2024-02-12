#include <iostream>
using namespace std;

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
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
