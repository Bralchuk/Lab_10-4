#include <iostream>
#include <cmath>

int main() {
    // Option number (used to set coordinates)
    int option;
    std::cout << "Enter your option number (i): ";
    std::cin >> option;

    // Coordinates of triangle vertices
    double x_A = 0, y_A = 0;
    double x_B = option, y_B = option - 1;
    double x_C = -option, y_C = option + 1;

    // Calculate distances between vertices (triangle sides)
    double side_a = std::sqrt(std::pow(x_B - x_C, 2) + std::pow(y_B - y_C, 2));
    double side_b = std::sqrt(std::pow(x_A - x_C, 2) + std::pow(y_A - y_C, 2));
    double side_c = std::sqrt(std::pow(x_A - x_B, 2) + std::pow(y_A - y_B, 2));

    // Calculate semiperimeter for use in Heron's formula
    double s = (side_a + side_b + side_c) / 2;

    // Calculate triangle area using Heron's formula
    double area = std::sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));

    // Calculate triangle height (relative to side a)
    double height_a = (2 * area) / side_a;

    // Calculate triangle bisector (relative to angle at vertex A)
    double bisector_b = (2 * side_b * side_c) / (side_b + side_c);

    // Output the results
    std::cout << "Height (h_a) of the triangle: " << height_a << std::endl;
    std::cout << "Bisector (m_b) of the triangle: " << bisector_b << std::endl;

    return 0;
}
