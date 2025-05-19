#include<stdio.h>
#include<conio.h>
struct thisinh{
	char mts[10],ten[5];
	int ns;
};
int tinhtuoi(struct thisinh tst){
	return 2024-tst.ns;
}
main()
{
	struct thisinh ts[100];
	int i,n;
	printf("Nhap so thi sinh: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap sinh vien %d:\n",i+1);
		printf("Nhap ma thi sinh: "); fflush(stdin); gets(ts[i].mts);
		printf("Nhap ten thi sinh: ");fflush(stdin);gets(ts[i].ten);
		printf("Nhap nam sinh: ");scanf("%d",&ts[i].ns);
	}
	for(i=0;i<n;i++){
		if(ts[i].ten[0]=='T'&& ts[i].ten[1]=='h'&& ts[i].ten[2]=='u'&&ts[i].ten[3]=='y'){
			printf("\nMaTs: %s",ts[i].mts);
			printf("\nTen: %s",ts[i].ten);
			printf("\nNam sinh:%d",tinhtuoi(ts[i]));
		}
	}
	struct thisinh TuoiMin=ts[0];
	printf("\nThi sinh nho tuoi nhat la: ");
	for(i=0;i<n;i++){
		if(tinhtuoi(TuoiMin) > tinhtuoi(ts[i]))    TuoiMin=ts[i];}
		for(i=0;i<n;i++){
			if(tinhtuoi(TuoiMin)== tinhtuoi(ts[i]))
			printf("%-5s %-10s %d",TuoiMin.mts,TuoiMin.ten,tinhtuoi(TuoiMin));
		}
	
}
