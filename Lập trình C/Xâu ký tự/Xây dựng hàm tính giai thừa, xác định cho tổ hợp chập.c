#include<stdio.h>
long giaithua(int x)
{
	int i; long t=1;
	for(i=1;i<=x;i++){
		t*=i;
		return t;
	}
}
main()
{
	int n,k;
	printf("Nhap n: "); scanf("%d",&n);
	do {
		printf("Nhap k (k<n) :");scanf("%d",&k);
	}
	while(k>=n);
	printf("Cac cach cua to hop =%d\n ",giaithua(n)/(giaithua(k)*giaithua(n-k)));
}
