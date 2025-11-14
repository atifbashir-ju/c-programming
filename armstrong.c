#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, remainder;
    float sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Calculate sum of digits^digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}
