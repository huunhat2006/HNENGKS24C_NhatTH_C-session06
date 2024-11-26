#include <stdio.h>

int main()
{
	//tinh tong cac so le  
	// khai bao bien  
	int chan=0;
	int le=0; 
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
	if(a%2==0){
		    chan=1;	
	}
	else{
		le=1;
	}
	if(b%2==0){
		    chan=chan+1;	
	}
	else{
		le=le+1;
}
    if(c%2==0){
		    chan=chan+1;	
	}
	else{
		le=le+1;
	}
	if(d%2==0){
		    chan=chan+1;	
	}
	else{
		le=le+1;
	}
	if(e%2==0){
		    chan=chan+1;	
	}
	else{
		le=le+1;
	}
	printf("Co %d so chan\n",chan);
	printf("Co %d so le",le);
	return 0; 
}

	 
	 
