#include <stdio.h>
int main() {
    float a, b;
    printf("Nhap vao hai so a va b: ");
    scanf("%f%f", &a, &b);
    printf("Phuong trinh co dang: %5.1fx + %5.1f = 0\n", a, b);
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
         if(b==0)
		  printf ("Pt co nghiem x= %5.2f",-x);
         else
		  printf("Phuong trinh co nghiem duy nhat: x = %5.2f\n", x);
    }
}


