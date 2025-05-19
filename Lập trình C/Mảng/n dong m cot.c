#include <stdio.h>

int main() {
    int i, j, k;

    // Iterate through all possible 3-digit numbers
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                // Check if the sum of the digits is 9
                if (i + j + k == 9) {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
