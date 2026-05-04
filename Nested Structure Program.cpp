#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
};

struct Company {
    char cname[20];
    struct Employee e;
};

int main() {
    struct Company c;

    strcpy(c.cname, "TEJA");
    c.e.id = 299;
    strcpy(c.e.name, "srinvas");

    printf("%s\n%d \n%s", c.cname, c.e.id, c.e.name);

    return 0;
}
