#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
  size_t size;
  std::vector<int> vect;

  std::cin >> size;
  for (int i = 0; i < size; i++) {
    int input;
    std::cin >> input;
    vect.push_back(input);
  }

  std::sort(vect.begin(), vect.end());

  for (const auto &elements : vect) {
    std::cout << elements << ' ';
  }
  std::cout << std::endl;

  return 0;
}
