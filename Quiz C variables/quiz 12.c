#include <stdio.h>
#include <string.h>

int main() {
	char num[5] ;
	
	printf("Enter a random number : \n");
		scanf("%s" , &num);
		//The function streev() is used to reverse a character.
	printf("%s" , strrev(num));
	
	
	
	return 0;
}
