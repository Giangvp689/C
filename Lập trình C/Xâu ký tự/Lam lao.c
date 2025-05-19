#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int x = 5;
    int y = 10;
    printf("Truoc khi swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi swap: x = %d, y = %d\n", x, y);
    return 0;
}

