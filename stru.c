#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student s1 = {1, 92.5, "Atif"};

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Name: %s\n", s1.name);

    return 0;
}
