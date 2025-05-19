#include<stdio.h>
int main()
{
	int a[100][100],T=0,dem=0;
	int i,n,m,j;
	printf("Nhap so nguyen n dong: "); scanf("%d",&n);
	printf("Nhap so nguyen m cot: "); scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){	
		 printf("a[%d][%d]",i,j);scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){	
		T+=a[i][1];
		dem++;
    } for(i=0;i<n;i++){
    	for(j=0;j<m;j++){ printf("%5d ",a[i][j]);
		}printf("\n");
	}
	printf("Tbc cac phan tu tren cot 2 la: %5.2f ",1.0*T/dem);
	int max=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){	
		 if(max<a[i][j]) max=a[i][j];
     }
 }   printf(" Phan tu lon nhat cua mang la: %d ",max);
}
