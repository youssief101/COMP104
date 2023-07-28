#include <iostream>
#include <string>
using namespace std;

enum GameOption {
    Rock,
    Paper,
    Scissors
};

string determineWinner(int game1, int game2) {
    game1 = static_cast<GameOption> (game1);
    game2 = static_cast<GameOption> (game2);
    if (game1 == game2)
        return "Draw!";
    switch (game1) {
    case GameOption::Rock:
        if (game2 == GameOption::Scissors)
            return "Player1 wins";
        else
            return "Player2 wins";
        break;
    case GameOption::Scissors:
        if (game2 == GameOption::Paper)
            return "Player1 wins";
        else
            return "Player2 wins";
        break;
    case GameOption::Paper:
        if (game2 == GameOption::Rock)
            return "Player1 wins";
        else
            return "Player2 wins";
        break;
    default:
        return "invalid input"; 
    }
}

int main() {
    int input1, input2;
    cout << "Rock: 0, Paper: 1, Scissors: 2" << endl;
    cout << "Enter the game Sequence (for exmaple 0 1 as Rock and Paper): ";
    cin >> input1 >> input2;
    if ((input1 < 0 || input1 > 2) || (input2 < 0 || input2 > 2)) {
        cout << "invalid input" << endl;
        return -1;
    }
    string result = determineWinner(input1, input2);
    cout << result << endl;
    return 0;
}
