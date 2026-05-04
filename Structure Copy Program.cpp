#include <stdio.h>

struct Student {
    int id;
    char grade;
};

int main() {
    struct Student s1 = {299, 'A'};
    struct Student s2;

    s2 = s1;

    printf("ID: %d\n", s2.id);
    printf("Grade: %c\n", s2.grade);

    return 0;
}
