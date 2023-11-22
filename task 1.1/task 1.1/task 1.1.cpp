#include <iostream>

int main() {
    // Yields of three wheat varieties (tons per hectare)
    double yield_sort1 = 36;
    double yield_sort2 = 40;
    double yield_sort3 = 44;

    // Areas of three corresponding fields (hectares)
    double area_field1, area_field2, area_field3;

    // Input for field areas
    std::cout << "Enter the area of the first field (hectares): ";
    std::cin >> area_field1;

    std::cout << "Enter the area of the second field (hectares): ";
    std::cin >> area_field2;

    std::cout << "Enter the area of the third field (hectares): ";
    std::cin >> area_field3;

    // Calculating the wheat harvest from each field and the total harvest
    double harvest_field1 = yield_sort1 * area_field1;
    double harvest_field2 = yield_sort2 * area_field2;
    double harvest_field3 = yield_sort3 * area_field3;

    double total_harvest = harvest_field1 + harvest_field2 + harvest_field3;

    // Displaying the results
    std::cout << "Wheat harvested from the first field: " << harvest_field1 << " tons" << std::endl;
    std::cout << "Wheat harvested from the second field: " << harvest_field2 << " tons" << std::endl;
    std::cout << "Wheat harvested from the third field: " << harvest_field3 << " tons" << std::endl;
    std::cout << "Total wheat harvested from all three fields: " << total_harvest << " tons" << std::endl;

    return 0;
}
