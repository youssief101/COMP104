#include <iostream>
using namespace std;

int main() {
  const int size = 10;
  int arr[size];
  int tracker[4] = {0, 0, 0, 0};
  // get the results
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    if (!(arr[i] >= 0 && arr[i] <= 100)) {
      cerr << "Invlid Input" << endl;
      return -1;
    }
  }

  // track the students results
  for (int i = 0; i < size; i++) {
    if (arr[i] >= 0 && arr[i] <= 24)
      tracker[0]++;
    else if (arr[i] >= 25 && arr[i] <= 49)
      tracker[1]++;
    else if (arr[i] >= 50 && arr[i] <= 74)
      tracker[2]++;
    else if (arr[i] >= 75 && arr[i] <= 100)
      tracker[3]++;
  }
  cout << "Number of students in range 0 - 24: " << tracker[0] << endl
       << "Number of students in range 25 - 49: " << tracker[1] << endl
       << "Number of students in range 50 - 74: " << tracker[2] << endl
       << "Number of students in range 75 - 100: " << tracker[3] << endl;
  return 0;
}
