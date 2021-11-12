#include <stdio.h>

int main () {
	float temperature;
	printf("Enter a tempertaure in Fahren : ");
	scanf("%f" , &temperature);
	temperature = (temperature - 32) /1.8 ;
	
	printf(" The Temperature in C %f \n" ,temperature);
	 
	 
	 if ( temperature <= 0) {
	 	printf("The weather is freezing");
	 	
	 }
	 else if ( temperature >= 0 && temperature < 20 ) {
	 	printf("The weather is cold");
	 
	 }else if ( temperature > 20 && temperature < 30 ) {
	 	printf( "The weather is warm");
	 
	 }else if ( temperature > 30 && temperature < 40 ) {
	 printf("The weather is hot");
	 
	 }else if ( temperature > 40 && temperature <= 50) {
	 	printf("The weather is so hot");
	 }else{
	 	printf("Invalid Temperature !!");
	 }
	
     

	
	
	return 0 ;
}
