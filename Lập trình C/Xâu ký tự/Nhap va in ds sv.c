#include<stdio.h>
#include<conio.h>
int main()
{
	char ht[5][30];
	int i;
	printf("Nhap SV \n");
	for(i=0;i<5;i++){
		printf("Ho ten cua sinh vien %d:",i);
		fflush(stdin);gets(ht[i]);
	}
	printf("DS SV da nhap la :\n ");
	for(i=0;i<5;i++){
		puts(ht[i]);
	}
}
