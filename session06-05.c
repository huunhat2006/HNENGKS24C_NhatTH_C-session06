#include <stdio.h>

int main()
{
	// khai bao bien 
	int year,month,day;
	//Nhap gia tri cho bien 
	printf("Moi ban nhap gia tri cho thang:");
	scanf("%d",&month);
	printf("Moi ban nhap gia tri cho nam:");
	scanf("%d",&year);
	// xu ly yeu cau cua nguoi dung
	while(year>=0 || month>1 || month<13 ){
		    if(month<1 || month>13){
			printf("Thang ban nhap không hop le");
			break; 
		}
		else{
		    if(year<=0){
			printf("Nam ban nhap khong hop le\n");
			break; 
		}
		else{
			if(year % 400 == 0 || year % 4 == 0 && year %100 != 0){
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		    printf("Thang %d cua nam %d co 31 ngay", month,year);
		    break; 
	}
    	else{
		    if(month == 4 || month == 6 || month == 9 || month == 11){
			printf("Thang %d cua nam %d co 30 ngay", month,year);
	}
		else{
			if(month==2){
			printf("Thang %d cua nam %d co 29 ngay", month,year);
			break; 
		}
	}
}
}
		else{
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		    printf("Thang %d cua nam %d co 31 ngay", month,year);
			break; 
}
	    else{
		    if(month == 4 || month == 6 || month == 9 || month == 11){
			printf("Thang %d cua nam %d co 30 ngay", month,year);
		 break;
	}
		else{
			if(month==2){
			printf("Thang %d cua nam %d co 28 ngay", month,year);
			break;
		    }
	        }
	        }
            }			
}
}
}
	return 0;

 }

