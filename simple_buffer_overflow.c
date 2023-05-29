#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    char secret[] = "Secret Data";

    printf("Enter a string: ");
    gets(buffer);

    printf("Input: %s\n", buffer);
    printf("Secret: %s\n", secret);

    return 0;
}
