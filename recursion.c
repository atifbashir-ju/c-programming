#include <stdio.h>

void message(int count) {
    if(count == 0)
        return;     // base case (stopping condition)

    printf("Hello %d\n", count);
    message(count - 1);   // recursive call
}

int main() {
    message(5);
    return 0;
}
