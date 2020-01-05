#include <iostream>
#include <array>

int main()
{
  int num1, num2;
  std::cin >> num1 >> num2;

  const std::array<std::string, 9> stringOfVal = {
      "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  for (int i = num1; i <= num2; i++) {
    if (i <= 9)
      std::cout << stringOfVal[i - 1] << std::endl;
    else if (0 == i % 2)
      std::cout << "even\n";
    else
      std::cout << "odd\n";
  }

  return 0;
}
