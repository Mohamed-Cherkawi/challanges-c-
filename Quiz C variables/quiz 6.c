#include <stdio.h>
int main() {
	float temp;
	
	printf("Enter temperature in Farhrenheit : ");
	scanf("%f" , &temp);
	// transform the temp from Farh to Cels
	temp = (temp-32)/1.8;
 	
	
	return 0;
	
}
