#include <stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	float T=100.0;
	printf("Nhap vao so nguyen x:   x="); scanf("%d",&x);
	printf("Nhap vao so nguyen n:   n="); scanf("%d",&n);
	for(i=1;i<=n;i++){
		T+=pow(-1,(i+1))*(float)x/(10*i);
	}
	   printf("Ket qua cua bieu thuc T=100+x/10-x/20+...+x/(10*n) la: %5.2f", T);
}
	

