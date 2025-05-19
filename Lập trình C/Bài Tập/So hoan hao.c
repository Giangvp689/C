#include<stdio.h>
main()
{
	int i,n,t,j;
	printf("Nhap n(n<100)="); scanf("%d",&n);
	for(i=1;i<=n;i++)
	 { 
	  t=0;
	  for(j=1;j<i;j++)
	   if(i%j==0)
	   t=t+j;
	  if(t==i)
	  printf("%d la cac so hoan hao \n",j);
	 }
}
