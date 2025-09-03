#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
}; // ✅ semicolon added here

int main() {
    struct Student student = {1, "John", 85.5};

    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
