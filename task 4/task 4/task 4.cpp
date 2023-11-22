#include <iostream>
#include <cmath>

int main() {
    // Constant x
    const double x = 1.7;

    // Variable to input the value of t from the keyboard
    double t;

    // Input the value of t from the keyboard
    std::cout << "Enter the value of t: ";
    std::cin >> t;

    // Calculation: a = log(x)
    double a = log(x);

    // Calculation: b = sqrt(x^2 + t^2)
    double b = sqrt(pow(x, 2) + pow(t, 2));

    // Calculation: y = cbrt(|a - b|)
    double y = cbrt(fabs(a - b));

    // Output the value of y
    std::cout << "Value of the function y: " << y << std::endl;

    return 0;
}
