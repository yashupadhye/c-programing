#include <stdio.h>


void Multiplication(int num, int n) ;
  

int main() {
    int number, n;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    Multiplication(number, n);

    return 0;
}
void Multiplication(int num, int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}