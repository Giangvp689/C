#include <stdio.h>
#include<conio.h>
main()
 { 
  char ht[50];
  float tongdiem;
  printf("Nhap ho ten "); scanf("%s",&ht);
  printf("%s",ht);
  printf("\nNhap tong diem cua sinh vien %s\n",ht);scanf("%f",&tongdiem);
    printf("Xep loai sinh vien:",tongdiem);
   if(tongdiem<6) printf("kem");
   else if(tongdiem<7) printf("Tb");
   else if(tongdiem<8) printf("Kha");
   else printf("gioi");
  
 }
