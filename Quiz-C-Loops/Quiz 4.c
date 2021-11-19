#include <stdio.h>

int main(){

int num, x;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Your reversed number : ");
    while (num != 0) {
    	
        x = num % 10;
        num = num / 10;    
		printf(" %d", x);

    }

return 0 ;
}

