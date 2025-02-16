#include <iostream>
#include <cmath>
#include "rpsFunctions.hpp"


int main(){
    int Rock = 0;
    int Paper = 1;
    int Scissors = 2;
    char start;
    int playerNum;

    std::cout << "Ready to Play? [Y/N]: ";
    std::cin >> start;
    if(start = 'Y'){
        
        Play_Game();
        std::cout << "Enter a number \n";
        std::cout << "0: Rock 1: Paper 2: Scissors \n";
        std::cout << "Num: ";
        std::cin >> playerNum;
        randNumCOM();
        randomNum(playerNum);
    }
    else if (start = 'N')
    {
        End_Game();
    };
    
}
