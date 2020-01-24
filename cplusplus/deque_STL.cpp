#include <iostream>
#include <deque>
using namespace std;

//---------------------------------------------------------------
void printKMax(int arr[], int n, int k)
{
  std::deque<int> myDeque;
  for (int i = 0; i < n; ++i) {

    // base case for first element
    if (myDeque.empty())
      myDeque.push_back(i);

    // remove elements outside the current window
    if (myDeque.front() <= (i - k))
      myDeque.pop_front();

    // move max element to the front
    while (!myDeque.empty() && arr[i] >= arr[myDeque.back()])
      myDeque.pop_back();

    myDeque.push_back(i);

    // print out only when the first window is completed
    if (i >= (k - 1))
      std::cout << arr[myDeque.front()] << " ";
  }
  std::cout << std::endl;
}
//---------------------------------------------------------------

int main()
{
  int t;
  cin >> t;
  while (t > 0) {
    int n, k;
    cin >> n >> k;
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
      cin >> arr[i];
    printKMax(arr, n, k);
    t--;
  }
  return 0;
}
