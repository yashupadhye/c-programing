#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int i, num = 1;
  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      num = 0;
      break;
    }
  }

  if (num) {
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }

  return 0;
}
