#include<stdio.h>
#include<conio.h>
struct nhanvien{
	char mnv[10],ht[30];
	int tuoi;
};
main()
{
	struct nhanvien nv[100];
	int i,n; 
	printf("Nhap so nhan vien: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhan vien %d ",i+1);
		printf("Ma nv: ");fflush(stdin);gets(nv[i].mnv);
		printf("Ho ten: ");fflush(stdin);gets(nv[i].ht);
		printf("Tuoi: ");scanf("%d",&nv[i].tuoi);
	}
	for(i=0;i<n;i++){
			if(nv[i].tuoi>=55){
		    printf("\nNhan vien %d da o tuoi nghi huu.\n",i+1);
		    printf("\nMa nv: %s",nv[i].mnv);
		    printf("\nHo ten: %s",nv[i].ht);
		    printf("\nTuoi: %d",nv[i].tuoi);
		}
	}
}
