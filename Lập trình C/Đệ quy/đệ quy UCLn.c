#include<stdio.h>
#include<conio.h>
int UCLN( int x, int y){
	if(x==y) return x;
	else
	  if(x>y) return UCLN(y,x-y);
	  else return UCLN(x,y-x);
}
main()
{
	int a,b;
	printf("Nhap a,b:");scanf("%d %d",&a,&b);
	printf("UCLN (%d,%d) la: %d",a,b,UCLN(a,b));
}
