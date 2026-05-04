
#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

void display(struct Student *s) {
    printf("%s %d", s->name, s->roll);
}

int main() {
    struct Student s = {"Aman", 10};
    display(&s);
    return 0;
}
