#include <stdio.h>
#include <stdlib.h>

int main () {
     
	 float distance;
	 printf("Enter a distance in Mile : ");
	 scanf("%f", &distance);
	 printf("The distance is %f m" , (distance/1.609) *1000);
	
	
	return 0 ;
}
