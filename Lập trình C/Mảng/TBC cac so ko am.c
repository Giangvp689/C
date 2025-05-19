#include<stdio.h>
int main()
{
	int a[100],k,i,dem=0,T=0,demsl=0;
	printf("Nhap so nguyen k: "); scanf("%d",&k);
	for(i=0;i<k;i++)
	{ 
	  printf("a[%d] ",i); scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		if(a[i]>=0)
		T+=a[i];
	}printf("Tong cac so khong am la : %5.2f",1.0*T);
   int j,tg;
   for(i=0;i<k-1;i++){
   	for(j=i+1;j<k;j++){
   		if(a[i]<a[j]){
   			tg=a[i];
   			a[i]=a[j];
   			a[j]=tg;
		   }
	   }
   } for(i=0;i<k;i++){ 
      printf("%5d ",a[i]);
   	
   }
  
}
