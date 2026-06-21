#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    // Generating a random number
    int num = rand();

    // Generating a random number between 1-6
    int num1 = (rand() % 6) + 1;
    
    std::cout << num << '\n';
    std::cout << num1;

    return 0;
}