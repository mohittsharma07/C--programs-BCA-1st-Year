// Print reverse number using while loop.

#include <stdio.h>
int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;         // last digit
        reverse = reverse * 10 + remainder; // add to reverse
        num = num / 10;               // remove last digit
    }

    printf("Reversed number is: %d\n", reverse);

    return 0;
}
