#include <stdio.h>
#include <math.h>
int main()
{ 
int n,i;
int sum=0;
 printf(" Nhap vao so n :"); scanf("%d",&n);
 for(i=0;i<=n;i++) 
  {  if(i%2==0) 
    sum+=i;
  } 
  printf(" Tong = %d",sum);
}
