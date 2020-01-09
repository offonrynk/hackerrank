#include <bits/stdc++.h>
#include <iostream>
#include <vector>

int hourglassSum(std::vector<std::vector<int>> arr)
{
  int max = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int sum = 0;
      sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] +
            arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
      if (i == 0 && j == 0) {
        max = sum;
      }

      if (sum > max) {
        max = sum;
      }
    }
  }

  return max;
}

int main()
{
  std::vector<std::vector<int>> arr(6);
  for (int i = 0; i < 6; i++) {
    arr[i].resize(6);

    for (int j = 0; j < 6; j++) {
      std::cin >> arr[i][j];
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  int result = hourglassSum(arr);
  std::cout << result << std::endl;

  return 0;
}
