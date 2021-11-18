#include <stdio.h>

int main() {
	
	echanger(1,3);
	
	return 0;
}

int echanger(int a , int b){

	printf("%$ la valeur de a : %d || b : %d \n",a,b);
		
		int x;
		x = a;
		a = b;
		b = x;
		
		printf("a : %d || b : %d",a,b);
	
	
}
/* Alors ce programme prend deux nombres comme parametre de la fonction
  echanger afin d'inverser la valeur de a par b . 
  je vais donner l'explication de ce programme avec un example
  vive , si j'avais deux tasses , une remplie de l'eau(valeur de a) et 
  l'autre par l'huile (valeur de b) donc logiquement si je veux inverser 
  ces deux éléments il faut d'abord ramener une tasse vide (x) .
  1 etape :  videz le contenu de a dans la tasse vide (x) .
  2 etape : videz le contenu de b dans la tasse de a .
  3 etape : videz le contenu du x (a) dans la tasse de b . */
  
  
