#include <stdio.h>

int main() {
	int num1,num2;
	
	printf("Enter two numbers : \n");
		printf("Enter first number : \n");
			scanf("%d",&num1);
		printf("Enter second number : \n");	
			scanf("%d",&num2);
			
	if(num1 == num2) {
		printf(" This two numbers are identical, Results : %d",(num1 + num2) *3);
	}		
    else {
		printf("This t<o numbers are not indentical, Results : %d",num1 + num2);
	}
	
	
	return 0;
}
