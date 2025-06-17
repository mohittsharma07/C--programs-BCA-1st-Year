// Print program for reverse counting number using while loop.

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse counting from %d to 1:\n", n);
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }
 return 0;
}

