#include <stdio.h>

int main() {
	
	echanger(1,3);
	
	return 0;
}

int echanger(int a , int b){

	printf("%$ la valeur de a : %d || b : %d \n",a,b);
		
		int x,y;
		x = a;
		y = b;
		a = y;
		b = x;
		printf("a : %d || b : %d",a,b);
	
	
}
