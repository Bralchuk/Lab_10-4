#include <iostream>

int main() {
    // Meter readings at two different points in time
    double initial_reading, final_reading;

    // Input for meter readings
    std::cout << "Enter the meter reading at the beginning of the period: ";
    std::cin >> initial_reading;

    std::cout << "Enter the meter reading at the end of the period: ";
    std::cin >> final_reading;

    // Tariff for electricity (cost per kWh)
    double tariff;

    // Input for electricity tariff
    std::cout << "Enter the electricity tariff (cost per kWh): ";
    std::cin >> tariff;

    // Calculating the consumed electricity and cost
    double consumed_electricity = final_reading - initial_reading;
    double cost = consumed_electricity * tariff;

    // Displaying the results
    std::cout << "Consumed electricity: " << consumed_electricity << " kWh" << std::endl;
    std::cout << "Cost of consumed electricity: " << cost << " currency" << std::endl;

    return 0;
}

