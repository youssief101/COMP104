#include <iostream>
#include <stdexcept>
using namespace std;

void deleteElement(double (&arr)[], int &size, int position) {
  if (!(position >= 0 && position <= size)) {
    throw runtime_error("Incorrect input");
  } else {
    int actualPosition = position - 1;
    for (int i = actualPosition; i < size; i++)
      arr[i] = arr[i + 1];
    size --;
  }
}

int main() {
  const int size = 1000;
  double arr[size];
  int actualSize = 0;

  // get actual size from the user
  cout << "size of array: ";
  cin >> actualSize;

  // get array elements from the user
  cout << "array elements: ";
  for (int i = 0; i < actualSize; i++)
    cin >> arr[i];

  int position = 0;

  // get the position of the deleted element
  cout << "position of the deleted element: ";
  cin >> position;
  try {
    deleteElement(arr, actualSize, position);
  } catch (const exception &e) {
    cerr << "Error: " << e.what() << endl;
  }
  

  // print the array elements
  for (int i = 0; i < actualSize; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
