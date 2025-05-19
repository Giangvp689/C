#include <stdio.h>
int main()
{
	int a,b;
	printf("Nhap so nguyen a: "); scanf("%d",&a);
	printf("Nhap so nguyen b: "); scanf("%d",&b);
	while (a!=b)
	 { if(a>b) a=a-b;
	   if(a<b) b=b-a;
	 } 
	 printf("Uoc chung lon nhat cua hai so a va b la: %d",a);
}

