#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isBalanced(char* exp) {
    for(int i = 0; i < strlen(exp); i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        else {
            if(top == -1) return 0;
            char c = pop();
            if((exp[i] == ')' && c != '(') ||
               (exp[i] == '}' && c != '{') ||
               (exp[i] == ']' && c != '['))
                return 0;
        }
    }
    return top == -1;
}

int main() {
    char exp[] = "{[()]}";
    if(isBalanced(exp))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
    return 0;
}
