#include <stdio.h>

int main() {
    int n,i;
	int sum = 0;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i += 2) {
        sum =sum+i;
    }
    printf("Tong cac so chan tu 1 den %d la: %d\n", n, sum);
  }

