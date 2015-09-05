#include<iostream>
//Totiente Euler - codigo tirado do blog do RicBit

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int totient(int x) {
  int sum = 0;
  for (int i = 1; i < x; i++) {
    if (gcd(x, i) == 1) sum++;
  }
  return sum;
}

int main() {
  std::cout << totient(1000) << std::endl;
}
