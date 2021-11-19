#include <stdio.h>

/*supposons que l'utilisateur a deja stocké une liste de nombre . Il veut savoir la position du nombre 
dans la liste  */

int main() {
	int num, i;
int  list[7]= { 70, 10, 3, 1, 6577, 25, 7 };  


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
		
			if (num != list[i]) /* Cette condition vérifie si le nombre egale pas à un élement de la liste , si vraie 
									returne que le nombre n'est pas dans la liste	*/	  
		{
			
		printf("  Number (%d) is not found from your List .", num);
					
		}
		 
		
 
	return 0;
}
