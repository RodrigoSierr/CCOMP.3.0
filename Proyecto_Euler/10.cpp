/*La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17. 
Encuentra la suma de todos los números primos por debajo de dos millones.*/

#include <iostream>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n = 2000000;
  long long sum = 0;

  for (int i = 2; i < n; i++) {
    if (is_prime(i)) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}
