#include <stdio.h>

int main() {
    int *ptr = NULL;

    // Attempting to dereference a NULL pointer.
    printf("%d\n", *ptr); // This will cause a segmentation fault.
    
    return 0;
}
