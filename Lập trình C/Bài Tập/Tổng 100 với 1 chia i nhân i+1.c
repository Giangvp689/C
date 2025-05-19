#include <stdio.h>

int main() {
    int n,i;
    float T = 100.0; 
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        T += 1.0 / (i * (i + 1));
    }
    printf("Gia tri cua bieu thuc T la: %.2f\n", T);
}

