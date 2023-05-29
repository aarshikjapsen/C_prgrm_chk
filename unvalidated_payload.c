#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];

    printf("Enter a string: ");
    gets(input);

    printf("You entered: %s\n", input);

    return 0;
}
