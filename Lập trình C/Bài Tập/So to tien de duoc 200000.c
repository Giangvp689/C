#include <stdio.h>

int main() {
    int soTo10000, soTo20000, soTo50000;
    int tongTien = 200000;

    printf("Cac kha nang de co tong so tien la 200000 VND:\n");
    for(soTo50000 = 0; soTo50000 <= tongTien / 50000; soTo50000++) {
        for(soTo20000 = 0; soTo20000 <= (tongTien - soTo50000 * 50000) / 20000; soTo20000++) {
            for(soTo10000 = 0; soTo10000 <= (tongTien - soTo50000 * 50000 - soTo20000 * 20000) / 10000; soTo10000++) {
                if(soTo50000 * 50000 + soTo20000 * 20000 + soTo10000 * 10000 == tongTien) {
                    printf("%d to 50000 VND, %d to 20000 VND, %d to 10000 VND\n", soTo50000, soTo20000, soTo10000);
                }
            }
        }
    }

    return 0;
}

