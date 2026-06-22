// Number Guessing Game
#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    int num;
    int guess;
    int tries = 0;

    
    num = (rand() % 25) + 1;

    std::cout << "NUMBER GUESSING GAME\n";

    do{
        std::cout << "Guess a number between (1-25): ";
        std::cin >> guess;
        tries++;

        if(guess < num) {
            std::cout << "Too low!\n";
        }
        else if(guess > num){
            std::cout << "Too high!\n";
        }
        else {
            std::cout << "No. of tries taken: " << tries << "\n";
        }
         
    } while (guess != num);

    return 0;
}