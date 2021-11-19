#include <stdio.h>

/*supposons que l'utilisateur a deja stocké une liste de nombre . Il veut savoir la position du nombre 
dans la liste  */

int main() {
	int num, i;
int  list[7]= { 1, 2, 3, 4, 5, 6, 7 };  


printf("Enter a number to check if it's in your List or not : ");
		scanf("%d",&num);
		
 	for(i = 0; i < 7 ; i++ ) //j'ai creer une boucle afin de naviguer dans ces éléments .
 {

		if( num == list[i] ) // cette condition vérifie si le nombre entrée égale à l'élément dans la liste
		{
			
		printf(" Number (%d) is found from your List and its Position  is (%d) .", list[i] , i + 1);
					break ;	
		}
		
		}
		
			if (num != list[i]) // Alors si la boucle n'a pas trouver le numero entrée compatible avec aucun élement . donc y'a pas. 
		{
			
		printf("  Number (%d) is not found from your List .", num);
					
		}
		 
		
 
	return 0;
}
