#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char input;
  int result = 1;
  do {
    cout << "Enter a letter: ";
    cin >> input;

    // check user input
    if (input == '#') {
      cout << "Done!" << endl;
      return 0;
    }

    // convert input to uppercase
    input = toupper(input);

    // print the corresponding number
    switch(input) {
    case 'A':
    case 'B':
    case 'C':
      result = 2;
      break;
    case 'D':
    case 'E':
    case 'F':
      result = 3;
      break;
    case 'G':
    case 'H':
    case 'I':
      result = 4;
      break;
    case 'J':
    case 'K':
    case 'L':
      result = 5;
      break;
    case 'M':
    case 'N':
    case 'O':
      result = 6;
      break;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
      result = 7;
      break;
    case 'T':
    case 'U':
    case 'V':
      result = 8;
      break;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
      result = 9;
      break;
    default:
      cout << "invalid input" << endl;
      result = 0;
      break;
    }
    if (result != 0)
      cout << "The corresponding digit is: " << result << endl;    
  } while (true);
  return 0;
}
