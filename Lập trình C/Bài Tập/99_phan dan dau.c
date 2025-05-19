#include <stdio.h>
#include<math.h>
int main() {
    int n,i;
	float T = 99.0;
	printf("Nhap vao so nguyen n:"); scanf("%d",&n);
	for(i=1;i<=n;i++){
		T+=pow(-1,i)*1/(10*i);
	}
	 
	printf("Ket qua bieu thuc T=99-1/10+1/20+...-1/10*n la : %f",T);
}
