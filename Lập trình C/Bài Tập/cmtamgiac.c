#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    printf("Nhap vao ba so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
       if (a + b > c && a + c > b && b + c > a) {
        printf("Ba so a, b, c tao thanh mot tam giac.\n");
          if (a == b && b == c)
            printf("Day la tam giac deu.\n");
        else if (a == b || a == c || b == c)
            printf("Day la tam giac can.\n");
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Day la tam giac vuong.\n");
        else
            printf("Day la tam giac thuong.\n");
    } else {
        printf("Ba so a, b, c khong tao thanh mot tam giac.\n");
    }
 }

