#include <stdio.h>

void printReverse(char a[], int i) {
    if (i < 0)
        return;
    
    printf("%c", a[i]);
    printReverse(a, i - 1);   
}

int main() {
    char a[] = "MyNameIsAyan";
    printReverse(a, 12);   
    return 0;
}
