#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<int> &nums) {
  int total = 0;

  for (auto num: nums) {
    total += num;
  }

  return total;
}

constexpr int fib(int n) {
  return n <= 1 ? n: fib(n - 1) + fib(n - 2);
}

int main() {

  // initialize a const PI
  const double PI = 3.14;

  int radius = 4;

  // compute area
  double area = PI * radius * radius;

  // read-only reference to PI
  const double &PI_REF = PI;

  cout << "Area of circle with radius " << radius << " is: " << area << endl;
  cout << "PI_REF: " << PI_REF << endl;

  int num = 13;
  const int &NUM_REF = num;
  cout << "Current num: " << NUM_REF << endl;
  num = num + 1;
  cout << "Updated num: " << NUM_REF << endl;

  // create a vector of ints
  vector<int> nums = {1, 2, 3, 4, 5};
  cout << "Sum: " << sum(nums) << endl;

  const int TOTAL_MONTHS = 12;
  const int *MONTHS_PTR = &TOTAL_MONTHS;
  cout << "TOTAL_MONTHS: " << TOTAL_MONTHS << endl;
  cout << "*MONTHS_PTR: " << *MONTHS_PTR << endl;

  // move pointer
  const int HALF_MONTHS = 6;
  MONTHS_PTR = &HALF_MONTHS;
  cout << "*MONTHS_PTR: " << *MONTHS_PTR << endl;

  constexpr int fibonacci_five = fib(5);
  constexpr int fibonacci_ten = fib(10);

  cout << "fib(5) : " << fibonacci_five << endl;
  cout << "fib(10) : " << fibonacci_ten << endl;

  return 0;
}
