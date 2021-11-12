#include <stdio.h>

int main() {
	float  somme , moyenne , a , b , c , d ; 
	 
	printf("Enter num1 : \n ");
	scanf("%f" , &a);
		printf("Enter num2 : \n ");
		scanf("%f" , &b);
			printf("Enter num3 : \n ");
			scanf("%f", &c);
				printf("Enter num4 : \n ");
				scanf("%f" , &d);
	somme = a + b + c +d ;			
printf("La somme de ces nombres c'est %f \n" , somme );
   moyenne = somme/3 ;
 printf("La moyenne de ces nombres c'est %f" , moyenne);  
	
	
	
	
	return 0;
}
