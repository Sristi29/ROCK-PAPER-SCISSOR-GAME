#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    int userScore = 0;
    int computerScore = 0;
    int rounds = 5;

    cout << "ROCK PAPER SCISSOR(5 rounds):" << endl;
    for (int i = 0; i < rounds; ++i)
    {
        cout << "Round " << i + 1 << endl;
        cout << "1)ROCK" << endl;
        cout << "2)PAPER" << endl;
        cout << "3)SCISSOR" << endl;
        cin >> user;

        if (user == 1)
        {
            cout << "YOU CHOOSE ROCK" << endl;
        }
        else if (user == 2)
        {
            cout << "YOU CHOOSE PAPER" << endl;
        }
        else
        {
            cout << "YOU CHOOSE SCISSOR" << endl;
        }

        computer = rand() % 3 + 1;
        if (computer == 1)
        {
            cout << "COMPUTER CHOOSES ROCK" << endl;
        }
        else if (computer == 2)
        {
            cout << "COMPUTER CHOOSES PAPER" << endl;
        }
        else
        {
            cout << "COMPUTER CHOOSES SCISSOR" << endl;
        }

        if (user == computer)
        {
            cout << "MATCH TIE" << endl;
        }
        else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
        {
            cout << "YOU WIN!" << endl;
            userScore++;
        }
        else
        {
            cout << "YOU LOSE!" << endl;
            computerScore++;
        }
        cout << endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;

    cout << "FINAL SCORE:" << endl;
    cout << "YOUR SCORE: " << userScore << endl;
    cout << "COMPUTER SCORE: " << computerScore << endl;

    if (userScore > computerScore)
    {
        cout << "YEAHH!! YOU WIN THE GAME" << endl;
    }
    else if (userScore < computerScore)
    {
        cout << "OOPS!! YOU LOST THE GAME" << endl;
    }
    else
    {
        cout << "IT IS A DRAW" << endl;
    }

    return 0;
}
