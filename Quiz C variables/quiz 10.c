#include <stdio.h>

int main() {
	float rayon , results;
	const float pi = 3.14;
	
	printf("Entrer un rayon \n");
		scanf("%f" ,&rayon);
		
	results = 2*pi*rayon;

	printf(" Voila la circonf�rence de circle est : %.f" ,results );
	

	
	
	
	return 0;
}
