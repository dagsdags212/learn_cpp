#include <iostream>
using namespace std;

class Rectangle {
private:
  int breadth, length;

public:
  Rectangle(int length, int breadth) {
    this->breadth = breadth;
    this->length = length;
  }

  int get_area() const {
    return length * breadth;
  }

  int get_perimeter() {
    return 2 * (length + breadth);
  }
};

int main() {

  const Rectangle RECT = Rectangle(7, 6);

  cout << "Area: " << RECT.get_area() << endl;

  return 0;
}
