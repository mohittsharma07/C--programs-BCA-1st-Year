// Print program for factorial in using loop.

#include <stdio.h>

int main() {
    int fact = 1;
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0; 
}
