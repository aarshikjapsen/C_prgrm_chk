#include <stdio.h>
#include <stdlib.h>

int main() {
    int* buffer;
    int size = -1;  // Invalid size

    buffer = (int*)malloc(size * sizeof(int));  // Attempt to allocate memory

    if (buffer == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    // Use the allocated buffer...

    free(buffer);  // Deallocate the memory

    return 0;
}
