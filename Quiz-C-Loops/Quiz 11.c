#include <stdio.h>

/*supposons que l'utilisateur a deja stock� une liste de nombre . Il veut savoir la position du nombre 
dans la liste  */

int main() {
	int num, i;
int  list[7]= { 1, 2, 3, 4, 5, 6, 7 };  


printf("Enter a number to check if it's in your List or not : ");
		scanf("%d",&num);
		
 	for(i = 0; i < 7 ; i++ ) //j'ai creer une boucle afin de naviguer dans ces �l�ments .
 {

		if( num == list[i] ) // cette condition v�rifie si le nombre entr�e �gale � l'�l�ment dans la liste
		{
			
		printf(" Number (%d) is found from your List and its Position  is (%d) .", list[i] , i + 1);
					break ;	
		}
		
		}
		
			if (num != list[i]) // Alors si la boucle n'a pas trouver le numero entr�e compatible avec aucun �lement . donc y'a pas. 
		{
			
		printf("  Number (%d) is not found from your List .", num);
					
		}
		 
		
 
	return 0;
}
