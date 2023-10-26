#include <iostream>
using namespace std;
int main() {
  double A;
  cout << "Enter integer number A(>1): ";
  cin >> A;

  int N = 1;
  double sum = 1.0;

  while (sum <= A) {
    N++;
    sum += 1.0 / N;
  }

  cout << "The smallest integer N for which the sum 1 + 1/2 + ... + 1/N > A: "
       << N << endl;
  cout << "Sum of integers: " << sum << endl;

  return 0;
}
