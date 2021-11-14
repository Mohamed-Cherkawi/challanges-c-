#include <stdio.h>

int main() {
	int num;
	
	printf("Enter to a number : \n");
		scanf("%d",&num);
		
	if(num > 0) {
		printf("This number is positive");
	}
	else if(num < 0)
	{
	   printf("This number is negative ");
	}
	else {
		printf("This number is zero ");
	}
	
	
	
	return 0;
}
