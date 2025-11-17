#include <stdio.h>

// recursive function
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("Factorial of %d = %d\n", n, result);

    return 0;
}
