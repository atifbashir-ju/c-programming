#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];   // add each element to sum
    }

    float average = sum / n;

    printf("Average of all elements = %.2f\n", average);

    return 0;
}
