#include <iostream>
#include <string>
#include <sstream>

using std::cout;

class Student {
public:
  Student() : m_age(0), m_standard(0), m_first_name{}, m_last_name{}
  {
  }
  ~Student(){};

  void set_age(int age)
  {
    m_age = age;
  }

  void set_standard(int standard)
  {
    m_standard = standard;
  }

  void set_first_name(const std::string &first_name)
  {
    m_first_name = first_name;
  }

  void set_last_name(const std::string &last_name)
  {
    m_last_name = last_name;
  }

  int get_age() const
  {
    return m_age;
  }

  int get_standard() const
  {
    return m_standard;
  }

  std::string get_first_name() const
  {
    return m_first_name;
  }

  std::string get_last_name() const
  {
    return m_last_name;
  }

  std::string to_string()
  {
    std::stringstream ss;
    ss << m_age << ',' << m_first_name << ',' << m_last_name << ','
       << m_standard;
    return ss.str();
  }

private:
  std::string m_first_name;
  std::string m_last_name;
  int m_age;
  int m_standard;
};

int main()
{
  int age, standard;
  std::string first_name, last_name;

  std::cin >> age >> first_name >> last_name >> standard;

  Student st;
  st.set_age(age);
  st.set_standard(standard);
  st.set_first_name(first_name);
  st.set_last_name(last_name);

  cout << st.get_age() << "\n";
  cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
  cout << st.get_standard() << "\n";
  cout << "\n";
  cout << st.to_string();

  return 0;
}
