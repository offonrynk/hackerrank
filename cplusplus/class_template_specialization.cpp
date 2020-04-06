#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template <>
struct Traits<Fruit>{
    static std::string name(const int index) {
        std::string fruit;
        switch(index) {
            case 0:
               fruit =  "apple";
               break;
            case 1:
                fruit = "orange";
                break;
            case 2:
                fruit = "pear";
                break;
            default:
                fruit = "unknown";
                break;
        }
       return fruit;
    }
};
template <>
struct Traits<Color>{
    static std::string name(const int index) {
        std::string color;
        switch(index) {
            case 0:
               color =  "red";
               break;
            case 1:
                color = "green";
                break;
            case 2:
                color = "orange";
                break;
            default:
                color = "unknown";
                break;
        }
       return color;
    }
};