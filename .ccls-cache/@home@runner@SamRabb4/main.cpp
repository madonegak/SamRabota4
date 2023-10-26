#include <iostream>

int main() {
  double A;
  std::cout << "Enter integer number A(>1): ";
  std::cin >> A;

  int N = 1;
  double sum = 1.0;

  while (sum <= A) {
    N++;
    sum += 1.0 / N;
  }

  std::cout
      << "The smallest integer N for which the sum 1 + 1/2 + ... + 1/N > A: "
      << N << std::endl;
  std::cout << "Sum of integers: " << sum << std::endl;

  return 0;
}
