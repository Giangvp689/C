#include<stdio.h>
#include<conio.h>
long dqgt(int n){
	if(n==0) return 1;
	else return n*dqgt(n-1);
	}
main()
{
	printf("5!=%d\n",dqgt(5));
}

