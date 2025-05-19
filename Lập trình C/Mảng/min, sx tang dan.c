#include<stdio.h>
int main()
{
	int a[100],k,i,min;
	printf("Nhap vao so nguyen k: "); scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("a[%d] ",i); scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<k;i++){
		if(min>a[i]) min = a[i];
	}printf(" Phan tu nho nhat trong mang la: %d ",min);
	int j,tg;
	for(i=0;i<k-1;i++){
		for(j=i+1;j<k;j++){
			if(a[i]>a[j]){
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			}
				}
	}for(i=0;i<k;i++){
		printf("%5d ",a[i]);
	}printf("\n");
}
