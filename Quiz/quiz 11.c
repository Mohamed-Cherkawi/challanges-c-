#include <stdio.h>

int main() {
	float longeur , largeur;
	printf("Entrer la longeur du rectangle \n");
		scanf("%f" ,&longeur);
	printf("Entrer la largeur du rectangle");
		scanf("%f" ,&largeur);
	printf("La circonference de ce rectangle est : %f" , 2*(longeur + largeur));
	
	
	
	return 0;
}
