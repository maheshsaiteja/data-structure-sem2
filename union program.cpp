#include <stdio.h>

union Data {
    int x;
    char y;
};

int main() {
    union Data d;

    d.x = 10;
    printf("x = %d\n", d.x);

    d.y = 'A';
    printf("y = %c\n", d.y);

    return 0;
}
