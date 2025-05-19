#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float T=100.0;
	printf("Nhap so nguyen n: "); scanf("%d",&n);
	for(i=2;i<=n;i++)
	{ 
	  T+=pow(-1,(i+1))*(10*i);
	}
	 	printf("Tong la:%5.2f",T);
}
