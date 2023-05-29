#include <stdio.h>
#include <stdlib.h>

void processUserInput(const char* userInput) {
    char command[100];
    snprintf(command, sizeof(command), "echo %s", userInput);
    system(command);
}

int main() {
    printf("Enter a string: ");
    char input[100];
    fgets(input, sizeof(input), stdin);

    processUserInput(input);

    return 0;
}
