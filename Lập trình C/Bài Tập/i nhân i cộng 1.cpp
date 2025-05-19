#include <stdio.h>

int main() {
    int n,i;
	int T = 0;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
        T += i * (i + 1);
    }
    printf("Gia tri cua bieu thuc T la: %d\n", T);
}

