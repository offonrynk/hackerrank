#include <vector>
#include <iostream>

void print(std::vector<int> v)
{
  std::cout << v.size() << '\n';
  for (const auto &elements : v) {
    std::cout << elements << ' ';
  }
  std::cout << std::endl;
}

int main()
{
  size_t size;
  std::vector<int> vect;

  int i = 0, input = 0;
  std::cin >> size;
  while (i++ != size) {
    std::cin >> input;
    vect.push_back(input);
  }

  int posToErase = 0;
  int startPos = 0; // start of range to erase
  int endPos = 0;   // end of range to erase
  std::cin >> posToErase;
  std::cin >> startPos >> endPos;

  vect.erase(vect.begin() + (posToErase - 1));
  vect.erase(vect.begin() + (startPos - 1), vect.begin() + (endPos - 1));

  print(vect);

  return 0;
}
