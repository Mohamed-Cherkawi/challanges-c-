#include <stdio.h>

int main() {
	int num , index;
	printf("Enter a number greater than 1 to see if its primal or not \n");
		scanf("%d",&num);
		
		if(num == 1){
					printf("This number is not prime");
					return ;
				}
			for(index = 2 ; index < num ; index++){
				
		if(num%index == 0){
				printf("This number is not prime");
				return;
				}
				}
	        printf("This number is prime");
	return 0;

}
