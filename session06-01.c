#include <stdio.h>

int main()
{
	//tinh tong cac so le  
	// khai bao bien  
	int total;
	int a,b,c,d,e; 
	
	// nhap gia tri bao cac bien
	printf("Moi ban nhap so thu nhat:");
	scanf("%d",&a);
	printf("Moi ban nhap so thu hai:");
	scanf("%d",&b);
	printf("Moi ban nhap so thu ba:");
	scanf("%d",&c);
	printf("Moi ban nhap so thu bon:");
	scanf("%d",&d);
	printf("Moi ban nhap so thu nam:");
	scanf("%d",&e);
	// xu ly cac so nguoi dung nhap 
	if(a%2!=0){
		total =a ;	
	}
	if(b%2!=0){
		total =total +b;	
	}
	if(c%2!=0){
		total =total+c;	
	}
	if(d%2!=0){
		total =total+d;	
	}
	if(e%2!=0){
		total =total+e;	
	}
	printf("Tong cac so le la:%d",total); 
	return 0;

 }

