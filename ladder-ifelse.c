#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("enter third number : ");
    scanf("%d", &c);
    if(a>b) {
        if(a>c) 
        printf("A is largest\n");
        else
        printf("C is largest\n");
    } else {
        if(b>c)
        printf("B is largest\n");
        else 
        printf("C is largest\n");
    }
}