#include <iostream>
#include <vector>

std::vector<int> dynamicArray(int n, std::vector<std::vector<int>> queries)
{
  std::vector<int> seqList;
  std::vector<std::vector<int>> list(n);
  int lastAnswer = 0;

  for (int i = 0; i < queries.size(); ++i) {
    int x = queries[i][1];
    int seq = ((x ^ lastAnswer) % n);

    if (queries[i][0] == 1) {
      list[seq].push_back(queries[i][2]);
    }
    else {
      int size = list[seq].size();
      lastAnswer = list[seq][queries[i][2] % size];
      seqList.push_back(lastAnswer);
    }
  }
  return seqList;
}
