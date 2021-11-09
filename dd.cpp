#include<stdio.h>
int main()
{
int a,b,max,min; //khai báo bien
printf("Nhap a:");   scanf("%d",&a);
printf("Nhap b:");
scanf("%d",&b);
 //Nhap du lieu
//xu ly du lieu
max=(a>b)?a:b;
min=(a<b)?a:b;
//xuat ket qua ra man hinh
printf("max=%d\n",max);
printf("min=%d\n",min);
}
