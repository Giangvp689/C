#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int sqr=sqrt(n);
    printf("Nhap n: "); scanf("%d",&n);
    if(sqr*sqr==n) printf("So %d la so chinh phuong.",n);
    else printf("So %d khong la so chinh phuong.");
}
