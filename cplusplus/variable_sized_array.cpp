#include <vector>
#include <iostream>
#include <algorithm>

using std::cin;

int main()
{
  int n, q;
  cin >> n >> q;

  std::vector<std::vector<int>> vect(n);
  for (int i = 0; i < n; ++i) {
    int k;
    cin >> k;
    vect[i].resize(k);

    for (int j = 0; j < k; ++j) {
      cin >> vect[i][j];
    }
  }

  for (int l = 0; l < q; ++l) {
    int i2, j2;
    cin >> i2 >> j2;
    std::cout << vect[i2][j2] << std::endl;
  }

  return 0;
}
