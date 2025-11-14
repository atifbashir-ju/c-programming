#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder;
    float sum;

    printf("Armstrong numbers from 1 to 100:\n");

    for (num = 1; num <= 100; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, 3);  // cube of each digit
            temp /= 10;
        }

        if ((int)sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
