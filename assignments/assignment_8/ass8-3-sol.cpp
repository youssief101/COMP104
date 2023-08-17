#include <iostream>
using namespace std;

void insert(double (&arr)[], int &size, double element, int position) {
  if (position >= 0) {
    if (position >= size) {
      // insert the element in the end
      arr[size] = element;
      size ++;
    } else {
      int actualPosition = position - 1;
      for (int i = size; i >= actualPosition; i--) {
	arr[i + 1] = arr[i];
      }
      arr[actualPosition] = element;
      size ++;
    }
  }
}

int main() {
  const int size = 1000;
  double arr[size];

  double insertedElement = 0.0;
  int position = 0;
  int actualSize = 0;

  cout << "Enter the number of elements: ";
  cin >> actualSize;

  cout << "Enter the array elements: ";
  // get input from the user
  for (int i = 0; i < actualSize; i++)
    cin >> arr[i];

  // get the element to be inserted
  cout << "Element: ";
  cin >> insertedElement;

  // get the position of that element
  cout << "Position: ";
  cin >> position;

  insert(arr, actualSize, insertedElement, position);

  // print the array elements
  for (int i = 0; i < actualSize; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
