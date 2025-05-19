#include<stdio.h>
#include<conio.h>
struct sinhvien 
{
	char msv[10],ht[20];
	float tongdiem;
};
float tinhtd(struct sinhvien svt){
	return svt.tongdiem;
}
int main()
{
	struct sinhvien sv[100];
	int i,n; 
	printf("Nhap so sv: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap sv %d\n",i+1);
		printf("Ma sv: "); fflush(stdin); gets(sv[i].msv);
		printf("Nhap ho ten: ");fflush(stdin);gets(sv[i].ht);
		printf("Nhap tong diem: ");fflush(stdin); scanf("%f",&sv[i].tongdiem);
		}
    struct sinhvien svMax= sv[0];
    printf("DS sinh vien co tong diem cao nhat la: \n");
    for(i=0;i<n;i++){
	if(tinhtd(svMax) <tinhtd(sv[i])) svMax=sv[i];}
		 for(i=0;i<n;i++){
		 	if(tinhtd(svMax) == tinhtd(sv[i]))
			printf("%-10s %-20s %5.2f\n",sv[i].msv,sv[i].ht,sv[i].tongdiem);}
	printf("Ds sv do (tong diem>=17)\n");
	for(i=0;i<n;i++)
	{if(sv[i].tongdiem>=17) 
	 printf("%-10s %-20s %5.1f\n",sv[i].msv,sv[i].ht,sv[i].tongdiem);
	}
  }
