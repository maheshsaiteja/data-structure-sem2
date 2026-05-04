#include <stdio.h>

union A {
    int x;
    char y;
};

int main() {
    printf("Size: %lu", sizeof(union A));
    return 0;
}
