#include <stdio.h>

int main() 
{
	int i,n,x;
	float T=100.0;
	printf("Nhap vao so nguyen x:"); scanf("%d",&x);
	printf("Nhap vao so nguyen n:");scanf("%d",&n);
	for(i=1;i<=n;i++)
	  T+=(float)x / i;
	printf("Ket qua cua phep tinh T=100+x/2+x/3+...+x/n la: %5.2f",T);
	
}
    
