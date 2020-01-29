#include <iostream>

#define concatenate add
template <class T> class AddElements {
public:
  AddElements(const T args) : element{args}
  {
  }

  T add(const T args)
  {
    return (element + args);
  }

private:
  T element;
};

int main()
{
