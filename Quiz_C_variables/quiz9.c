#include <stdio.h>
#include <math.h>

int main() {
	int x1 , y1 , x2 , y2 , results  ;
	printf(" Entre Les cordonn�es du point M \n");
		scanf("%d" , &x1);
			scanf("%d" , &y1);
	printf("Entre les cordonn�es du point N \n");
		scanf("%d" ,&x2 );
			scanf("%d" ,&y2 );
			
	printf("Les cordonn�es de M : (%d ,%d) \n " , x1 , y1);
	printf("Les cordonn�es de N : (%d , %d) \n ", x2 , y2);
	results = sqrt((x2-x1)^2 + (y2-y1)^2);
	printf("La distance entre le point M et N  : MN = %d " ,results);
		
		
	return 0 ;
}
