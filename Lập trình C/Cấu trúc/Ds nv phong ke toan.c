#include<stdio.h>
#include<conio.h>
#include<string.h>
struct 	nhanvien{
	char mnv[10],ht[30],phongban[30];
	
};
int main()
{
	struct nhanvien nv[100];
	int i,n,j;
	printf("Nhap so luong nhan vien: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhan vien %d ",i+1);
		printf("Ma nv: ");fflush(stdin);gets(nv[i].mnv);
		printf("Ho ten: ");fflush(stdin);gets(nv[i].ht);
		printf("Phong ban:");fflush(stdin);gets(nv[i].phongban);
	}
	printf("Ds nhan vien phong ke toan la:\n");
  	for(i=0;i<n;i++){
  		if(strcmp(nv[i].phongban,"Ke toan")==0)
		  printf("Ma nv: %s  Ho ten: %s \n",nv[i].mnv,nv[i].ht);
				 }
	printf("Sap xep theo ten: \n ");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(nv[i].ht,nv[j].ht)>0){
				struct nhanvien tmp=nv[i];nv[i]=nv[j];nv[j]=tmp;
			}
			}
	}for(i=0;i<n;i++){
		printf("%-5s %-5s %-10s ",nv[i].mnv,nv[i].ht,nv[i].phongban);
		printf("\n");
	}
		
}
