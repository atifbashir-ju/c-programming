#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[50];
    int i, dotCount = 0;

    printf("Enter a number: ");
    scanf("%s", input);

    // Check each character
    for (i = 0; i < strlen(input); i++) {
        if (input[i] == '.') {
            dotCount++;
        } else if (!isdigit(input[i]) && input[i] != '-' && input[i] != '+') {
            printf("Invalid number");
            return 0;
        }
    }

    if (dotCount == 1) {
        printf("It is a float number");
    } else if (dotCount == 0) {
        printf("It is an integer");
        return 0;
    }
