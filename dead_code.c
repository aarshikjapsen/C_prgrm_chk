#include <stdio.h>

int main() {
    int x = 5;

    if (x > 10) {
        printf("x is greater than 10.\n");
    } else {
        printf("x is not greater than 10.\n");
    }

    // Dead code starts here
    int y = 10;
    int z = x + y;
    printf("The sum of x and y is: %d\n", z);
    // Dead code ends here

    return 0;
}
