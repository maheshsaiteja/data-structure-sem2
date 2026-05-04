#include <stdio.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

int main() {
    struct node n1, n2;

    n1.data = 10;
    n2.data = 20;

    n1.next = &n2;
    n2.prev = &n1;

    printf("%d %d", n1.data, n1.next->data);

    return 0;
}
