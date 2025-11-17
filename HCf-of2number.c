#include <stdio.h>

// function to find HCF (GCD)
int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = hcf(num1, num2);

    printf("HCF of %d and %d = %d\n", num1, num2, result);

    return 0;
}
