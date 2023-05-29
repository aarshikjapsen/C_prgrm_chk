#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));  // Dynamically allocate memory

    *ptr = 10;  // Store a value in the allocated memory

    free(ptr);  // Deallocate the memory

    // The pointer 'ptr' is now a dangling pointer

    // Attempting to dereference the dangling pointer can lead to undefined behavior
    printf("Value: %d\n", *ptr);  // Potential error: dereferencing a dangling pointer

    return 0;
}
