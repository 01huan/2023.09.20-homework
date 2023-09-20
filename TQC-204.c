#include<stdlib.h>
#include<stdio.h>
int main() {
    int a, b;
    char calc;
    scanf("%d %d %c", &a, &b, &calc);

    switch (calc) {
    case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a*b);
        break;
    default:
        printf("error\n");
    }
}