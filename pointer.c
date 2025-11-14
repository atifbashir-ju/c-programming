#include <stdio.h>

int main() {
    int a = 10;      // normal variable
    int *p;          // pointer variable (int type ka)
    p = &a;          // &a means address of a

    printf("Value of a = %d\n", a);
    printf("Pointer p stores = %p\n", p);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
