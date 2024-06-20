#include <stdio.h>
int main() {
  int n, temp = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int original=n;

    // temp integer is stored in temp variable
    while (n != 0) {
        remainder = n % 10;
        temp = temp * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignal and temp are equal
    if (original == temp)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
