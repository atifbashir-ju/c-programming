#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;//use long long to handle large numbers
    printf("enter a number: "); //for takin input by user
    scanf("%d", &n);
    if(n<0) {
        printf("factorial of negative numbers doesn't exist."); //factorial should only of positive numbers

    } else {
        for(i = 1; i<=n; i++) {// loop will run from 1 to n
            fact = fact *i;// will multiply i in step
        }
        printf("factorial of %d = %llu", n, fact);// %illu used for unsigned long long 

    }
    return 0;
}