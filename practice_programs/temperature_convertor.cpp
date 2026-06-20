// Temperature Conversion
#include <iostream>
int main(){

    double temp;
    char unit;

    std::cout << "TEMPERATURE CONVERSION\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        double new_temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << new_temp << "F\n";
    }
    else if(unit == 'c' || unit == 'C') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        double new_temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << new_temp << "C\n";
    }
    else {
        std::cout << "Please enter only C or F.\n";
    }
}