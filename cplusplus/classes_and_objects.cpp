#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

//---------------------------------------------------------------
class Student {
public:
  void input()
  {
    for (int i = 0; i < numOfExams; ++i)
      cin >> m_scores[i];
  }

  int calculateTotalScore()
  {
    int sum;
    for (int i = 0; i < numOfExams; ++i) {
      sum += m_scores[i];
    }
    return sum;
  }

private:
  static constexpr int numOfExams = 5;
  int m_scores[numOfExams];
};
//---------------------------------------------------------------

int main()
{
  int n; // number of students
  cin >> n;
  Student *s = new Student[n]; // an array of n students

  for (int i = 0; i < n; i++) {
    s[i].input();
  }

  // calculate kristen's score
  int kristen_score = s[0].calculateTotalScore();

  // determine how many students scored higher than kristen
  int count = 0;
  for (int i = 1; i < n; i++) {
    int total = s[i].calculateTotalScore();
    if (total > kristen_score) {
      count++;
    }
  }

  // print result
  cout << count;

  return 0;
}
