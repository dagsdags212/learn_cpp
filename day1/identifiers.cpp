#include <iostream>
using namespace std;

int main() {
  // initialize two identifiers
  int money;
  double accountBalance;

  // declare a variable named `age` of the `int` data type and
  // assign it a value of 14
  int age = 14;
  age = 17; // mutable by default
  cout << "Age: " << age;

  // declare an immutable variable using the const keyword
  const int LIGHT_SPEED = 299792458;
  cout << "Speed of light: " << LIGHT_SPEED;

  return 0;
}
