#include<stdio.h>
int main(){
	float hoursworked,hourlywage;
	float grosspay,taxes,netpay;
	
	//prompt the user
	printf("Enter hours worked:");
	scanf("%f\n",&hoursworked);
	printf("Enter hourly wage:");
	scanf("%f\n",hourlywage);
	
	//calculate gross pay
	if(hoursworked>40){
		float regularhours=40;
		float overtimehours=hoursworked - 40;
		grosspay = (regularhours*hourlywage)+(overtimehours*hourlywage*1.5);
	}else{
		grosspay=hoursworked*hourlywage;
	}
	
	//calculate taxes
	if(grosspay<=600){
		taxes=grosspay*0.15;
	}else{
		taxes=(600*0.15)+((grosspay-600)*0.20);
	}
	
	//calculate netpay
	netpay=grosspay-taxes;
	
	printf("grosspay:$%.2f\n",grosspay);
	printf("taxes:$%.2f\n",taxes);
	printf("netpay:$%.2f\n",netpay);
	return 0;
}
