// Quiz Game

#include <iostream>
int main() {

    std::string questions[] = { "1. What is the current year? ",
                                "2. What is the colour of sky at night? ",
                                "3. Which of the following is not a flower? ",
                                "4. What is the extention of python? ",
                                "5. Which of the following is not an article? "};
                        
    std::string options[][5] = {{"A.2020", "B.2026", "C.2006", "D.2030"},
                                {"A.Black", "B.Pink", "C.Yellow", "D.Green"},
                                {"A.Rose", "B.Sunflower", "C.Turnip", "D.Lily"},
                                {"A..python", "B..pylang", "C..py", "D..p"},
                                {"A.a", "B.the", "C.an", "D.t"}};

    char answerKey[] = {'B', 'A', 'C', 'C', 'D'};

    int size = sizeof(questions)/ sizeof(questions[0]);

    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << "\n\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct answer!\n";
            score++;
        }
        else{
            std::cout << "Wrong answer!\n";
            std::cout << "Correct answer is option " << answerKey[i] << '\n';
        }
    }
    std::cout << "\n";
    std::cout << "Correct Guesses: " << score << "\n";
    std::cout << "Number of questions: " << size << "\n";
    std::cout << "Your Final Score is: " << (score/(double)size)*100 << "%";
}