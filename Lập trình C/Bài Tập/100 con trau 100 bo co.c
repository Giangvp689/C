#include <stdio.h>

int main() {
    int x, y, z;
    // Duyet qua tat ca cac gia tri co the cua x ( so trau dung)
    for (x = 0; x <= 100; x++) {
        // Duyet qua tat ca cac gia tri cua y (so trau nam)
        for (y = 0; y <= 100; y++) {
            // Tim so trau gia (z)
            z = 100 - x - y;
            // Kiem tra dieu kien so luong va bo co tieu thu
            if (5 * x + 3 * y + z / 3 == 100 && z % 3 == 0) {
                printf("Trau dung: %d, Trau nam: %d, Trau gia: %d\n", x, y, z);
            }
        }
    }
    return 0;
}

