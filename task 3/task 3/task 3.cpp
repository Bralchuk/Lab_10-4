#include <iostream>
#include <cmath>

int main() {
    double alpha;
    std::cout << "Enter the value of alpha: ";
    std::cin >> alpha;

    // Calculate z1
    double z1_numerator = sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha);
    double z1_denominator = cos(alpha) - cos(3 * alpha) + cos(5 * alpha);
    double z1 = z1_numerator / z1_denominator;

    // Calculate z2
    double z2 = tan(3 * alpha);

    // Print the results
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}