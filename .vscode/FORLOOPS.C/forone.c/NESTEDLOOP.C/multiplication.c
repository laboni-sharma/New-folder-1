#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 3; i++) {
        // Inner loop for columns
        for (j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}