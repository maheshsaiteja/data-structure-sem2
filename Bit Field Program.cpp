#include <stdio.h>

struct date {
    int d : 5;
    int m : 4;
    int y;
};

int main() {
    struct date dt = {5, 03, 2026};

    printf("%d/%d/%d", dt.d, dt.m, dt.y);
    return 0;
}
