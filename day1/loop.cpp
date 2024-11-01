#include <iostream>

int main() {
  for (int i = 0; i < 5; ++i) {
    std::cout << "Hello, World! " << std::endl;
  }

  int num_arr[] = {1, 2, 3, 4, 5};
  for (int n: num_arr) {
    std::cout << n << " ";
  }

  int i = 1;
  while (i <= 5) {
    std::cout << i << " ";
    ++i;
  }

  return 0;
}
