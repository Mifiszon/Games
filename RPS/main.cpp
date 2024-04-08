#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int pThrow = 0;
    int aiThrow = 0;
    bool draw = false;

    do
    {
        cout << "Select throw " << endl;
        cout << endl;

        cout << "1 - Rock" << endl;
        cout << "2 - Paper" << endl;
        cout << "3 - Scissors" << endl;
        cout << endl;

        cout << "Selection : ";
        cin >> pThrow;

        cout << endl;

        aiThrow = (rand()%3 ) +1;

        if (aiThrow == ROCK)
        {
            cout << "Enemy throws rock" << endl;
        }

        else if (aiThrow == PAPER)
        {
            cout << "Enemy throws paper" << endl;
        }

        else if (aiThrow == SCISSORS)
        {
            cout << "Enemy throws scissors" << endl;
        }

        cout << endl;

        draw = false;

        if (pThrow == aiThrow)
        {
            draw = true;
            cout << "Draw! Play again" << endl;
        }

        else if ((pThrow == ROCK && aiThrow == SCISSORS) || (pThrow == PAPER && aiThrow == ROCK) || (pThrow == SCISSORS && aiThrow == PAPER))
        {
            cout << "You win!" << endl;
        }

        else
        {
            cout << "You lose!" << endl;
        }

        cout << endl;

    } while (draw);


    return 0;
}
