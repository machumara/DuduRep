#include <iostream>
#include <conio.h>
#include "game.h"


using namespace std;

int main()
{
    bool exit = false;
    char userChoice;

    Game game;

    while (!exit)
    {
        system("CLS");
        cout << "******PAC MEN******\n";
        cout << "Press N for a new game or Q to quit";
        userChoice = _getch();

        if (userChoice == 'n' || userChoice == 'N')
        {
            game.play();
        }
        else
        {
            exit = true;
        }
    }  
}
