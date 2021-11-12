#include <stdio.h>
#include <math.h>
int main() {
  float  a,b,c,delta;
   
   printf("Enter a : ");
   		scanf("%f",&a);
   	 printf("Enter b : ");
   		scanf("%f",&b);
   		    printf("Enter c : ");
   		      	scanf("%f",&c);
   		    
    delta = (b*b) - 4*(a*c);
   				printf("Le delta egale : %f",delta);
   	
   	if(delta == 0) {
   		printf("L'équation admet une unique solution : x = %f",-b/(2*a));
   		
	   }else if(delta > 0)
	   {
	   	float result1,result2;
	   	result1 = (-b + sqrt(delta))/(2*a);
	   	result2 = (-b - sqrt(delta))/(2*a);
	   	
	   	printf("L'équation admet deux solutions x1 = %f  , x2 = %f",result1,result2);
	   }else
	   {
	   	printf("L'equation n'a acune solution");
	   	
	   }

	return 0;
}
