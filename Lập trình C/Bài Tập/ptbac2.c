#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhap vao ba so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Phuong trinh co dang: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
     if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh tro thanh bac nhat voi nghiem duy nhat: x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x);
        } else {
            printf("Phuong trinh vo nghiem tren tap so thuc.\n");
        }
    }
 }

