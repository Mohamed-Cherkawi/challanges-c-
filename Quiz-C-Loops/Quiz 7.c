#include <stdio.h>
#include <stdbool.h>

bool isPremier(int x){
	
int i, a = 0;
bool isNumTrue;
	for( i = 1 ; i<= x ;i++){

	if(x % i == 0){
		a++;
	}

	}

    if(a == 2 )
	isNumTrue = 1;


	else 
	isNumTrue = 0;
	
	
	if(isNumTrue)
	printf("This number is prime");
	
	else
	printf("This number is not prime");




}
int main(){
	int numberEntered;
		printf("Enter a number : ");
			scanf("%d",&numberEntered);
	isPremier(numberEntered);
	
return 0;
}

