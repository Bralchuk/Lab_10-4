#include <iostream>
#include <cmath>

int main() {
    try {
        // Input values for x and y
        double x, y;
        std::cout << "Enter the value of x: ";
        std::cin >> x;
        std::cout << "Enter the value of y: ";
        std::cin >> y;

        // Check the domain of definition
        if (std::abs(sinh(x) - cos(y)) <= 0.0001) {
            std::cerr << "Error: The expression is undefined for the given values of x and y." << std::endl;
            return 1;
        }

        // Calculate the expression
        double result = std::sqrt((1 - 2 * std::pow(cos(x), 2)) / (sinh(x) - cos(y)));

        // Output the result
        std::cout << "Result of the expression: " << result << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
