#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ Created?", 
                               "2. Who invented C++?",
                               "3. What is the predecessor of C++?",
                               "4. Is Earth Flat?"};

    std::string options[][4] = {
    {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
    {"A. Newton", "B. Bjarne Stroustrup", "C. Einstein", "D. Me"},
    {"A. C", "B. Python", "C. Java", "D. C+"},
    {"A. Yes", "B. No", "C. Sometimes", "D. What's earth?"}
};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }
    std::cin >> guess;
    guess = toupper(guess);

    if(guess == answerKey[i]){
        std::cout << "Correct!\n";
        score++;
    }
    else{
        std::cout << "Wrong!\n";
        std::cout << "Answer: " << answerKey[i] << '\n';
    }
    }

    std::cout << "Results\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";
    return 0;
}