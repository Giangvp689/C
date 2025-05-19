#include <stdio.h>
int doixung(char xkt[], int i) {
    int dau = 0;
    int cuoi = i - 1;
    while (dau < cuoi) {
        if (xkt[dau] != xkt[cuoi]) {
            return 0; 
        }
        dau++;
        cuoi--;
    }
    return 1; 
}
int main() {
	int dem=0;
    char xkt[100];
    printf("Nhap xau: ");
    scanf("%s", xkt);  
    int i = 0;
    while (xkt[i] != '\0') {
        i++;
    }
    if (doixung(xkt, i)) {
        printf("Xau '%s' la doi xung.\n", xkt);
    } else {
        printf("Xau '%s' khong phai la doi xung.\n", xkt);
    }
    return 0;
        while (xkt[i] != '\0') {
     	if(xkt[i]=='x') dem++;
	 }
    printf("Co %d ky tu x trong xau",dem);
}


