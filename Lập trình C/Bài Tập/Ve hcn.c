#include<stdio.h>
int main()
{
    //khai bao a, b
    int i,a, b,j; 
    //nhap du lieu cho a
    do 
    {
        printf("Nhap chieu cao cua hinh chu nhat a = ");
        scanf("%d",&a);
    }while(a<0);
    //nhap du lieu cho b
    do 
    {
        printf("Nhap chieu cao cua hinh chu nhat b = ");
        scanf("%d",&b);
    }while(b<0);
    //vong for dung de dieu khien chieu cao
    for( i = 1; i <= a; ++i)
    {
        //vong for dung de dieu khien chieu rong
        for( j = 1; j <= b; ++j) 
        {
            printf("*");
        }
        printf("\n"); //xuong dong khi in xong 1 hang 
    }
}
