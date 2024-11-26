#include <stdio.h>

int main()
{ 
    //khai bao ham  
	int i,num; 
	// gan gia tri cho bien
	printf("Moi ban nhap 1 so nguyen bat ki:");
	scanf("%d",&num);
	//tim uoc va in 
	for(i = 1;i <=num;i ++){
		if(num % i == 0) {
        printf("%d\n", i);
        }
    }
    return 0;
}
