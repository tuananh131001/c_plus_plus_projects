#include <iostream>

// vector is an dynamic size arrays
// every-time add an number if the size is half the space, the size will be extend double




const int MAX_ELEMENTS = 5;

int main() {
  float arr[MAX_ELEMENTS] = { 1, 2,3,4,5};
  for (int i = 0; i <= MAX_ELEMENTS; i++) {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }

  return 0;
}
