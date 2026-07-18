#include <iostream>
#include "./Vector.hpp"

// vector is an dynamic size arrays
// every-time add an number if the size is half the space, the size will be extend double




// const int MAX_ELEMENTS = 5;

int main() {
  MyVector<float> v;
  v.PushBack(30);
  v.PushBack(40);
  v.PushBack(50);
  v.PopBack();
  // float arr[MAX_ELEMENTS] = { 1, 2,3,4,5};
  // for (int i = 0; i < MAX_ELEMENTS; i++) {
  //   std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
  // }
  
  for (int i = 0; i < items.Size(); i++) {
    std::cout << "items[" << i << "] = " << v[i] << std::endl;
  }
  



  return 0;
}
