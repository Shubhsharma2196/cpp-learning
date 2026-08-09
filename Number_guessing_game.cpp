#include <iostream>

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "*****************NUMBER GUESSING GAME****************\n";

    do{
        std::cout << "Enter a guess (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too HIGH!!\n";
        }
        else if(guess < num){
            std::cout << "Too LOW!!\n";
        }
        else{
            std::cout << "YOU WIN!!! # of Tries: " << tries << '\n';
        }

    }while(guess != num);

    std::cout << "****************************************************";


    return 0;
}