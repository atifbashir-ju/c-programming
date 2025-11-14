#include <stdio.h>

void message() {
    printf("Hello!\n");
    message();   // function calling itself
}

int main() {
    message();
    return 0;
}
