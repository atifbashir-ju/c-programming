#include<stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;
    printf("enter the number of term : ");
    scanf("%d", &n);
    printf("fibaonacci series : ");
    for(i = 0; i<n; i++) {
        if(i<=1)
        next = i;
        else{
            next = first + second;
            second = next;
        }
        printf("%d", next);

    }
    return 0;
}


