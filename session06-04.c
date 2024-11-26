#include <stdio.h>
#include <math.h> 
int main()
{
	//tinh tong cac so le  
	// khai bao bien  
    float delta; 
	float x,x1,x2; 
	int a,b,c; 
	
	// nhap gia tri bao cac bien
	printf("Moi ban nhap so thu nhat:");
	scanf("%d",&a);
	printf("Moi ban nhap so thu hai:");
	scanf("%d",&b);
	printf("Moi ban nhap so thu ba:");
	scanf("%d",&c);
	// xu ly cac so nguoi dung nhap
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem\n"); 
			}
			else{
				printf("Phuong trinh vo nghiem\n"); 
			} 
		}
		else{
			x=-c/b; 
			printf("Phuong trinh co 1 nghiem duy nhat la:-%d/%d\n",c,b); 
		} 
	}
	else{
		delta=b*b-4*a*c;
		
		}
		if(delta==0){ 
		x=-b/(2*a);
		    printf("Phuong trinh co nghiem kep la:-%d/(2*%d)\n",b,a);
		}
		else{
			if("detal<0"){
			printf("Phuong trinh vo nghiem\n"); 
		}
		else{
		x1=(-b +sqrt(delta))/4*a;
		x2=(-b -sqrt(delta))/4*a;
		   printf("Phuong trinh co nghiem thu nhat la:(-%d+sqrt(%f))/4*%d\n",b,delta,a);
		   printf("Phuong trinh co nghiem thu hai la:(-%d-sqrt(%f))/4*%d\n",b,delta,a); 
		} 
		} 
	return 0;	 
	} 
