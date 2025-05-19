#include<stdio.h>
#include<math.h>
int main(){
     int i,x,n;
     float T=100.0;
     printf("Nhap so nguyen n: "); scanf("%d",&n);
     printf("Nhap so nguyen x: "); scanf("%d",&x);
     for(i=1;i<=n;i++){
     	T+=pow(-1,i+1)*((float)x/10*i);
	 }printf("Ket qua: %5.2f",T);
}
