#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//---------------------------------------------------------------
class Person {
public:
  Person() : m_name(""), m_age(0)
  {
  }
  ~Person();

  virtual void getdata()
  {
    std::cin >> m_name >> m_age;
  }
  virtual void putdata() const
  {
    std::cout << m_name << " " << m_age << std::endl;
  }

protected:
  std::string m_name;
  int m_age;
};

class Professor : public Person {
public:
  static int m_staticId;
  Professor() : m_publications(0)
  {
    m_curId = ++m_staticId;
  }
  ~Professor();

  void getdata() override
  {
    std::cin >> m_name >> m_age >> m_publications;
  }

  void putdata() const override
  {
    std::cout << m_name << " " << m_age << " " << m_publications << " "
              << m_curId << std::endl;
  }

private:
  int m_publications;
  int m_curId;
};
int Professor::m_staticId = 0;

class Student : public Person {
public:
  static int m_staticId;
  Student() : m_marks{0}
  {
    m_curId = ++m_staticId;
  }
  ~Student();

  void getdata() override
  {
    std::cin >> m_name >> m_age;
    for (int i = 0; i < m_marks.size(); i++)
      cin >> m_marks[i];
  }

  void putdata() const override
  {
    int marksSum = 0;
    for (const auto &mark : m_marks)
      marksSum += mark;

    std::cout << m_name << " " << m_age << " " << marksSum << " " << m_curId
              << std::endl;
  }

private:
  std::array<int, 6> m_marks;
  int m_curId;
};
int Student::m_staticId = 0;

//---------------------------------------------------------------

int main()
{

  int n, val;
  cin >> n; // The number of objects that is going to be created.
  Person *per[n];

  for (int i = 0; i < n; i++) {

    cin >> val;
    if (val == 1) {
      // If val is 1 current object is of type Professor
      per[i] = new Professor;
    }
    else
      per[i] = new Student; // Else the current object is of type Student

    per[i]->getdata(); // Get the data from the user.
  }

  for (int i = 0; i < n; i++)
    per[i]->putdata(); // Print the required output for each object.

  return 0;
}
