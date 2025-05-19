#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
main()
{
	int i,d=0;
	char s[200];
	printf("Nhap xau: "); gets(s);
	for(i=0;i<strlen(s)/2;i++){
		if(s[i]!=s[strlen(s)-i-1]){
			d++;break;
		}
	}
	puts(s);
	if(d==0) printf("La xau doi xung\n");
	else printf("Khong la xau doi xung\n");
	//Chuan hoa xau
	//xoa dau cach dau xau
	while(s[0]==' ') strcpy(&s[0],&s[1]);
	//xoa dau cach cuoi xau
	while(s[strlen(s)-1]==' ')
	strcpy(&s[strlen(s)-1],&s[strlen(s)]);
	//xoa dau cach vo nghia trong xau
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]==' '&&s[i+1]==' '){
		strcpy(&s[i],&s[i+1]);
		s[0]=toupper(s[0]);
		i--;	
		}
	}printf("Xau sau khi chuan hoa:\n");printf("%s",s);getch();
}
