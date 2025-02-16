#include <iostream>
#include <ctime>
#include <cmath>

void Play_Game(){
    std::cout << "Loading game \n";
    std::cout << ". \n";
    std::cout << ".. \n";
    std::cout << "... \n";
    std::cout << "Starting Game \n";
};

void randNumCOM(){
    
};

void End_Game(){
    std::cout << "Ending game";
};

int randomNum(int playerNum){
    srand(time(0));
    std::string NumText;
    
    // Generate a random number between 1 and 3
    int randomNum = (std::rand() % 3) + 1;
    if(randomNum == 1){
        NumText = "Rock";
    };

    if(randomNum == 2){
        NumText = "Paper";
    };

    if(randomNum == 3){
        NumText = "Scissors";
    };

    for(int i = 0; i != 3; i++){
        if(playerNum == randomNum){
            tie();
        };
        if(playerNum < randomNum){
            abs(playerNum-randomNum);
        };
        if(playerNum > randomNum){
            abs(randomNum-playerNum);
        };
    };

    std::cout << NumText;
    return 0;
};
void tie(){

};
void win(){

};
void lose(){

};