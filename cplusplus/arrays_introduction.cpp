#include <vector>
#include <iostream>

int main()
{
  unsigned int arrSize; // cause array size cannot be negative
  std::cin >> arrSize;
  int arr[arrSize];

  for (unsigned int i = 0; i < arrSize; ++i) {
    std::cin >> arr[i];
  }

  for (int i = arrSize - 1; i >= 0; --i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
