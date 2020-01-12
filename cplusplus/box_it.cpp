#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//---------------------------------------------------------------
/*!
 * Box class added for task alongside overloaded operator
 */
class Box {
public:
  Box()
  {
  }

  Box(int length, int breadth, int height)
  {
    m_length = length;
    m_breadth = breadth;
    m_height = height;
  }

  Box(const Box &B)
  {
    m_length = B.m_length;
    m_breadth = B.m_breadth;
    m_height = B.m_height;
  }

  int getLength() const
  {
    return m_length;
  }
  int getBreadth() const
  {
    return m_breadth;
  }
  int getHeight() const
  {
    return m_height;
  }
  long long CalculateVolume()
  {
    return (long long)m_length * m_breadth * m_height;
  }

  bool operator<(const Box &B)
  {
    bool retBool = false;

    if (m_length < B.getLength()) {
      retBool = true;
    }
    else if (m_breadth < B.getBreadth() && m_length == B.getLength()) {
      retBool = true;
    }
    else if (m_height < B.getHeight() && m_breadth == B.getBreadth() &&
             m_length == B.getLength()) {
      retBool = true;
    }
    return retBool;
  }

private:
  int m_length = 0;
  int m_breadth = 0;
  int m_height = 0;
};

std::ostream &operator<<(std::ostream &output, const Box &B)
{
  output << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return output;
}
//---------------------------------------------------------------
//!< end of added solution

void check2()
{
  int n;
  cin >> n;
  Box temp;
  for (int i = 0; i < n; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      cout << temp << endl;
    }
    if (type == 2) {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      temp = NewBox;
      cout << temp << endl;
    }
    if (type == 3) {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      if (NewBox < temp) {
        cout << "Lesser\n";
      }
      else {
        cout << "Greater\n";
      }
    }
    if (type == 4) {
      cout << temp.CalculateVolume() << endl;
    }
    if (type == 5) {
      Box NewBox(temp);
      cout << NewBox << endl;
    }
  }
}

int main()
{
  check2();
}
