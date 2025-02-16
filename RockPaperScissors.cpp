#include <iostream>
#include <cmath>
#include "rpsFunctions.hpp"


int main(){
    int Rock = 0;
    int Paper = 1;
    int Scissors = 2;
    char start;

    std::cout << "Ready to Play? [Y/N]: ";
    std::cin >> start;
    if(start = 'Y'){
        
        Play_Game();
        randNumCOM();
        randomNum();
    }
    else if (start = 'N')
    {
        End_Game();
    };
    
}
