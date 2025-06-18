// Check if a string is palindrome in c

#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    int i, len;

    printf("Enter a string: ");
    gets(str); // Use fgets(str, sizeof(str), stdin); for safety in real projects

    len = strlen(str);

    // Reverse the string
    for (i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    // Compare original and reversed
    if (strcmp(str, reversed) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
