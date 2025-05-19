#include <stdio.h>
#include <string.h>
#include <conio.h>
struct sinhvien {
    char Masv[10];
    char Hoten[50];
    float Diemtoan;
    float Diemly;
    float Diemhoa;
};
float td(struct sinhvien svt) {
    return svt.Diemtoan + svt.Diemly + svt.Diemhoa;
}
int main() {
    int n,i;
    printf("So sinh vien: ");
    scanf("%d", &n);
    struct sinhvien sv[100];
    for ( i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ma sv: ");fflush(stdin);gets(sv[i].Masv);
        printf("Ho ten: ");fflush(stdin);gets(sv[i].Hoten);
        printf("Diem toan: ");scanf("%f", &sv[i].Diemtoan);
        printf("Diem ly: ");scanf("%f", &sv[i].Diemly);
        printf("Diem hoa: ");scanf("%f", &sv[i].Diemhoa);
    }
    printf("\nTong diem sinh vien la:\n");
    for( i = 0; i < n; i++){
    	printf("Ma sv: %s\n",sv[i].Masv);
    	printf("Ho ten: %s\n",sv[i].Hoten);
    	printf("Tong diem: %7.2f\n",td(sv[i]));
	}
    struct sinhvien svMax = sv[0];
    for ( i = 1; i < n; i++) {
        if (td(sv[i]) > td(svMax)) {
            svMax = sv[i];
        }
    }
        if (svMax.Diemtoan >= 5 && svMax.Diemly >= 5 && svMax.Diemhoa >= 5) {
        printf("Sinh vien diem cao nhat va khong mon nao duoi 5 la:\n");
        printf("Ma sv: %s\n", svMax.Masv);
        printf("Ho ten: %s\n", svMax.Hoten);
        printf("Tong diem: %.2f\n", td(svMax));
    } else {
        printf("Khong co sv. \n");
    }}

    

