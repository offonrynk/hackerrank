#include <iostream>

//---------------------------------------------------------------
class Rectangle {
public:
  Rectangle() = default;

  ~Rectangle()
  {
  }

  virtual void display() const
  {
    std::cout << m_width << ' ' << m_height << std::endl;
  }

protected:
  int m_width = 0;
  int m_height = 0;
};

class RectangleArea : public Rectangle {
public:
  RectangleArea() = default;
  ~RectangleArea()
  {
  }

  void read_input()
  {
    // inherited protected member variables from base clase
    // not a good design pattern for real applications as a class should ideally
    // have control of its own resources
    std::cin >> m_width >> m_height;
  }
  void display() const override
  {
    std::cout << m_width * m_height << std::endl;
  }
};
//---------------------------------------------------------------

int main()
{
  /*
   * Declare a RectangleArea object
   */
  RectangleArea r_area;

  /*
   * Read the width and height
   */
  r_area.read_input();

  /*
   * Print the width and height
   */
  r_area.Rectangle::display();

  /*
   * Print the area
   */
  r_area.display();

  return 0;
}
