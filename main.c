#include <stdio.h>
int main() {
    int num1, num2;
    char homework[] = "Hello world!";

    printf("Enter her age: ");
    scanf("%d", &num1);

    printf("Enter his age: ");
    scanf("%d", &num2);

    printf("Sum of ages: %d\n", num1 + num2);
    printf("The homework: %s\n", homework);

    return 0;
}