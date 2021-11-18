#include <stdio.h>

int main() {
	int num , index;
	printf("Enter a number to see if its primal or not :");
		scanf("%d",&num);
		
		if(num == 1){
					printf("This number is not prime");
					return ;
				}
			for(index = 2 ; index < num ; index++){
				
		if(num% index == 0){
				printf("This number is not prime");
				return;
				}
				}
	        printf("This number is prime");
	return 0;

}
