#include<stdio.h>
int main()
{
	int a[100],i,k,dem=0,T=0,min;
	printf("Nhap vao so nguyen k: ");scanf("%d",&k);
	for(i=0;i<k;i++)
	 {
	 	printf("a[%d]: ",i); scanf("%d",&a[i]);
	 }
	 for(i=0;i<k;i++)
	 if(a[i]%3==0 && a[i]>0){
	 T+=a[i];
	 dem++;
	 }
	 
	 printf("TBC cac so duong va chia het cho 3 la: %5.2f",1.0*T/dem);
	 min=a[0];
	 for(i=0;i<k;i++)
	 { if(min>a[i]) min=a[i];
	 }
	 printf("\nPhan tu nho nhat la %d",min);
}
