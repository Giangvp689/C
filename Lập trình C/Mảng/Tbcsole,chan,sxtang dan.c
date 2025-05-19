#include<stdio.h>
int main()
{
	int a[100][100], i,n,m,j,T=0;
	printf("Nhap so dong n: "); scanf("%d",&n);
	printf("\nNhap so cot m: "); scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]",i,j); scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%5d",a[i][j]);
		}printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]%10==6) T+=a[i][j];
		}
	}printf("\nTong cac phan tu co tan cung bang 6 la: %d ",T);
	int max;
	max=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max<a[i][j]) max=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max==a[i][j]) max=a[i][j];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d",max);
	
}
