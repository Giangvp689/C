#include<stdio.h>
#include<conio.h>
#include<string.h>
struct thisinh
{
	char mts[6], ht[30];
	float diemtoan,diemanh,td;
};
int main()
{
	struct thisinh ts[100];
	int i,n; float min;
	printf("Nhap so thi sinh: "); scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("Nhap thi sinh %d\n",i+1);
		printf("Ma thi sinh: ");fflush(stdin);gets(ts[i].mts);
		printf("Ho ten thi sinh: ");fflush(stdin); gets(ts[i].ht);
		printf("Nhap diem toan: "); fflush(stdin); scanf("%f",&ts[i].diemtoan);
		printf("Nhap diem anh: ");fflush(stdin); scanf("%f",&ts[i].diemanh);
	}
	for(i=0;i<n;i++){
		ts[i].td=ts[i].diemanh+ts[i].diemtoan;
		if(ts[i].mts[0]=='A' && ts[i].mts[1]=='1' && ts[i].mts[2]=='0'&&ts[i].mts[3]=='0' && ts[i].mts[4]=='1'){	
		printf("\nMa thi sinh: %s",ts[i].mts);
		printf("\nHo ten: %s",ts[i].ht);
		printf("\nDiem toan: %5.1f",ts[i].diemtoan);
		printf("\nDiem anh: %5.1f",ts[i].diemanh);
		printf("Tong diem: %5.1f",ts[i].td);
		printf("\n");
		}
	
	}
	min=ts[0].td;
	printf("\nThi sinh co tong diem nho nhat la:");
    for (i = 0; i < n; i++) {
	    if(min>ts[i].td) min=ts[i].td;	
      	for(i=0;i<n;i++){
      		if(min==ts[i].td)
		printf("\n%-5s %-10s toan:%5.1f anh:%5.1f td:%5.1f",ts[i].mts,ts[i].ht,ts[i].diemtoan,ts[i].diemanh,ts[i].td)	;
		printf("\n");
			 }
}
}

