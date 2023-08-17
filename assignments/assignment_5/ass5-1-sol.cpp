#include <iostream>
using namespace std;

enum Play {
  PAPER = 1,
  SCISSORS,
  ROCK
};

enum Result {
  PLAYER1_WIN = 1,
  PLAYER2_WIN,
  DRAW
};

int main() {
  int player1Input = 0, player2Input = 0;
  cout << "Player 1: (1- paper, 2- scissors, 3- rock): ";
  cin >> player1Input;
  cout << "Player 2: (1- paper, 2- scissors, 3- rock): ";
  cin >> player2Input;

  Play player1Choice;
  Play player2Choice;
  Result gameResult;

  // player1 choice
  switch (player1Input) {
  case PAPER:
    player1Choice = PAPER;
    break;

  case SCISSORS:
    player1Choice = SCISSORS;
    break;

  case ROCK:
    player1Choice = ROCK;
    break;

  default:
    cerr << "invaid choice" << endl;
    return -1;
  }

  // player2 choice
  switch (player2Input) {
  case PAPER:
    player2Choice = PAPER;
    break;

  case SCISSORS:
    player2Choice = SCISSORS;
    break;

  case ROCK:
    player2Choice = ROCK;
    break;

  default:
    cerr << "invaid choice" << endl;
    return -1;
  }

  if (player1Choice == PAPER) {
    if (player2Choice == PAPER)
      gameResult = DRAW;
    else if (player2Choice == SCISSORS)
      gameResult = PLAYER2_WIN;
    else if (player2Choice == ROCK)
      gameResult = PLAYER1_WIN;
  } else if (player1Choice == SCISSORS) {
    if (player2Choice == PAPER)
      gameResult = PLAYER1_WIN;
    else if (player2Choice == SCISSORS)
      gameResult = DRAW;
    else if (player2Choice == ROCK)
      gameResult = PLAYER2_WIN;
  } else if (player1Choice == ROCK) {
    if (player2Choice == PAPER)
      gameResult = PLAYER2_WIN;
    else if (player2Choice == SCISSORS)
      gameResult = PLAYER1_WIN;
    else if (player2Choice == ROCK)
      gameResult = DRAW;
  }

  switch (gameResult) {
  case PLAYER1_WIN:
    cout << "Player1 wins" << endl;
    break;
  case PLAYER2_WIN:
    cout << "Player2 wins" << endl;
    break;
  case DRAW:
    cout << "Draw" << endl;
    break;
  }
      
}
