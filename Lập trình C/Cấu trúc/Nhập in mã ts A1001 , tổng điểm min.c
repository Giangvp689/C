#include<stdio.h>
#include<conio.h>
#include<string.h>
struct thisinh
{
	char mts[6], ht[30];
	float diemtoan,diemanh;
};
float tinhtd(struct thisinh tst){
	return tst.diemtoan+tst.diemanh;
}
int main()
{
	struct thisinh ts[100];
	int i,n; 
	printf("Nhap so thi sinh: "); scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("Nhap thi sinh %d\n",i+1);
		printf("Ma thi sinh: ");fflush(stdin);gets(ts[i].mts);
		printf("Ho ten thi sinh: ");fflush(stdin); gets(ts[i].ht);
		printf("Nhap diem toan: "); fflush(stdin); scanf("%f",&ts[i].diemtoan);
		printf("Nhap diem anh: ");fflush(stdin); scanf("%f",&ts[i].diemanh);
	}
	for(i=0;i<n;i++){
		if(strcmp(ts[i].mts,"A1001")==0){	
		printf("\nMa thi sinh: %s",ts[i].mts);
		printf("\nHo ten: %s",ts[i].ht);
		printf("\nDiem toan: %5.1f",ts[i].diemtoan);
		printf("\nDiem anh: %5.1f",ts[i].diemanh);
		printf("Tong diem: %5.1f",tinhtd(ts[i]));
		printf("\n");
		}
		}
	struct thisinh tsMin=ts[0];
	printf("\nThi sinh co tong diem nho nhat la:");
    for (i = 0; i < n; i++) {
	    if(tinhtd(tsMin) > tinhtd(ts[i])) tsMin=ts[i];	
      	for(i=0;i<n;i++){
      		if(tinhtd(tsMin)==tinhtd(ts[i]))
		printf("\n%-5s %-10s toan:%5.1f anh:%5.1f td:%5.1f",tsMin.mts,tsMin.ht,tsMin.diemtoan,tsMin.diemanh,tinhtd(tsMin))	;
		printf("\n");
			 }
}
}

