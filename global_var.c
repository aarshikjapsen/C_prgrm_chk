#include <stdio.h>

int globalVariable = 10;

void updateGlobalVariable() {
    globalVariable = 20;
}

int main() {
    printf("Initial value of globalVariable: %d\n", globalVariable);

    updateGlobalVariable();

    printf("Updated value of globalVariable: %d\n", globalVariable);

    return 0;
}
