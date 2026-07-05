#include <iostream>

double getTotal(double prices[], int size);

int main() {

    // Pass array to a function

    double prices[] = {39.99, 34.12, 44, 90.75};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); 
    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}