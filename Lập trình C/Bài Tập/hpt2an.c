#include <stdio.h>
int main() {
    float a1, a2, c, a3, a4, d;
    printf("Nhap he so cho phuong trinh thu nhat a1x + a2y = c: ");
    scanf("%f%f%f", &a1,&a2,&c);
    printf("Nhap he so cho phuong trinh thu hai (a3x + a4y = d): ");
    scanf("%f%f%f", &a3, &a4, &d);
    float D = a1*a4 - a3*a2;
    float Dx = c*a4 - d*a2;
    float Dy = a1*d - a3*c;
     if (D != 0) {
        printf("He phuong trinh co nghiem duy nhat (x, y) = (%.2f, %.2f)\n", Dx/D, Dy/D);
    } else {
        if (Dx != 0 || Dy != 0) {
            printf("He phuong trinh vo nghiem.\n");
        } else {
            printf("He phuong trinh co vo so nghiem.\n");
        }
    }
}

