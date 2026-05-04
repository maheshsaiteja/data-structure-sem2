#include <stdio.h>

struct Car {
    char name[20];
    int price;
};

void display(struct Car c) {
    printf("%s %d", c.name, c.price);
}

int main() {
    struct Car c = {"Tata", 1000};
    display(c);
    return 0;
}
