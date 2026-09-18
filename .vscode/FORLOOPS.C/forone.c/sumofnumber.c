#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    // Calculates the sum of numbers from 1 to 5
    for (i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    printf("Sum is %d\n", sum);

    return 0;
}