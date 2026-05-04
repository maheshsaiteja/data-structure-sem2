#include <stdio.h>

enum week {Mon, Tue, Wed};

int main() {
    enum week day = Wed;
    printf("%d", day);
    return 0;
}
