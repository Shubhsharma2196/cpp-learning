#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;     // write 20 if we want number between 1 and 20 
    int num2 = (rand() % 6) + 1;     // added 1 so we dont get 0 to 19 and get 1 to 20
    int num3 = (rand() % 6) + 1;     
                                    
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}