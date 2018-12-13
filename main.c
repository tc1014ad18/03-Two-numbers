#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Welcome! Welcome! Welcome!\n");
    printf("Give me two integer numbers and I will give you their sum, subtraction, product and division.\n\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    printf("\nSee you around!\n");
    return 0;
}