#include <iostream>
#include <ctime>

void Play_Game(){
    std::cout << "Loading game \n";
    std::cout << ". \n";
    std::cout << ".. \n";
    std::cout << "... \n";
};

void randNumCOM(){
    std::cout << "Starting Game \n";
};

void End_Game(){
    std::cout << "Ending game";
};

int randomNum(){
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNum = rand() % 2;

    std::cout << randomNum;
    return 0;
};