#include <iostream>

template <bool value> int reversed_binary_value()
{
  return value;
}

template <bool a, bool b, bool... d> int reversed_binary_value()
{
  return (reversed_binary_value<b, d...>() << 1) + a;
}
