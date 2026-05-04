
#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

struct Student getData() {
    struct Student s = {"teja", 18};
    return s;
}

int main() {
    struct Student s = getData();
    printf("%s %d", s.name, s.age);
    return 0;
}
