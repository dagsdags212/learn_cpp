#include <iostream>
using namespace std;

int main() {

  double numbers[] = {6, 12, 3, 5, 35, 27};

  double sum = 0;
  int count = 0;
  double average;

  cout << "The numbers are: ";

  for (const double &n : numbers) {
    cout << n << " "; 
    sum += n;
    ++count;
  }

  cout << "\nTheir Sum = " << sum << endl;

  average = sum / count;
  cout << "Their Average = " << average << endl;

  return 0;
}
