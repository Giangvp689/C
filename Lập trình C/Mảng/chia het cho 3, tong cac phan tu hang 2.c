#include<stdio.h>
int main()
{
	int a[100][100],i,n,m,j;
	int dem=0;
	int T=0.0;
	printf("Nhap so dong  n: "); scanf("%d",&n);
	printf("Nhap so cot   m: "); scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		 printf("a[%d][%d] ",i,j); scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++){
		 for(j=0;j<m;j++){
			if(a[i][j]%2==0 && a[i][j]%3==0) dem++;
		}
   }// in ma tran
   for(i=0;i<n;i++){
   	for(j=0;j<m;j++) printf("%5d ",a[i][j]); printf("\n");
   }printf("So phan tu chan chia het cho 3 la %d\n ",dem);
   
   for(j=0;j<m;j++){
		T+=a[1][j];
		}printf("Tong cac phan tu cua hang 2 la %d",T);
}
