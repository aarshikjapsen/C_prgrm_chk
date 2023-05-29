#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};

    printf("%d\n", arr[0]);  // Valid: accessing the first element
    printf("%d\n", arr[1]);  // Valid: accessing the second element
    printf("%d\n", arr[2]);  // Valid: accessing the third element

    printf("%d\n", arr[3]);  // Out-of-bounds: accessing beyond the valid index range

    return 0;
}
