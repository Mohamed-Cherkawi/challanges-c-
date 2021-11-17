#include <stdio.h>

int main() {
	
	int num, row , space , stars;
	
		printf("Enter the number of rows : ");
			scanf("%d",&num);
		
		for(row = 1; row <= num; row++){
			
			for(space = 1; space <= (num-row); space++)
			{
				printf(" ");
			} 
			for(stars = 1; stars <= (2*row-1); stars++)
			{
				printf("*");	
			}
			printf("\n");
			
		}
	
		
	
	return 0;
}
