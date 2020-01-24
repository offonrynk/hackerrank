#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
  std::vector<int> vecOfNums;

  int numOfInts = 0;
  std::cin >> numOfInts;
  for (int i = 0; i < numOfInts; ++i) {
    int num = 0;
    std::cin >> num;
    vecOfNums.push_back(num);
  }

  int numOfQueries = 0;
  std::cin >> numOfQueries;
  for (int i = 0; i < numOfQueries; ++i) {
    int query = 0;
    std::cin >> query;

    auto lower = std::lower_bound(vecOfNums.begin(), vecOfNums.end(), query);

    if (vecOfNums[lower - vecOfNums.begin()] == query) // query is present
      std::cout << "Yes " << (lower - vecOfNums.begin() + 1) << std::endl;
    else
      std::cout << "No " << (lower - vecOfNums.begin() + 1) << std::endl;
  }

  return 0;
}
