#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float T=1;
	printf("Nhap vao n: "); scanf("%d",&n);
	if(n%2==0)
	 for(i=2;i<=n;i+=2)
	  T*=i;
	else for(i=1;i<=n;i+=2)
	  T*=i;
	printf("%d=%5.2f",n,T);
	
}
