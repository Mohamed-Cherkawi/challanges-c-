#include <stdio.h>

int main() {
	int num;
	
	printf("entrer un nombre : \n");
		scanf("%d",&num);
	int y = num%2;
	
	if(y == 0) {
		printf("Le nombre est pair ");
	}	
	else{
		printf("Le nombre est impair");
	}
	
	
	return 0;
}
