#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    float T;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
       for ( i = 1; i <= n; i+=2) {
        
            T += sqrt(i);
        }
    printf("Gia tri cua bieu thuc T la: %.2f\n", T);
}

