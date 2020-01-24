#include <iostream>
#include <set>

int main()
{
  std::set<int> integerSet;

  int input = 0;
  std::cin >> input;
  for (int i = 0; i < input; ++i) {
    int type = 0, integerNum = 0;
    std::cin >> type >> integerNum;
    switch (type) {
      case 1:
        integerSet.insert(integerNum);
        break;
      case 2:
        integerSet.erase(integerNum);
        break;
      case 3:
        std::cout << (integerSet.end() == integerSet.find(integerNum) ? "No"
                                                                      : "Yes")
                  << std::endl;
        break;

      default:
        break;
    }
  }

  return 0;
}
