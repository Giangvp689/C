#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[200];
	int i,dem1=0,dem2=0,dem=0,dem3=0,dem4=0;
	fflush(stdin);
	printf("Nhap xau ky tu: "); gets(st);
	i=0;
	while(st[i]!='\0') {
		if(isupper(st[i])) dem3++;
		if(islower(st[i])) dem4++;
		if(isalpha(st[i])) dem1++;
		if(isdigit(st[i])) dem2++;
		if(st[i]==' ') dem++;
		i++;
	}
	printf("Xau co %d chu cai va %d chu so, co %d dau cach, \nCo %d chu in hoa, %d chu in thuong\n ",dem1,dem2,dem,dem3,dem4);
	printf("\nDo dai cua xau la :%ld ",strlen(st));
	
}
