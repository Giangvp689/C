#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,j,dem=0,T=0;
	printf("Nhap so dong n: ");scanf("%d",&n);
	printf("Nhap so cot m: "); scanf("%d",&m);
	int a[100][100];
	for(i=0;i<n;i++)
	 for(j=0;j<m;j++)
	 { 
	 	printf(" a[%d][%d]: ",i,j);scanf("%d",&a[i][j]);
	 }
	 //Tong cac so co tan cung bang 6 la chia cho 10 con du 6
	for(i=0;i<n;i++)
	 for(j=0;j<m;j++)
	 {
	 	if(a[i][j] %10==6)
	 	 T+=a[i][j];
	 }
	 printf("Tong cac so co tan cung bang 6 la: %d ",T);
	 //Tim so lon nhat trong mang
	int max=a[0][0];
	 for(i=0;i<n;i++)
	  for(j=0;j<m;j++)
	  { if(max<a[i][j]) max=a[i][j];
	  }
	  printf("\nPhan tu lon nhat trong mang la: %d",max);
}
