// /* 1> Hypotenuse calculator practice program */
// #include <iostream>
// #include <cmath>
// int main() {
//     double a;
//     double b;
//     double c;

//     std::cout << "Enter side A: ";
//     std::cin >> a;

//     std::cout << "Enter side B: ";
//     std::cin >> b;

//     a = pow(a,2);
//     b = pow(b,2);
//     c = sqrt(a + b);

//     std::cout << "Side C is: "<< c;
//     return 0;
// }

// Simple calculator
#include <iostream> 
int main() {
    char op;

    std::cout << "Enter an operator (+, -, *, /): " ;
    std::cin >> op;

    float a;
    float b;

    std::cout << "Enter first num: " ;
    std::cin >> a;

    std::cout << "Enter second num: " ;
    std::cin >> b;

    switch(op){
        case '+':
            std::cout << a+b ;
            break;
    
        case '-':
            std::cout << a-b;
            break;

        case '*':
            std::cout << a*b ;
            break;
            
        case '/':
            std::cout << a/b;
            break;

        default:
            std::cout << "Please enter a valid operator.";
    }

}