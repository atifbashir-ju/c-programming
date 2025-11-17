#include <stdio.h>

// function to check prime
int isPrime(int n) {
    if(n <= 1)
        return 0;

    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0)
            return 0;   // not prime
    }

    return 1;   // prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
}