#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  int i, n;
  bool is_prime = true;

  cout << "Digite um numero: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " É um numero primo";
  else
    cout << n << " Não é um numero primo";

  return 0;
}
