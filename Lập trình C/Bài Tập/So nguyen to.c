#include<stdio.h>
#include<math.h>
main()
{ 
  int i,n,dem=0;
  printf("Nhap n="); scanf("%d",&n);
   for(i=2;i<=sqrt(n);i++)
     if(n%i==0)
      dem++;
     if(dem==0) printf("So nguyen to\n");
     else printf("Khong la so nguyen to\n");
}
