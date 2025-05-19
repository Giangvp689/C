#include<stdio.h>
#include<conio.h>
#include<string.h>

struct nhanvien{
	char manv[10], ht[30], pb[20];
};
int main()
{
	struct nhanvien sv[100];
	int i,n,j,tg;
	printf("Nhap so nhan vien n: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap nhan vien %d:\n",i+1);
		printf("Ma nv: "); fflush(stdin); gets(sv[i].manv);
		printf("Ho ten: "); fflush(stdin);gets(sv[i].ht);
		printf("Phong ban: "); fflush(stdin); gets(sv[i].pb);
	}printf("Danh sach nhan vien phong ke toan la: \n");
	for(i=0;i<n;i++){
		if(sv[i].pb[0]=='K'&& sv[i].pb[1]=='e'&& sv[i].pb[2]==' '&& sv[i].pb[3]=='t'&& sv[i].pb[4]=='o'&& sv[i].pb[5]=='a'&& sv[i].pb[6]=='n')
		printf("%-10s %-20s %-10s",sv[i].manv,sv[i].ht,sv[i].pb);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(nv[i].ht,nv[j].ht)>0){
			
			struct nhanvien tg=nv[i];
			nv[i]=nv[j];
			nv[j]=tg;}
		}
	}printf("Danh sach nv sau khi sap xep");
	for(i=0;i<n;i++){
		printf("%-10s %-20s %-10s",nv[i].manv,nv[i].ht, nv[i].pb);
	}

}
